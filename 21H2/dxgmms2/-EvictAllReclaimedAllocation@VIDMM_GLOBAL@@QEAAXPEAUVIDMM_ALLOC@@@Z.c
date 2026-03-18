/*
 * XREFs of ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00D6A68
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00843BC (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C0084964 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00EB918 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00ED83C (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
 * Callees:
 *     GetBucketIdForAllocationSizePow2 @ 0x1C00A53DC (GetBucketIdForAllocationSizePow2.c)
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@PEAIPEA_K@Z @ 0x1C00A8608 (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@PEAIPEA_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictAllReclaimedAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  VIDMM_GLOBAL *v6; // rcx
  struct _LIST_ENTRY *v7; // rsi
  __int64 v8; // rdi
  __int64 BucketIdForAllocationSizePow2; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v13 = 0;
  v11[0] = 0LL;
  VIDMM_GLOBAL::EvictAllAllocationInList(this, (struct _LIST_ENTRY *)((char *)this + 3736), &v13, v11);
  v7 = (struct _LIST_ENTRY *)((char *)this + 3752);
  if ( v7->Flink != v7 )
  {
    v8 = 0LL;
    v12 = 0;
    v14 = 0LL;
    if ( a2 )
    {
      v8 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 16LL);
      if ( v8 )
        KeQueryPerformanceCounter(0LL);
    }
    VIDMM_GLOBAL::EvictAllAllocationInList(v6, v7, &v12, &v14);
    if ( v8 )
    {
      KeQueryPerformanceCounter(0LL);
      BucketIdForAllocationSizePow2 = (unsigned int)GetBucketIdForAllocationSizePow2(*(unsigned int *)(**(_QWORD **)a2 + 16LL));
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 4 * BucketIdForAllocationSizePow2 + 1216));
      _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 4 * BucketIdForAllocationSizePow2 + 1304), v12);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 8 * BucketIdForAllocationSizePow2 + 1392), v14);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 8 * BucketIdForAllocationSizePow2 + 1568), v10);
      *(_BYTE *)(v8 + 1744) = 1;
    }
  }
}
