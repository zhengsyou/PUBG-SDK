#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// BlueprintGeneratedClass Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C
	// 0x0010 (0x0410 - 0x0400)
	class ABuff_BreakSunkenVehicle_C : public ATslBuff {
	public:
		struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
		class USceneComponent*                             DefaultSceneRoot;                                         // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

		static UClass* StaticClass() {
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x14ad984d);
			return ptr;
		}


		void UserConstructionScript();
		void TickBuff();
		void StopBuffBlueprint(bool* bCanceled);
		void ExecuteUbergraph_Buff_BreakSunkenVehicle(int EntryPoint);
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
