/*
 * XREFs of KxWaitForLockOwnerShip @ 0x1402D36F0
 * Callers:
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140202C40 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtSetInformationWorkerFactory @ 0x140202E10 (NtSetInformationWorkerFactory.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140203E10 (ExpSetResourceOwnerPointerEx.c)
 *     ExReleaseResourceForThreadLite @ 0x140212B30 (ExReleaseResourceForThreadLite.c)
 *     IopDereferenceVpbAndFree @ 0x140214CE0 (IopDereferenceVpbAndFree.c)
 *     IoAcquireCancelSpinLock @ 0x140219A60 (IoAcquireCancelSpinLock.c)
 *     IopGetMountFlag @ 0x14026A270 (IopGetMountFlag.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 *     MiProcessWorkingSets @ 0x1402AC4A0 (MiProcessWorkingSets.c)
 *     MiTrimOrAgeWorkingSet @ 0x1402ACB50 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x1402AD440 (MiAgeWorkingSet.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiAddWorkingSetEntries @ 0x1402B6CC0 (MiAddWorkingSetEntries.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D1370 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpApplyPriorityBoost @ 0x1402D3850 (ExpApplyPriorityBoost.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402DAC10 (MiUnlinkFreeOrZeroedPage.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402E73C0 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402E7740 (ExpWorkerFactoryCheckCreate.c)
 *     IopfCompleteRequest @ 0x1402E7D10 (IopfCompleteRequest.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
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
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x140356DB0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140357700 (ExpAcquireResourceExclusiveLite.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     IopCheckDeviceAndDriver @ 0x14035E090 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x14035E670 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x14035E8E0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14035F8F0 (IopIncrementDeviceObjectRefCount.c)
 *     MiZeroLargePageThread @ 0x1403B3E80 (MiZeroLargePageThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
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
