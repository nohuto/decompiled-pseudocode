/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x14024C4A0
 * Callers:
 *     KeDeregisterObjectNotification @ 0x140202E60 (KeDeregisterObjectNotification.c)
 *     KeRegisterObjectNotification @ 0x140202F18 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140203150 (NtWaitForWorkViaWorkerFactory.c)
 *     KeRemoveQueueEx @ 0x1402047D0 (KeRemoveQueueEx.c)
 *     KiDetachProcess @ 0x140207600 (KiDetachProcess.c)
 *     KiDecrementProcessStackCount @ 0x140207A80 (KiDecrementProcessStackCount.c)
 *     NtAssociateWaitCompletionPacket @ 0x140229620 (NtAssociateWaitCompletionPacket.c)
 *     KeInsertPriQueue @ 0x14023BF70 (KeInsertPriQueue.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140242B70 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x140246230 (IoSetIoCompletionEx2.c)
 *     KiProcessExpiredTimerList @ 0x140247AA0 (KiProcessExpiredTimerList.c)
 *     KiTimerWaitTest @ 0x140247DF0 (KiTimerWaitTest.c)
 *     KiReadyThread @ 0x140248640 (KiReadyThread.c)
 *     KiTimer2Expiration @ 0x1402487E0 (KiTimer2Expiration.c)
 *     KiOutSwapProcesses @ 0x14024A2B0 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x14024A538 (KiInSwapProcesses.c)
 *     KiProcessThreadWaitList @ 0x14024B2D0 (KiProcessThreadWaitList.c)
 *     KiExpireTimer2 @ 0x14024B5C0 (KiExpireTimer2.c)
 *     KeWaitForMultipleObjects @ 0x14024BB90 (KeWaitForMultipleObjects.c)
 *     KiDirectSwitchThread @ 0x14024C840 (KiDirectSwitchThread.c)
 *     KeSetProcess @ 0x140251D1C (KeSetProcess.c)
 *     KeReleaseSemaphoreEx @ 0x1402631F0 (KeReleaseSemaphoreEx.c)
 *     KePulseEvent @ 0x140271AC0 (KePulseEvent.c)
 *     KiRundownMutants @ 0x140277650 (KiRundownMutants.c)
 *     KeStartThread @ 0x140277A6C (KeStartThread.c)
 *     KeTerminateThread @ 0x1402784F0 (KeTerminateThread.c)
 *     KeForceResumeThread @ 0x14027980C (KeForceResumeThread.c)
 *     KiResumeThread @ 0x1402798D0 (KiResumeThread.c)
 *     KeResumeThread @ 0x14027A148 (KeResumeThread.c)
 *     KeSuspendThread @ 0x14027A260 (KeSuspendThread.c)
 *     KiSuspendThread @ 0x14027A324 (KiSuspendThread.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14027FEE0 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiFreezeSingleThread @ 0x1402831E8 (KiFreezeSingleThread.c)
 *     KiThawSingleThread @ 0x140283FD8 (KiThawSingleThread.c)
 *     KeTimeOutQueueWaiters @ 0x1402871CC (KeTimeOutQueueWaiters.c)
 *     IoSetIoCompletionEx @ 0x14028FFC0 (IoSetIoCompletionEx.c)
 *     KeInsertQueueEx @ 0x1402901A0 (KeInsertQueueEx.c)
 *     KeWaitForGate @ 0x140299F74 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x14029A090 (KiWaitForAllObjects.c)
 *     KeReleaseSemaphore @ 0x14029AC70 (KeReleaseSemaphore.c)
 *     KiSwitchQueue @ 0x14029F478 (KiSwitchQueue.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14029F4FC (KiActivateWaiterQueueWithNoLocks.c)
 *     KeRundownQueueEx @ 0x1402A9CF8 (KeRundownQueueEx.c)
 *     KeRundownQueueCommon @ 0x1402A9DDC (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x1402AA058 (KeDeleteMutant.c)
 *     KeWakeWaitChain @ 0x1402BA75C (KeWakeWaitChain.c)
 *     KiInsertQueueInternal @ 0x1402BCED8 (KiInsertQueueInternal.c)
 *     KeSignalGate @ 0x1402C2B70 (KeSignalGate.c)
 *     KeRemoveQueueEntry @ 0x1402C3E10 (KeRemoveQueueEntry.c)
 *     KeInsertQueue @ 0x1402CCD30 (KeInsertQueue.c)
 *     KiSwitchPriQueue @ 0x1402CEF3C (KiSwitchPriQueue.c)
 *     KeSetEventBoostPriorityEx @ 0x1402F1788 (KeSetEventBoostPriorityEx.c)
 *     CcUnpinFileDataEx @ 0x1402F4630 (CcUnpinFileDataEx.c)
 *     KeReleaseMutant @ 0x1403424B0 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x140343AC0 (KiExitDispatcher.c)
 *     KiCommitThreadWait @ 0x140345FB0 (KiCommitThreadWait.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14034B5C0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14034D1C0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeRetryOutswapProcess @ 0x1405138C8 (KeRetryOutswapProcess.c)
 *     KeQueryTimerDueTime @ 0x140515E08 (KeQueryTimerDueTime.c)
 *     KeQueryOwnerMutant @ 0x14051AE60 (KeQueryOwnerMutant.c)
 *     KeInsertHeadQueue @ 0x14051AF80 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x14051EFD4 (KiAdjustThreadTimer.c)
 *     KiSatisfyThreadWait @ 0x140522AF4 (KiSatisfyThreadWait.c)
 *     KeRundownPriQueue @ 0x14052446C (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x140582468 (PspSetProcessTimerDelayForKTimers.c)
 *     ExpCheckForWorker @ 0x1405B6FC4 (ExpCheckForWorker.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140390140 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390F20 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
