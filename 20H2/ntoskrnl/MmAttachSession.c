/*
 * XREFs of MmAttachSession @ 0x14023C940
 * Callers:
 *     ExpHpCompactSessionPools @ 0x14023C744 (ExpHpCompactSessionPools.c)
 *     MiLockStealSystemVm @ 0x140321C88 (MiLockStealSystemVm.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiEmptyAccessLogs @ 0x1403A2B70 (MiEmptyAccessLogs.c)
 *     PopPowerButtonWorkCallback @ 0x140576E40 (PopPowerButtonWorkCallback.c)
 *     PopWatchdogWorker @ 0x140577460 (PopWatchdogWorker.c)
 *     ExCallSessionCallBack @ 0x14062BF24 (ExCallSessionCallBack.c)
 *     PspChangeProcessExecutionState @ 0x14062E290 (PspChangeProcessExecutionState.c)
 *     PnpNotifyDriverCallback @ 0x140646E68 (PnpNotifyDriverCallback.c)
 *     ExGetSessionPoolTagInformation @ 0x14065C31C (ExGetSessionPoolTagInformation.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406B0C90 (ObpProcessRemoveObjectQueue.c)
 *     PspAttachSession @ 0x1406DF204 (PspAttachSession.c)
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
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmAttachSession(ULONG_PTR BugCheckParameter1)
{
  __int64 v1; // rdi
  ULONG_PTR v2; // rbx
  _KPROCESS *Process; // rsi
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rbp
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  bool v12; // zf
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r8
  int v16; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter1 + 1368);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = BugCheckParameter1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = Process[1].AffinityPadding[5];
  KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
  if ( (*(_DWORD *)(v1 + 4) & 2) != 0 )
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
          v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    return 3221225738LL;
  }
  else
  {
    ++*(_DWORD *)(v1 + 100);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v5 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && LockHandle.OldIrql <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = v14->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v12 = (v16 & v15[5]) == 0;
          v15[5] &= v16;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
    }
    __writecr8(v5);
    if ( v4 && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 && v4 == v1 )
      v2 = (ULONG_PTR)Process;
    KiStackAttachProcess(v2);
    return 0LL;
  }
}
