/*
 * XREFs of KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC
 * Callers:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     IoReleaseCancelSpinLock @ 0x140202A00 (IoReleaseCancelSpinLock.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140202C40 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtSetInformationWorkerFactory @ 0x140202E10 (NtSetInformationWorkerFactory.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140203E10 (ExpSetResourceOwnerPointerEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IopGetMountFlag @ 0x14026A270 (IopGetMountFlag.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 *     MiProcessWorkingSets @ 0x1402AC4A0 (MiProcessWorkingSets.c)
 *     MiTrimOrAgeWorkingSet @ 0x1402ACB50 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x1402AD440 (MiAgeWorkingSet.c)
 *     MiAddWorkingSetEntries @ 0x1402B6CC0 (MiAddWorkingSetEntries.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402D1E50 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpApplyPriorityBoost @ 0x1402D3850 (ExpApplyPriorityBoost.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402DAC10 (MiUnlinkFreeOrZeroedPage.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402E73C0 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402E7740 (ExpWorkerFactoryCheckCreate.c)
 *     IopfCompleteRequest @ 0x1402E7D10 (IopfCompleteRequest.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     CcCanIWrite @ 0x14031DF20 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x14031E220 (CcCanIWriteStreamEx.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1403294A0 (ExpAcquireSharedStarveExclusive.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x1403341C0 (MiInsertProtectedStandbyPage.c)
 *     MiSetVaAgeList @ 0x140338400 (MiSetVaAgeList.c)
 *     CcSetDirtyInMask @ 0x1403411C0 (CcSetDirtyInMask.c)
 *     MiRemoveWsle @ 0x140343D30 (MiRemoveWsle.c)
 *     MiAgePte @ 0x140344190 (MiAgePte.c)
 *     MiLogPageAccess @ 0x1403453A0 (MiLogPageAccess.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140356310 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpAcquireResourceSharedLite @ 0x140356DB0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140357700 (ExpAcquireResourceExclusiveLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140357F10 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     IopCheckDeviceAndDriver @ 0x14035E090 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x14035E670 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x14035E8E0 (IopDecrementDeviceObjectRef.c)
 *     IopDecrementVpbRefCount @ 0x14035F7E0 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14035F8F0 (IopIncrementDeviceObjectRefCount.c)
 *     MiZeroLargePageThread @ 0x1403B3E80 (MiZeroLargePageThread.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     PerfLogSpinLockRelease @ 0x1405AB678 (PerfLogSpinLockRelease.c)
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
