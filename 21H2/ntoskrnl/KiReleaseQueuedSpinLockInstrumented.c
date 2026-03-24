/*
 * XREFs of KiReleaseQueuedSpinLockInstrumented @ 0x14051648C
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140203150 (NtWaitForWorkViaWorkerFactory.c)
 *     MiProcessWorkingSets @ 0x140207BA0 (MiProcessWorkingSets.c)
 *     MiTrimOrAgeWorkingSet @ 0x140208250 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x140208B40 (MiAgeWorkingSet.c)
 *     MiAddWorkingSetEntries @ 0x1402123C0 (MiAddWorkingSetEntries.c)
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022D600 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpApplyPriorityBoost @ 0x14022F000 (ExpApplyPriorityBoost.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402363C0 (MiUnlinkFreeOrZeroedPage.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140242B70 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140242EF0 (ExpWorkerFactoryCheckCreate.c)
 *     IopfCompleteRequest @ 0x1402434C0 (IopfCompleteRequest.c)
 *     IopGetMountFlag @ 0x14027C2D0 (IopGetMountFlag.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     IoReleaseCancelSpinLock @ 0x140285860 (IoReleaseCancelSpinLock.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140285AA0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtSetInformationWorkerFactory @ 0x140285C70 (NtSetInformationWorkerFactory.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140286C70 (ExpSetResourceOwnerPointerEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcUnpinFileDataEx @ 0x1402F4630 (CcUnpinFileDataEx.c)
 *     KeReleaseQueuedSpinLock @ 0x140310BD0 (KeReleaseQueuedSpinLock.c)
 *     CcCanIWrite @ 0x1403131D0 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x1403134D0 (CcCanIWriteStreamEx.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14031E750 (ExpAcquireSharedStarveExclusive.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x140329470 (MiInsertProtectedStandbyPage.c)
 *     MiSetVaAgeList @ 0x14032D6B0 (MiSetVaAgeList.c)
 *     CcSetDirtyInMask @ 0x140336470 (CcSetDirtyInMask.c)
 *     MiRemoveWsle @ 0x140338FE0 (MiRemoveWsle.c)
 *     MiAgePte @ 0x140339440 (MiAgePte.c)
 *     MiLogPageAccess @ 0x14033A650 (MiLogPageAccess.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14034B5C0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14034C060 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14034C9B0 (ExpAcquireResourceExclusiveLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14034D1C0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     IopCheckDeviceAndDriver @ 0x140353340 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x140353920 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x140353B90 (IopDecrementDeviceObjectRef.c)
 *     IopDecrementVpbRefCount @ 0x140354A90 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140354BA0 (IopIncrementDeviceObjectRefCount.c)
 *     MiZeroLargePageThread @ 0x1403B3D10 (MiZeroLargePageThread.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     PerfLogSpinLockRelease @ 0x1405AB448 (PerfLogSpinLockRelease.c)
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
