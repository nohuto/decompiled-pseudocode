/*
 * XREFs of KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC
 * Callers:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140212E00 (ExpInsertPoolTrackerExpansion.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14021A7D0 (ExpSetResourceOwnerPointerEx.c)
 *     ExpBoostIoAfterAcquire @ 0x14021CA70 (ExpBoostIoAfterAcquire.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140221790 (ExpRemovePoolTrackerExpansion.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140224210 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x1402844A0 (CcCanIWriteStreamEx.c)
 *     CcSetDirtyInMask @ 0x14029D860 (CcSetDirtyInMask.c)
 *     IoReleaseCancelSpinLock @ 0x1402A23F0 (IoReleaseCancelSpinLock.c)
 *     IopDereferenceVpbAndFree @ 0x1402A4C30 (IopDereferenceVpbAndFree.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402A6E00 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1402A7190 (IopDecrementDeviceObjectRef.c)
 *     IopCheckDeviceAndDriver @ 0x1402A7720 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x1402A7910 (IopCheckVpbMounted.c)
 *     ExpAcquireResourceExclusiveLite @ 0x1402AE9D0 (ExpAcquireResourceExclusiveLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402B02B0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B0DF0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpAcquireResourceSharedLite @ 0x1402B1170 (ExpAcquireResourceSharedLite.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1402B1740 (ExpReleaseResourceSharedForThreadLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1402D4530 (NtSetInformationWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402F8040 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402F8420 (ExpWorkerFactoryCheckCreate.c)
 *     MiProcessWorkingSets @ 0x14030BBF0 (MiProcessWorkingSets.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14032BD70 (ExpAcquireSharedStarveExclusive.c)
 *     ExpApplyPriorityBoost @ 0x140343010 (ExpApplyPriorityBoost.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14039B280 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     PerfLogSpinLockRelease @ 0x140632CBC (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseQueuedSpinLockInstrumented(volatile signed __int64 **a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rax

  v4 = __rdtsc();
  _m_prefetchw(a1);
  v5 = (__int64)*a1;
  if ( *a1 )
    goto LABEL_4;
  if ( a1 != (volatile signed __int64 **)_InterlockedCompareExchange64(a1[1], 0LL, (signed __int64)a1) )
  {
    v5 = KxWaitForLockChainValid((__int64 *)a1);
LABEL_4:
    *a1 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v5 + 8), 1uLL);
  }
  return PerfLogSpinLockRelease(a1[1], a2, v4);
}
