/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x1402F3290
 * Callers:
 *     KeSetProcess @ 0x1402095F0 (KeSetProcess.c)
 *     KiDirectSwitchThread @ 0x14020F360 (KiDirectSwitchThread.c)
 *     KiOutSwapProcesses @ 0x140210EA0 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x14021119C (KiInSwapProcesses.c)
 *     KiInswapAndReadyThread @ 0x140211410 (KiInswapAndReadyThread.c)
 *     KiInSwapSingleProcess @ 0x14021158C (KiInSwapSingleProcess.c)
 *     KeWaitForGate @ 0x140217454 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x1402175B8 (KiWaitForAllObjects.c)
 *     IoSetIoCompletionEx @ 0x14022A180 (IoSetIoCompletionEx.c)
 *     KiDeregisterObjectWaitBlock @ 0x140232968 (KiDeregisterObjectWaitBlock.c)
 *     KeRundownQueueEx @ 0x140234764 (KeRundownQueueEx.c)
 *     KeRundownQueueCommon @ 0x140234888 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140234B28 (KeDeleteMutant.c)
 *     KeTimeOutQueueWaiters @ 0x14023C084 (KeTimeOutQueueWaiters.c)
 *     KiSwitchQueue @ 0x140242498 (KiSwitchQueue.c)
 *     KiFreezeSingleThread @ 0x140244508 (KiFreezeSingleThread.c)
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 *     KeRemoveQueueEntry @ 0x14024C7D4 (KeRemoveQueueEntry.c)
 *     KiSwitchPriQueue @ 0x140259330 (KiSwitchPriQueue.c)
 *     KeInsertQueue @ 0x1402624D0 (KeInsertQueue.c)
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     KeStartThread @ 0x140292350 (KeStartThread.c)
 *     KiTimerWaitTest @ 0x1402A7FE0 (KiTimerWaitTest.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402B02B0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1402B1740 (ExpReleaseResourceSharedForThreadLite.c)
 *     KiCommitThreadWait @ 0x1402B5240 (KiCommitThreadWait.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 *     KiDecrementProcessStackCount @ 0x1402D0CE0 (KiDecrementProcessStackCount.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402EE104 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeSuspendThread @ 0x1402EE3D8 (KeSuspendThread.c)
 *     KiSuspendThread @ 0x1402EE4D4 (KiSuspendThread.c)
 *     KeResumeThread @ 0x1402EEAA8 (KeResumeThread.c)
 *     KeForceResumeThread @ 0x1402EF5FC (KeForceResumeThread.c)
 *     KiResumeThread @ 0x1402EF710 (KiResumeThread.c)
 *     KeTerminateThread @ 0x1402F00BC (KeTerminateThread.c)
 *     KiRundownMutants @ 0x1402F0604 (KiRundownMutants.c)
 *     KeRegisterObjectNotification @ 0x1402F0D90 (KeRegisterObjectNotification.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KiTimer2Expiration @ 0x1402F27B0 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x1402F2CA0 (KiExpireTimer2.c)
 *     AlpcpQueueIoCompletion @ 0x1402F6750 (AlpcpQueueIoCompletion.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402F8040 (NtReleaseWorkerFactoryWorker.c)
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 *     KeInsertQueueEx @ 0x140311A50 (KeInsertQueueEx.c)
 *     KiProcessThreadWaitList @ 0x140340390 (KiProcessThreadWaitList.c)
 *     KiDetachProcess @ 0x1403470F0 (KiDetachProcess.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14035432C (KiAcquireTimer2LockUnlessDisabled.c)
 *     KeSetEventBoostPriorityEx @ 0x1403595B4 (KeSetEventBoostPriorityEx.c)
 *     IoSetIoCompletionEx2 @ 0x14035A850 (IoSetIoCompletionEx2.c)
 *     KeReleaseSemaphoreEx @ 0x14035AD70 (KeReleaseSemaphoreEx.c)
 *     KiInsertQueueInternal @ 0x14035B608 (KiInsertQueueInternal.c)
 *     KeWakeWaitChain @ 0x14035B8F4 (KeWakeWaitChain.c)
 *     KiThawSingleThread @ 0x14035F27C (KiThawSingleThread.c)
 *     KeRegisterObjectDpc @ 0x140565F08 (KeRegisterObjectDpc.c)
 *     KeRetryOutswapProcess @ 0x14056C540 (KeRetryOutswapProcess.c)
 *     KeQueryTimerDueTime @ 0x14056DF08 (KeQueryTimerDueTime.c)
 *     KeQueryOwnerMutant @ 0x140570BD0 (KeQueryOwnerMutant.c)
 *     KeInsertHeadQueue @ 0x140570CF0 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x140573898 (KiAdjustThreadTimer.c)
 *     KiSatisfyThreadWait @ 0x140578730 (KiSatisfyThreadWait.c)
 *     KeRundownPriQueue @ 0x14057B42C (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x1405E11E4 (PspSetProcessTimerDelayForKTimers.c)
 *     ExpCheckForWorker @ 0x14063F394 (ExpCheckForWorker.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
