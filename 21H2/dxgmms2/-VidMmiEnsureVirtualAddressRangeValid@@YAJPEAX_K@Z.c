/*
 * XREFs of ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C00E1EDC
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C00873F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?MapCpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@_N2PEAPEAX@Z @ 0x1C00A4DEC (-MapCpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C007C150 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 */

__int64 __fastcall VidMmiEnsureVirtualAddressRangeValid(unsigned __int64 a1, SIZE_T a2)
{
  struct _MDL *Mdl; // rax
  struct _MDL *v3; // rdi
  __int64 v4; // rcx

  Mdl = VidMmiAllocateMdl(a1, a2);
  v3 = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    MmUnlockPages(v3);
    ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    WdLogSingleEntry1(6LL, 1174LL);
    DxgkLogInternalTriageEvent(v4, 262145LL);
    return 3221225495LL;
  }
}
