/*
 * XREFs of KxWaitForLockChainValid @ 0x140282C20
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
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC (KiReleaseQueuedSpinLockInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KxWaitForLockChainValid(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  do
  {
    if ( (++v2 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v2);
    }
    else
    {
      _mm_pause();
    }
    result = *a1;
  }
  while ( !*a1 );
  return result;
}
