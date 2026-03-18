/*
 * XREFs of KiReleaseQueuedSpinLockInstrumented @ 0x14051101C
 * Callers:
 *     MiProcessWorkingSets @ 0x1402036D0 (MiProcessWorkingSets.c)
 *     MiTrimOrAgeWorkingSet @ 0x140203D20 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x140204610 (MiAgeWorkingSet.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140208710 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402091B0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140209B00 (ExpAcquireResourceExclusiveLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14020A310 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14020FDA0 (NtWaitForWorkViaWorkerFactory.c)
 *     CcSetDirtyInMask @ 0x140222250 (CcSetDirtyInMask.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14022CBA0 (ExpAcquireSharedStarveExclusive.c)
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x140237D20 (MiSetVaAgeList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14023F530 (MiUnlinkFreeOrZeroedPage.c)
 *     MiRemoveWsle @ 0x1402440F0 (MiRemoveWsle.c)
 *     MiAgePte @ 0x140244550 (MiAgePte.c)
 *     MiLogPageAccess @ 0x140245760 (MiLogPageAccess.c)
 *     NtSetInformationWorkerFactory @ 0x1402661E0 (NtSetInformationWorkerFactory.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     IoReleaseCancelSpinLock @ 0x140278D80 (IoReleaseCancelSpinLock.c)
 *     MiInsertProtectedStandbyPage @ 0x140278FC0 (MiInsertProtectedStandbyPage.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140279540 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140279730 (ExpSetResourceOwnerPointerEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140282320 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402826A0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpApplyPriorityBoost @ 0x1402830C0 (ExpApplyPriorityBoost.c)
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     IopCheckDeviceAndDriver @ 0x140290830 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x140290E10 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x140291080 (IopDecrementDeviceObjectRef.c)
 *     IopDecrementVpbRefCount @ 0x140291F80 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140292090 (IopIncrementDeviceObjectRefCount.c)
 *     IopGetMountFlag @ 0x140298D00 (IopGetMountFlag.c)
 *     MiAddWorkingSetEntries @ 0x1402A43A0 (MiAddWorkingSetEntries.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402BF800 (KeReleaseInStackQueuedSpinLock.c)
 *     CcCanIWrite @ 0x1402C0F70 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x1402C1270 (CcCanIWriteStreamEx.c)
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 *     MiZeroLargePageThread @ 0x1403AB420 (MiZeroLargePageThread.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     PerfLogSpinLockRelease @ 0x1405A5F9C (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseQueuedSpinLockInstrumented(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  volatile signed __int64 *v8; // rdx

  v6 = __rdtsc();
  _m_prefetchw(a1);
  v7 = *a1;
  if ( *a1 )
    goto LABEL_4;
  v8 = (volatile signed __int64 *)a1[1];
  if ( a1 != (_QWORD *)_InterlockedCompareExchange64(v8, 0LL, (signed __int64)a1) )
  {
    v7 = KxWaitForLockChainValid(a1, (__int64)v8, a3, a4);
LABEL_4:
    *a1 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v7 + 8), 1uLL);
  }
  return PerfLogSpinLockRelease(a1[1], a2, v6);
}
