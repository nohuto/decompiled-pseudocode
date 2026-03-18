/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x1402E0780
 * Callers:
 *     KeDeregisterObjectNotification @ 0x1402061A0 (KeDeregisterObjectNotification.c)
 *     KeRegisterObjectNotification @ 0x140206258 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140206490 (NtWaitForWorkViaWorkerFactory.c)
 *     KeRemoveQueueEx @ 0x140207B10 (KeRemoveQueueEx.c)
 *     KeReleaseMutant @ 0x140218050 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     KiCommitThreadWait @ 0x14021BDA0 (KiCommitThreadWait.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140221690 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140223290 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeSetProcess @ 0x14023D910 (KeSetProcess.c)
 *     KeSetEventBoostPriorityEx @ 0x140242D58 (KeSetEventBoostPriorityEx.c)
 *     KiDetachProcess @ 0x140268920 (KiDetachProcess.c)
 *     KiDecrementProcessStackCount @ 0x140268DA0 (KiDecrementProcessStackCount.c)
 *     KiProcessExpiredTimerList @ 0x14028BA60 (KiProcessExpiredTimerList.c)
 *     KiTimerWaitTest @ 0x14028BDB0 (KiTimerWaitTest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14028C630 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x14028CF50 (IoSetIoCompletionEx2.c)
 *     KiReadyThread @ 0x14028D5F0 (KiReadyThread.c)
 *     KiTimer2Expiration @ 0x14028D7C0 (KiTimer2Expiration.c)
 *     KeInsertQueueEx @ 0x140295180 (KeInsertQueueEx.c)
 *     CcUnpinFileDataEx @ 0x14029D060 (CcUnpinFileDataEx.c)
 *     KeInsertPriQueue @ 0x1402D4860 (KeInsertPriQueue.c)
 *     KiRundownMutants @ 0x1402D5C98 (KiRundownMutants.c)
 *     KeTerminateThread @ 0x1402D602C (KeTerminateThread.c)
 *     KeForceResumeThread @ 0x1402D7860 (KeForceResumeThread.c)
 *     KiResumeThread @ 0x1402D7924 (KiResumeThread.c)
 *     KeStartThread @ 0x1402D8900 (KeStartThread.c)
 *     KeReleaseSemaphoreEx @ 0x1402DCAE0 (KeReleaseSemaphoreEx.c)
 *     KeWaitForMultipleObjects @ 0x1402DCE40 (KeWaitForMultipleObjects.c)
 *     KiOutSwapProcesses @ 0x1402DD750 (KiOutSwapProcesses.c)
 *     KiDirectSwitchThread @ 0x1402DE570 (KiDirectSwitchThread.c)
 *     KiExpireTimer2 @ 0x1402E01F0 (KiExpireTimer2.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1402E0EDC (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiFreezeSingleThread @ 0x1402EAFAC (KiFreezeSingleThread.c)
 *     KeSuspendThread @ 0x1402EC08C (KeSuspendThread.c)
 *     KiSuspendThread @ 0x1402EC150 (KiSuspendThread.c)
 *     IoSetIoCompletionEx @ 0x1402F1130 (IoSetIoCompletionEx.c)
 *     KeWaitForGate @ 0x1402F5308 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x1402F5424 (KiWaitForAllObjects.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402F58B0 (NtAssociateWaitCompletionPacket.c)
 *     KeReleaseSemaphore @ 0x1402FAEB0 (KeReleaseSemaphore.c)
 *     KiSwitchQueue @ 0x140303594 (KiSwitchQueue.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140303618 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiProcessThreadWaitList @ 0x1403055C0 (KiProcessThreadWaitList.c)
 *     KiInSwapProcesses @ 0x14030A250 (KiInSwapProcesses.c)
 *     KePulseEvent @ 0x14030A3F0 (KePulseEvent.c)
 *     KeRundownQueueEx @ 0x14030B098 (KeRundownQueueEx.c)
 *     KeRundownQueueCommon @ 0x14030B17C (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x14030B3F8 (KeDeleteMutant.c)
 *     KeResumeThread @ 0x1403106F4 (KeResumeThread.c)
 *     KeWakeWaitChain @ 0x140318018 (KeWakeWaitChain.c)
 *     KiInsertQueueInternal @ 0x14031A71C (KiInsertQueueInternal.c)
 *     KeRemoveQueueEntry @ 0x140322DA0 (KeRemoveQueueEntry.c)
 *     KiSwitchPriQueue @ 0x14032D42C (KiSwitchPriQueue.c)
 *     KeSignalGate @ 0x1403331D0 (KeSignalGate.c)
 *     KeTimeOutQueueWaiters @ 0x14035D12C (KeTimeOutQueueWaiters.c)
 *     KeInsertQueue @ 0x1403610A0 (KeInsertQueue.c)
 *     KiThawSingleThread @ 0x14036142C (KiThawSingleThread.c)
 *     KeRetryOutswapProcess @ 0x140511D88 (KeRetryOutswapProcess.c)
 *     KeQueryTimerDueTime @ 0x1405142C8 (KeQueryTimerDueTime.c)
 *     KeQueryOwnerMutant @ 0x140519320 (KeQueryOwnerMutant.c)
 *     KeInsertHeadQueue @ 0x140519440 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x14051D4F4 (KiAdjustThreadTimer.c)
 *     KiSatisfyThreadWait @ 0x140521014 (KiSatisfyThreadWait.c)
 *     KeRundownPriQueue @ 0x14052298C (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x140580A58 (PspSetProcessTimerDelayForKTimers.c)
 *     ExpCheckForWorker @ 0x1405B5594 (ExpCheckForWorker.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14038FC70 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390A50 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
