/*
 * XREFs of ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008698C
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0061C1C (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C0062280 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066220 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006FFC0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C9184 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00CB03C (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00CB3CC (-RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00CBB14 (-ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C00869CC (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictAllReclaimedAllocation(VIDMM_GLOBAL *this, __int64 a2, unsigned __int8 a3)
{
  VIDMM_GLOBAL *v4; // rcx
  unsigned __int8 v5; // r8

  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(this);
  VIDMM_GLOBAL::EvictAllAllocationInList(this, (struct _LIST_ENTRY *)((char *)this + 3736), a3);
  VIDMM_GLOBAL::EvictAllAllocationInList(v4, (struct _LIST_ENTRY *)((char *)this + 3752), v5);
}
