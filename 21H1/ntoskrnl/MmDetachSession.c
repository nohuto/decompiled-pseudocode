/*
 * XREFs of MmDetachSession @ 0x14035DA40
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MiUnlockStealVm @ 0x14034B18C (MiUnlockStealVm.c)
 *     ExpHpCompactSessionPools @ 0x14035D7BC (ExpHpCompactSessionPools.c)
 *     MiEmptyAccessLogs @ 0x14039FF10 (MiEmptyAccessLogs.c)
 *     PopWatchdogWorker @ 0x1405733E0 (PopWatchdogWorker.c)
 *     ObpProcessRemoveObjectQueue @ 0x1405EF5A0 (ObpProcessRemoveObjectQueue.c)
 *     MmPrefetchVirtualMemory @ 0x140655D68 (MmPrefetchVirtualMemory.c)
 *     PspChangeProcessExecutionState @ 0x14065E324 (PspChangeProcessExecutionState.c)
 *     EtwpEnableGuid @ 0x14067E254 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x14067F880 (EtwpSendDataBlock.c)
 *     ExGetSessionPoolTagInformation @ 0x1406BCDCC (ExGetSessionPoolTagInformation.c)
 *     PnpNotifyDriverCallback @ 0x14070D040 (PnpNotifyDriverCallback.c)
 *     ExCallSessionCallBack @ 0x140710C88 (ExCallSessionCallBack.c)
 *     PspDetachSession @ 0x140711198 (PspDetachSession.c)
 *     MmEnumerateSystemImages @ 0x140780B00 (MmEnumerateSystemImages.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x140879BC0 (CmFcpChangeSubscriptionWrapper.c)
 *     MmGetSessionMappedViewInformation @ 0x1408BFF80 (MmGetSessionMappedViewInformation.c)
 *     PopLazySensorActiveInput @ 0x1408F0AD4 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x1408FB960 (TtmpSessionWorker.c)
 *     EtwpPoolRunDown @ 0x140939A60 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x140945730 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409D5AFC (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409D5BE4 (VfThunkApplyThunks.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSignalGate @ 0x1403247B0 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmDetachSession(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 OldIrql; // rdi
  __int64 v7; // r8
  _DWORD *v8; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 1368);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, &LockHandle);
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
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        v4 = (unsigned int)v12 & SchedulerAssist[5];
        SchedulerAssist[5] = v4;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  KiUnstackDetachProcess(a2, 0LL, v4, SchedulerAssist);
  if ( v2 )
    KeSignalGate(v2 + 104, 1LL, v7, v8);
  return 0LL;
}
