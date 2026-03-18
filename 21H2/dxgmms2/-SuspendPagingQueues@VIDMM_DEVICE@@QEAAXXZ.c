/*
 * XREFs of ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A2BA8
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C00A28BC (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00AABA4 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C00DDD18 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 * Callees:
 *     ?Suspend@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C00A2C58 (-Suspend@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::SuspendPagingQueues(VIDMM_DEVICE *this)
{
  VIDMM_DEVICE *v2; // rbx
  VIDMM_PAGING_QUEUE *v3; // rcx

  if ( !*((_BYTE *)this + 57) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 120, 0LL);
    *((_QWORD *)this + 16) = KeGetCurrentThread();
    v2 = (VIDMM_DEVICE *)*((_QWORD *)this + 13);
    while ( v2 != (VIDMM_DEVICE *)((char *)this + 104) )
    {
      v3 = (VIDMM_DEVICE *)((char *)v2 - 48);
      v2 = *(VIDMM_DEVICE **)v2;
      VIDMM_PAGING_QUEUE::Suspend(v3);
    }
    *((_BYTE *)this + 57) = 1;
    *((_QWORD *)this + 16) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 120, 0LL);
    KeLeaveCriticalRegion();
  }
}
