/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x140280030
 * Callers:
 *     KiDecrementProcessStackCount @ 0x1402051D8 (KiDecrementProcessStackCount.c)
 *     KiDetachProcess @ 0x1402059D0 (KiDetachProcess.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140208710 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14020A310 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiCommitThreadWait @ 0x14020BBE0 (KiCommitThreadWait.c)
 *     KeRemoveQueueEx @ 0x14020F400 (KeRemoveQueueEx.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14020FDA0 (NtWaitForWorkViaWorkerFactory.c)
 *     KeRegisterObjectNotification @ 0x14026745C (KeRegisterObjectNotification.c)
 *     KeSetEventBoostPriorityEx @ 0x140274BF8 (KeSetEventBoostPriorityEx.c)
 *     KeSetProcess @ 0x14027BE30 (KeSetProcess.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14027F1AC (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiTimer2Expiration @ 0x14027F560 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x14027FA60 (KiExpireTimer2.c)
 *     KeWaitForMultipleObjects @ 0x1402801A0 (KeWaitForMultipleObjects.c)
 *     KiProcessThreadWaitList @ 0x140280AB0 (KiProcessThreadWaitList.c)
 *     KiInSwapProcesses @ 0x140280CC8 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x140280E80 (KiOutSwapProcesses.c)
 *     KiReadyThread @ 0x1402813E0 (KiReadyThread.c)
 *     KiProcessExpiredTimerList @ 0x140281580 (KiProcessExpiredTimerList.c)
 *     KiTimerWaitTest @ 0x1402818D0 (KiTimerWaitTest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140282320 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x140282C40 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x1402837B0 (IoSetIoCompletionEx.c)
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     KeReleaseMutant @ 0x140285BF0 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KeInsertPriQueue @ 0x1402BCC20 (KeInsertPriQueue.c)
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 *     KeDeregisterObjectNotification @ 0x1402D5A48 (KeDeregisterObjectNotification.c)
 *     KeStartThread @ 0x1402EAD58 (KeStartThread.c)
 *     KeReleaseSemaphoreEx @ 0x1402EBC30 (KeReleaseSemaphoreEx.c)
 *     KiDirectSwitchThread @ 0x1402EE940 (KiDirectSwitchThread.c)
 *     KePulseEvent @ 0x1402F2EF0 (KePulseEvent.c)
 *     KeTerminateThread @ 0x1402F9A38 (KeTerminateThread.c)
 *     KeForceResumeThread @ 0x1402FA0EC (KeForceResumeThread.c)
 *     KiResumeThread @ 0x1402FA1B0 (KiResumeThread.c)
 *     KiRundownMutants @ 0x1402FAA28 (KiRundownMutants.c)
 *     KeResumeThread @ 0x1402FAC00 (KeResumeThread.c)
 *     KeSuspendThread @ 0x1402FAD18 (KeSuspendThread.c)
 *     KiSuspendThread @ 0x1402FADDC (KiSuspendThread.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402FB40C (KiActivateWaiterQueueWithNoLocks.c)
 *     KiSwitchQueue @ 0x1402FCC10 (KiSwitchQueue.c)
 *     KiFreezeSingleThread @ 0x1402FCE5C (KiFreezeSingleThread.c)
 *     KeWaitForGate @ 0x14030E9A4 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x14030EAC0 (KiWaitForAllObjects.c)
 *     NtAssociateWaitCompletionPacket @ 0x14030EF50 (NtAssociateWaitCompletionPacket.c)
 *     KeReleaseSemaphore @ 0x140327E90 (KeReleaseSemaphore.c)
 *     KeRundownQueueEx @ 0x140338978 (KeRundownQueueEx.c)
 *     KeRundownQueueCommon @ 0x140338A5C (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140338CD8 (KeDeleteMutant.c)
 *     KeInsertQueueEx @ 0x140339334 (KeInsertQueueEx.c)
 *     KeTimeOutQueueWaiters @ 0x140343470 (KeTimeOutQueueWaiters.c)
 *     KeWakeWaitChain @ 0x140346B4C (KeWakeWaitChain.c)
 *     KiThawSingleThread @ 0x140347C4C (KiThawSingleThread.c)
 *     KiInsertQueueInternal @ 0x140349E58 (KiInsertQueueInternal.c)
 *     KeSignalGate @ 0x140350B20 (KeSignalGate.c)
 *     KeRemoveQueueEntry @ 0x14035230C (KeRemoveQueueEntry.c)
 *     KeInsertQueue @ 0x14035ACC0 (KeInsertQueue.c)
 *     KiSwitchPriQueue @ 0x14035CAA4 (KiSwitchPriQueue.c)
 *     KeRetryOutswapProcess @ 0x14050E458 (KeRetryOutswapProcess.c)
 *     KeQueryTimerDueTime @ 0x140510998 (KeQueryTimerDueTime.c)
 *     KeQueryOwnerMutant @ 0x1405159F0 (KeQueryOwnerMutant.c)
 *     KeInsertHeadQueue @ 0x140515B10 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x140519B24 (KiAdjustThreadTimer.c)
 *     KiSatisfyThreadWait @ 0x14051D644 (KiSatisfyThreadWait.c)
 *     KeRundownPriQueue @ 0x14051EFBC (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x14057D028 (PspSetProcessTimerDelayForKTimers.c)
 *     ExpCheckForWorker @ 0x1405B1A34 (ExpCheckForWorker.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14038D780 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038E560 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
