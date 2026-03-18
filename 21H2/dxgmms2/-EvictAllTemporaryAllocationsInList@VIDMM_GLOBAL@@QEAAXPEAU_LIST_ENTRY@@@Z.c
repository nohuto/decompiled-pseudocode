/*
 * XREFs of ?EvictAllTemporaryAllocationsInList@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00D6B7C
 * Callers:
 *     ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00D62DC (-EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0083FB8 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A8ADC (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictAllTemporaryAllocationsInList(VIDMM_GLOBAL *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v5; // rsi
  VIDMM_GLOBAL *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  Flink = a2->Flink;
  while ( Flink != a2 )
  {
    v5 = (struct _VIDMM_GLOBAL_ALLOC *)&Flink[-13];
    Flink = Flink->Flink;
    if ( VIDMM_GLOBAL::IsPagingOperationPending(this, v5, 0) )
      WdLogSingleEntry5(0LL, 270LL, 32LL, v5, 1LL, 0LL);
    VIDMM_GLOBAL::EvictTemporaryAllocation(v6, v5, v7, v8);
  }
}
