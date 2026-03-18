/*
 * XREFs of MmAttachSession @ 0x14035DAE0
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MiLockStealSystemVm @ 0x1402E96FC (MiLockStealSystemVm.c)
 *     ExpHpCompactSessionPools @ 0x14035D7BC (ExpHpCompactSessionPools.c)
 *     MiEmptyAccessLogs @ 0x14039FF10 (MiEmptyAccessLogs.c)
 *     PopPowerButtonWorkCallback @ 0x140572DC0 (PopPowerButtonWorkCallback.c)
 *     PopWatchdogWorker @ 0x1405733E0 (PopWatchdogWorker.c)
 *     ObpProcessRemoveObjectQueue @ 0x1405EF5A0 (ObpProcessRemoveObjectQueue.c)
 *     MmPrefetchVirtualMemory @ 0x140655D68 (MmPrefetchVirtualMemory.c)
 *     PspChangeProcessExecutionState @ 0x14065E324 (PspChangeProcessExecutionState.c)
 *     EtwpEnableGuid @ 0x14067E254 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x14067F880 (EtwpSendDataBlock.c)
 *     ExGetSessionPoolTagInformation @ 0x1406BCDCC (ExGetSessionPoolTagInformation.c)
 *     PnpNotifyDriverCallback @ 0x14070D040 (PnpNotifyDriverCallback.c)
 *     ExCallSessionCallBack @ 0x140710C88 (ExCallSessionCallBack.c)
 *     PspAttachSession @ 0x1407111BC (PspAttachSession.c)
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
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmAttachSession(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  _KPROCESS *v4; // rbx
  _KPROCESS *Process; // rsi
  unsigned __int64 v6; // r14
  _DWORD *v7; // r9
  unsigned __int64 v8; // rbp
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r8
  int v19; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = BugCheckParameter1[1].AffinityPadding[5];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = BugCheckParameter1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = Process[1].AffinityPadding[5];
  KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, &LockHandle);
  if ( (*(_DWORD *)(v2 + 4) & 2) != 0 )
  {
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
          v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    return 3221225738LL;
  }
  else
  {
    ++*(_DWORD *)(v2 + 100);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v8 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && LockHandle.OldIrql <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          v7 = (_DWORD *)(-1LL << (LockHandle.OldIrql + 1));
          v19 = ~(unsigned __int16)v7;
          v15 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
    }
    __writecr8(v8);
    if ( v6 && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 && v6 == v2 )
      v4 = Process;
    KiStackAttachProcess(v4, 0LL, a2, v7);
    return 0LL;
  }
}
