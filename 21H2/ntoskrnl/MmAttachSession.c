/*
 * XREFs of MmAttachSession @ 0x1402159C0
 * Callers:
 *     MiLockStealSystemVm @ 0x1402150E4 (MiLockStealSystemVm.c)
 *     ExpHpCompactSessionPools @ 0x140286B94 (ExpHpCompactSessionPools.c)
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     MiEmptyAccessLogs @ 0x1403A3580 (MiEmptyAccessLogs.c)
 *     PopPowerButtonWorkCallback @ 0x140578A90 (PopPowerButtonWorkCallback.c)
 *     PopWatchdogWorker @ 0x1405790B0 (PopWatchdogWorker.c)
 *     ObpProcessRemoveObjectQueue @ 0x1405E2E40 (ObpProcessRemoveObjectQueue.c)
 *     ExGetSessionPoolTagInformation @ 0x1405E413C (ExGetSessionPoolTagInformation.c)
 *     PspAttachSession @ 0x1405E4478 (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x1405E44F8 (ExCallSessionCallBack.c)
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1406BB334 (EtwpSendDataBlock.c)
 *     MmPrefetchVirtualMemory @ 0x1406BEF48 (MmPrefetchVirtualMemory.c)
 *     PspChangeProcessExecutionState @ 0x1406F5340 (PspChangeProcessExecutionState.c)
 *     PnpNotifyDriverCallback @ 0x1406FD0AC (PnpNotifyDriverCallback.c)
 *     MmEnumerateSystemImages @ 0x140797FE0 (MmEnumerateSystemImages.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x14087E520 (CmFcpChangeSubscriptionWrapper.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C4A30 (MmGetSessionMappedViewInformation.c)
 *     PopLazySensorActiveInput @ 0x1408F5314 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x140900190 (TtmpSessionWorker.c)
 *     EtwpPoolRunDown @ 0x14093E4D0 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x14094A130 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409D9B6C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409D9C54 (VfThunkApplyThunks.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
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
