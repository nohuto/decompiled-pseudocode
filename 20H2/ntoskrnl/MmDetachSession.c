/*
 * XREFs of MmDetachSession @ 0x14023C8A0
 * Callers:
 *     ExpHpCompactSessionPools @ 0x14023C744 (ExpHpCompactSessionPools.c)
 *     MiUnlockStealVm @ 0x140353A68 (MiUnlockStealVm.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiEmptyAccessLogs @ 0x1403A2B70 (MiEmptyAccessLogs.c)
 *     PopWatchdogWorker @ 0x140577460 (PopWatchdogWorker.c)
 *     ExCallSessionCallBack @ 0x14062BF24 (ExCallSessionCallBack.c)
 *     PspChangeProcessExecutionState @ 0x14062E290 (PspChangeProcessExecutionState.c)
 *     PnpNotifyDriverCallback @ 0x140646E68 (PnpNotifyDriverCallback.c)
 *     ExGetSessionPoolTagInformation @ 0x14065C31C (ExGetSessionPoolTagInformation.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406B0C90 (ObpProcessRemoveObjectQueue.c)
 *     PspDetachSession @ 0x1406E062C (PspDetachSession.c)
 *     MmPrefetchVirtualMemory @ 0x1406F09B8 (MmPrefetchVirtualMemory.c)
 *     EtwpEnableGuid @ 0x1407188EC (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x14071A53C (EtwpSendDataBlock.c)
 *     MmEnumerateSystemImages @ 0x14078DA30 (MmEnumerateSystemImages.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x140880A20 (CmFcpChangeSubscriptionWrapper.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C7110 (MmGetSessionMappedViewInformation.c)
 *     PopLazySensorActiveInput @ 0x1408F79D4 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x140902880 (TtmpSessionWorker.c)
 *     EtwpPoolRunDown @ 0x140940B30 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x14094C790 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409DBB7C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409DBC64 (VfThunkApplyThunks.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSignalGate @ 0x1403331D0 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmDetachSession(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 1368);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
  --*(_DWORD *)(v2 + 100);
  if ( (*(_DWORD *)(v2 + 4) & 2) == 0 || *(_DWORD *)(v2 + 100) )
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
    KeSignalGate(v2 + 104, 1LL);
  return 0LL;
}
