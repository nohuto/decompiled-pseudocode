/*
 * XREFs of ?IsRangeValid@@YAE_K00@Z @ 0x1C00D7C1C
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C00DC7D4 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int8 __fastcall IsRangeValid(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rcx

  if ( a2 <= a1 )
  {
    WdLogSingleEntry1(1LL, 25822LL);
LABEL_3:
    DxgkLogInternalTriageEvent(v3, 0x40000LL);
    return 0;
  }
  if ( a2 > a3 )
  {
    WdLogSingleEntry1(1LL, 25827LL);
    goto LABEL_3;
  }
  return 1;
}
