/*
 * XREFs of KxWaitForLockOwnerShip @ 0x14022EEA0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140203150 (NtWaitForWorkViaWorkerFactory.c)
 *     MiProcessWorkingSets @ 0x140207BA0 (MiProcessWorkingSets.c)
 *     MiTrimOrAgeWorkingSet @ 0x140208250 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x140208B40 (MiAgeWorkingSet.c)
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiAddWorkingSetEntries @ 0x1402123C0 (MiAddWorkingSetEntries.c)
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14022CB20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpApplyPriorityBoost @ 0x14022F000 (ExpApplyPriorityBoost.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402363C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140242B70 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140242EF0 (ExpWorkerFactoryCheckCreate.c)
 *     IopfCompleteRequest @ 0x1402434C0 (IopfCompleteRequest.c)
 *     IopGetMountFlag @ 0x14027C2D0 (IopGetMountFlag.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140285AA0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtSetInformationWorkerFactory @ 0x140285C70 (NtSetInformationWorkerFactory.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140286C70 (ExpSetResourceOwnerPointerEx.c)
 *     ExReleaseResourceForThreadLite @ 0x14029B1A0 (ExReleaseResourceForThreadLite.c)
 *     IopDereferenceVpbAndFree @ 0x14029CB60 (IopDereferenceVpbAndFree.c)
 *     IoAcquireCancelSpinLock @ 0x14029CF20 (IoAcquireCancelSpinLock.c)
 *     CcUnpinFileDataEx @ 0x1402F4630 (CcUnpinFileDataEx.c)
 *     KeAcquireQueuedSpinLock @ 0x140310C70 (KeAcquireQueuedSpinLock.c)
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
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14034C060 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14034C9B0 (ExpAcquireResourceExclusiveLite.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     IopCheckDeviceAndDriver @ 0x140353340 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x140353920 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x140353B90 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140354BA0 (IopIncrementDeviceObjectRefCount.c)
 *     MiZeroLargePageThread @ 0x1403B3D10 (MiZeroLargePageThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KxWaitForLockOwnerShip(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 8) |= 1uLL;
  *a2 = a1;
  v4 = 0;
  do
    KeYieldProcessorEx(&v4);
  while ( (*(_QWORD *)(a1 + 8) & 1) != 0 );
  return v4;
}
