/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x140243930
 * Callers:
 *     KeInsertPriQueue @ 0x140229FA0 (KeInsertPriQueue.c)
 *     CcUnpinFileDataEx @ 0x1402305D0 (CcUnpinFileDataEx.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x140242AAC (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiTimer2Expiration @ 0x140242E60 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x140243360 (KiExpireTimer2.c)
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     KiProcessThreadWaitList @ 0x1402443B0 (KiProcessThreadWaitList.c)
 *     KiInSwapProcesses @ 0x1402445C8 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x140244780 (KiOutSwapProcesses.c)
 *     KiReadyThread @ 0x140244C00 (KiReadyThread.c)
 *     KiProcessExpiredTimerList @ 0x140244DA0 (KiProcessExpiredTimerList.c)
 *     KiTimerWaitTest @ 0x1402450F0 (KiTimerWaitTest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140245B40 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x140246460 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x140246FD0 (IoSetIoCompletionEx.c)
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     KeReleaseMutant @ 0x140249450 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiDecrementProcessStackCount @ 0x14025E0F8 (KiDecrementProcessStackCount.c)
 *     KiDetachProcess @ 0x14025E8F0 (KiDetachProcess.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140261630 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140263230 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiCommitThreadWait @ 0x140264C30 (KiCommitThreadWait.c)
 *     KeRemoveQueueEx @ 0x140268450 (KeRemoveQueueEx.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140268DF0 (NtWaitForWorkViaWorkerFactory.c)
 *     KeRegisterObjectNotification @ 0x1402C048C (KeRegisterObjectNotification.c)
 *     KeWaitForGate @ 0x1402CCFD8 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x1402CD0F4 (KiWaitForAllObjects.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402CD580 (NtAssociateWaitCompletionPacket.c)
 *     KeSetProcess @ 0x1402D4298 (KeSetProcess.c)
 *     KeDeregisterObjectNotification @ 0x1402E2798 (KeDeregisterObjectNotification.c)
 *     KeReleaseSemaphore @ 0x1402EE560 (KeReleaseSemaphore.c)
 *     KePulseEvent @ 0x1402F6B10 (KePulseEvent.c)
 *     KeRundownQueueEx @ 0x1402FB948 (KeRundownQueueEx.c)
 *     KeRundownQueueCommon @ 0x1402FBA2C (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x1402FBCA8 (KeDeleteMutant.c)
 *     KeInsertQueueEx @ 0x1402FBFF8 (KeInsertQueueEx.c)
 *     KeTimeOutQueueWaiters @ 0x1403059C0 (KeTimeOutQueueWaiters.c)
 *     KeWakeWaitChain @ 0x140308D4C (KeWakeWaitChain.c)
 *     KiThawSingleThread @ 0x14030B3FC (KiThawSingleThread.c)
 *     KiInsertQueueInternal @ 0x14030BF98 (KiInsertQueueInternal.c)
 *     KeRemoveQueueEntry @ 0x140314500 (KeRemoveQueueEntry.c)
 *     KeInsertQueue @ 0x14031D0E0 (KeInsertQueue.c)
 *     KiSwitchPriQueue @ 0x14031EF94 (KiSwitchPriQueue.c)
 *     KeSignalGate @ 0x1403247B0 (KeSignalGate.c)
 *     KeStartThread @ 0x14032FE98 (KeStartThread.c)
 *     KeReleaseSemaphoreEx @ 0x140330D70 (KeReleaseSemaphoreEx.c)
 *     KiDirectSwitchThread @ 0x140333A80 (KiDirectSwitchThread.c)
 *     KeTerminateThread @ 0x140355A18 (KeTerminateThread.c)
 *     KeForceResumeThread @ 0x1403560CC (KeForceResumeThread.c)
 *     KiResumeThread @ 0x140356190 (KiResumeThread.c)
 *     KiRundownMutants @ 0x140356A08 (KiRundownMutants.c)
 *     KeResumeThread @ 0x140356BE0 (KeResumeThread.c)
 *     KeSuspendThread @ 0x140356CF8 (KeSuspendThread.c)
 *     KiSuspendThread @ 0x140356DBC (KiSuspendThread.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1403573EC (KiActivateWaiterQueueWithNoLocks.c)
 *     KiSwitchQueue @ 0x140358BF0 (KiSwitchQueue.c)
 *     KiFreezeSingleThread @ 0x140358E3C (KiFreezeSingleThread.c)
 *     KeSetEventBoostPriorityEx @ 0x14035A898 (KeSetEventBoostPriorityEx.c)
 *     KeRetryOutswapProcess @ 0x14050DE08 (KeRetryOutswapProcess.c)
 *     KeQueryTimerDueTime @ 0x140510348 (KeQueryTimerDueTime.c)
 *     KeQueryOwnerMutant @ 0x1405153A0 (KeQueryOwnerMutant.c)
 *     KeInsertHeadQueue @ 0x1405154C0 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x1405194D4 (KiAdjustThreadTimer.c)
 *     KiSatisfyThreadWait @ 0x14051CFF4 (KiSatisfyThreadWait.c)
 *     KeRundownPriQueue @ 0x14051E96C (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x14057C9E8 (PspSetProcessTimerDelayForKTimers.c)
 *     ExpCheckForWorker @ 0x1405B1314 (ExpCheckForWorker.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14038CC10 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038D9F0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall KiAcquireKobjectLockSafe(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v6; // [rsp+20h] [rbp-8h]

  v4 = 0;
  if ( _interlockedbittestandset(a1, 7u) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4, v6) )
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
