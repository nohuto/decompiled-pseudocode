/*
 * XREFs of MmDetachSession @ 0x140231240
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     ExpHpCompactSessionPools @ 0x1402A0EF8 (ExpHpCompactSessionPools.c)
 *     MiUnlockStealVm @ 0x1402EA5E4 (MiUnlockStealVm.c)
 *     MiEmptyAccessLogs @ 0x140375ED0 (MiEmptyAccessLogs.c)
 *     PopWatchdogWorker @ 0x1403A0B60 (PopWatchdogWorker.c)
 *     PspChangeProcessExecutionState @ 0x140687754 (PspChangeProcessExecutionState.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406A1000 (ObpProcessRemoveObjectQueue.c)
 *     ExGetSessionPoolTagInformation @ 0x1406A8B68 (ExGetSessionPoolTagInformation.c)
 *     PspDetachSession @ 0x1406A8EC8 (PspDetachSession.c)
 *     ExCallSessionCallBack @ 0x1406A8F48 (ExCallSessionCallBack.c)
 *     MmPrefetchVirtualMemory @ 0x1406EC048 (MmPrefetchVirtualMemory.c)
 *     PnpNotifyDriverCallback @ 0x14078D3DC (PnpNotifyDriverCallback.c)
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x140790CF8 (EtwpSendDataBlock.c)
 *     MmEnumerateSystemImages @ 0x140814DC0 (MmEnumerateSystemImages.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x1409234E0 (CmFcpChangeSubscriptionWrapper.c)
 *     TtmpSessionWorker @ 0x1409A5C10 (TtmpSessionWorker.c)
 *     EtwpPoolRunDown @ 0x1409EAB74 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1409F5D80 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyPristineToAllSession @ 0x140A93644 (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140A937C4 (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmDetachSession(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_DWORD **)(a1 + 1368);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  --v2[23];
  if ( (v2[1] & 2) == 0 || v2[23] )
    v2 = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  KiUnstackDetachProcess(a2, 0LL);
  if ( v2 )
    KeSignalGate(v2 + 24);
  return 0LL;
}
