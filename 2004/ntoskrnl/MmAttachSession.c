/*
 * XREFs of MmAttachSession @ 0x1402DCB20
 * Callers:
 *     ExpHpCompactSessionPools @ 0x1402DC804 (ExpHpCompactSessionPools.c)
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 *     MiLockStealSystemVm @ 0x140321188 (MiLockStealSystemVm.c)
 *     MiEmptyAccessLogs @ 0x1403A06A0 (MiEmptyAccessLogs.c)
 *     PopPowerButtonWorkCallback @ 0x140573410 (PopPowerButtonWorkCallback.c)
 *     PopWatchdogWorker @ 0x140573A30 (PopWatchdogWorker.c)
 *     EtwpEnableGuid @ 0x140635748 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x140637004 (EtwpSendDataBlock.c)
 *     PnpNotifyDriverCallback @ 0x140648974 (PnpNotifyDriverCallback.c)
 *     PspChangeProcessExecutionState @ 0x14065A9AC (PspChangeProcessExecutionState.c)
 *     ObpProcessRemoveObjectQueue @ 0x140698AB0 (ObpProcessRemoveObjectQueue.c)
 *     PspAttachSession @ 0x1406A4BAC (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x1406A507C (ExCallSessionCallBack.c)
 *     MmPrefetchVirtualMemory @ 0x1406D03C8 (MmPrefetchVirtualMemory.c)
 *     ExGetSessionPoolTagInformation @ 0x1406DE15C (ExGetSessionPoolTagInformation.c)
 *     MmEnumerateSystemImages @ 0x140780120 (MmEnumerateSystemImages.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x14087AEB0 (CmFcpChangeSubscriptionWrapper.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C12D0 (MmGetSessionMappedViewInformation.c)
 *     PopLazySensorActiveInput @ 0x1408F1DC4 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x1408FCC50 (TtmpSessionWorker.c)
 *     EtwpPoolRunDown @ 0x14093AD00 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1409469D0 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409D5B5C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409D5C44 (VfThunkApplyThunks.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmAttachSession(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  _KPROCESS *v4; // rbx
  _KPROCESS *Process; // rsi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v13; // eax
  bool v14; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r8
  int v18; // eax
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
          v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
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
    v7 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && LockHandle.OldIrql <= 0xFu && v15 >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          v17 = v16->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v14 = (v18 & v17[5]) == 0;
          v17[5] &= v18;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
    }
    __writecr8(v7);
    if ( v6 && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 && v6 == v2 )
      v4 = Process;
    KiStackAttachProcess(v4, 0LL, a2);
    return 0LL;
  }
}
