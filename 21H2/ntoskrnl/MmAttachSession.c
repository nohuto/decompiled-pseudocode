/*
 * XREFs of MmAttachSession @ 0x140298FE0
 * Callers:
 *     MiLockStealSystemVm @ 0x140298704 (MiLockStealSystemVm.c)
 *     ExpHpCompactSessionPools @ 0x1402D5848 (ExpHpCompactSessionPools.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC44 (MiTrimSharedPageFromViews.c)
 *     MiEmptyAccessLogs @ 0x1403A3430 (MiEmptyAccessLogs.c)
 *     PopPowerButtonWorkCallback @ 0x140578850 (PopPowerButtonWorkCallback.c)
 *     PopWatchdogWorker @ 0x140578E70 (PopWatchdogWorker.c)
 *     PspChangeProcessExecutionState @ 0x140605D50 (PspChangeProcessExecutionState.c)
 *     ExGetSessionPoolTagInformation @ 0x1406832BC (ExGetSessionPoolTagInformation.c)
 *     PspAttachSession @ 0x1406835F8 (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x140683678 (ExCallSessionCallBack.c)
 *     ObpProcessRemoveObjectQueue @ 0x140684B90 (ObpProcessRemoveObjectQueue.c)
 *     EtwpEnableGuid @ 0x1406E2404 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1406E4054 (EtwpSendDataBlock.c)
 *     PnpNotifyDriverCallback @ 0x1406E5CC4 (PnpNotifyDriverCallback.c)
 *     MmPrefetchVirtualMemory @ 0x1407108F8 (MmPrefetchVirtualMemory.c)
 *     MmEnumerateSystemImages @ 0x140797DE0 (MmEnumerateSystemImages.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x14087E3C0 (CmFcpChangeSubscriptionWrapper.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C48D0 (MmGetSessionMappedViewInformation.c)
 *     PopLazySensorActiveInput @ 0x1408F51B4 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x140900030 (TtmpSessionWorker.c)
 *     EtwpPoolRunDown @ 0x14093E300 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x140949F60 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409D8B6C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409D8C54 (VfThunkApplyThunks.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
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
