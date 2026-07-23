/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x1402F0CF0
 * Callers:
 *     KeTimeOutQueueWaiters @ 0x14020436C (KeTimeOutQueueWaiters.c)
 *     IoSetIoCompletionEx @ 0x14020DF30 (IoSetIoCompletionEx.c)
 *     KeInsertQueueEx @ 0x14020E110 (KeInsertQueueEx.c)
 *     KeReleaseSemaphore @ 0x140212600 (KeReleaseSemaphore.c)
 *     KiSwitchQueue @ 0x14021C9D8 (KiSwitchQueue.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14021CA5C (KiActivateWaiterQueueWithNoLocks.c)
 *     KeRundownQueueEx @ 0x140227E38 (KeRundownQueueEx.c)
 *     KeRundownQueueCommon @ 0x140227F1C (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140228198 (KeDeleteMutant.c)
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x14022A600 (KiWaitForAllObjects.c)
 *     KeWakeWaitChain @ 0x14023896C (KeWakeWaitChain.c)
 *     KiThawSingleThread @ 0x14023A5D0 (KiThawSingleThread.c)
 *     KiFreezeSingleThread @ 0x14023A74C (KiFreezeSingleThread.c)
 *     KiInsertQueueInternal @ 0x14023B588 (KiInsertQueueInternal.c)
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     KeRemoveQueueEntry @ 0x140242390 (KeRemoveQueueEntry.c)
 *     KiSwitchPriQueue @ 0x14024D43C (KiSwitchPriQueue.c)
 *     KePulseEvent @ 0x14025FA60 (KePulseEvent.c)
 *     KiRundownMutants @ 0x1402655F0 (KiRundownMutants.c)
 *     KeStartThread @ 0x140265A0C (KeStartThread.c)
 *     KeTerminateThread @ 0x140266490 (KeTerminateThread.c)
 *     KeForceResumeThread @ 0x1402677AC (KeForceResumeThread.c)
 *     KiResumeThread @ 0x140267870 (KiResumeThread.c)
 *     KeResumeThread @ 0x1402680E8 (KeResumeThread.c)
 *     KeSuspendThread @ 0x140268200 (KeSuspendThread.c)
 *     KiSuspendThread @ 0x1402682C4 (KiSuspendThread.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14026E120 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KeReleaseSemaphoreEx @ 0x140284630 (KeReleaseSemaphoreEx.c)
 *     KeInsertQueue @ 0x14029EAA0 (KeInsertQueue.c)
 *     KeDeregisterObjectNotification @ 0x1402A77A0 (KeDeregisterObjectNotification.c)
 *     KeRegisterObjectNotification @ 0x1402A7858 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 *     KeRemoveQueueEx @ 0x1402A9110 (KeRemoveQueueEx.c)
 *     KiDetachProcess @ 0x1402ABF00 (KiDetachProcess.c)
 *     KiDecrementProcessStackCount @ 0x1402AC380 (KiDecrementProcessStackCount.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402CDF20 (NtAssociateWaitCompletionPacket.c)
 *     KeInsertPriQueue @ 0x1402E07C0 (KeInsertPriQueue.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402E73C0 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x1402EAA80 (IoSetIoCompletionEx2.c)
 *     KiProcessExpiredTimerList @ 0x1402EC2F0 (KiProcessExpiredTimerList.c)
 *     KiTimerWaitTest @ 0x1402EC640 (KiTimerWaitTest.c)
 *     KiReadyThread @ 0x1402ECE90 (KiReadyThread.c)
 *     KiTimer2Expiration @ 0x1402ED030 (KiTimer2Expiration.c)
 *     KiOutSwapProcesses @ 0x1402EEB00 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x1402EED88 (KiInSwapProcesses.c)
 *     KiProcessThreadWaitList @ 0x1402EFB20 (KiProcessThreadWaitList.c)
 *     KiExpireTimer2 @ 0x1402EFE10 (KiExpireTimer2.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     KiDirectSwitchThread @ 0x1402F1090 (KiDirectSwitchThread.c)
 *     KeSetProcess @ 0x1402F652C (KeSetProcess.c)
 *     KeSetEventBoostPriorityEx @ 0x1402FC4D8 (KeSetEventBoostPriorityEx.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     KeReleaseMutant @ 0x14034D200 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KiCommitThreadWait @ 0x140350D00 (KiCommitThreadWait.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140356310 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140357F10 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeRetryOutswapProcess @ 0x140513B08 (KeRetryOutswapProcess.c)
 *     KeQueryTimerDueTime @ 0x140516048 (KeQueryTimerDueTime.c)
 *     KeQueryOwnerMutant @ 0x14051B0A0 (KeQueryOwnerMutant.c)
 *     KeInsertHeadQueue @ 0x14051B1C0 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x14051F214 (KiAdjustThreadTimer.c)
 *     KiSatisfyThreadWait @ 0x140522D34 (KiSatisfyThreadWait.c)
 *     KeRundownPriQueue @ 0x1405246AC (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x140582698 (PspSetProcessTimerDelayForKTimers.c)
 *     ExpCheckForWorker @ 0x1405B71F4 (ExpCheckForWorker.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140390290 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140391070 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall KiAcquireKobjectLockSafe(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi

  v4 = 0;
  if ( _interlockedbittestandset(a1, 7u) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (*a1 & 0x80u) != 0 || _interlockedbittestandset(a1, 7u) );
  }
}
