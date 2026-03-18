/*
 * XREFs of ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00B2264
 * Callers:
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0069F50 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E80 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C006179C (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006FFC0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BAF2C (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockInAperture(
        VIDMM_WORKER_THREAD **this,
        struct _VIDMM_GLOBAL_ALLOC ***a2,
        bool *a3,
        __int64 ***a4)
{
  struct _VIDMM_GLOBAL_ALLOC *v8; // rbx

  v8 = **a2;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)this, &EventPerformanceWarning, (__int64)a3, 22);
  if ( *((_QWORD *)v8 + 16) )
  {
    VIDMM_WORKER_THREAD::SuspendAccessToAllocation(*this, v8);
    VIDMM_GLOBAL::EvictOneAllocation(this, (struct VIDMM_ALLOC *)a2, 0LL);
  }
  return VIDMM_GLOBAL::PageInOneAllocation((__int64)this, (__int64 **)a2, 2, 0, a3, a4, 0, -1LL);
}
