/*
 * XREFs of ??$GetAppPosition@VCImmersiveAppFinderByTaskWindow@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByTaskWindow@@_KPEA_K@Z @ 0x1801439E0
 * Callers:
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180145984 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x180156848 (-_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z.c)
 * Callees:
 *     ??$FindEx@VCImmersiveAppFinderByTaskWindow@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByTaskWindow@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18000DA3C (--$FindEx@VCImmersiveAppFinderByTaskWindow@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicati.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByTaskWindow>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-18h]
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByTaskWindow>(
         (_QWORD *)(a1 + 8),
         a2,
         &v7,
         a4,
         v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  return v4;
}
