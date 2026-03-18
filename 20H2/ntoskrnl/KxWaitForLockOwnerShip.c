/*
 * XREFs of KxWaitForLockOwnerShip @ 0x1402950A0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140206490 (NtWaitForWorkViaWorkerFactory.c)
 *     IopDecrementDeviceObjectRef @ 0x14020D560 (IopDecrementDeviceObjectRef.c)
 *     IopCheckDeviceAndDriver @ 0x14020D6F0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x14020D990 (IopCheckVpbMounted.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14020DD20 (IopIncrementDeviceObjectRefCount.c)
 *     IopDereferenceVpbAndFree @ 0x14020DE80 (IopDereferenceVpbAndFree.c)
 *     IopGetMountFlag @ 0x14020FD40 (IopGetMountFlag.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x140222130 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140222A80 (ExpAcquireResourceExclusiveLite.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiProcessWorkingSets @ 0x140268EC0 (MiProcessWorkingSets.c)
 *     MiTrimOrAgeWorkingSet @ 0x140269570 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x140269E60 (MiAgeWorkingSet.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiAddWorkingSetEntries @ 0x1402736E0 (MiAddWorkingSetEntries.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14028C630 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14028C9B0 (ExpWorkerFactoryCheckCreate.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     ExpApplyPriorityBoost @ 0x140291140 (ExpApplyPriorityBoost.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140296D60 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 *     CcCanIWrite @ 0x14029A7B0 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x14029AAB0 (CcCanIWriteStreamEx.c)
 *     CcUnpinFileDataEx @ 0x14029D060 (CcUnpinFileDataEx.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402A1EA0 (ExpAcquireSharedStarveExclusive.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x1402ACBC0 (MiInsertProtectedStandbyPage.c)
 *     MiSetVaAgeList @ 0x1402B0AC0 (MiSetVaAgeList.c)
 *     CcSetDirtyInMask @ 0x1402B96C0 (CcSetDirtyInMask.c)
 *     MiRemoveWsle @ 0x1402BC4C0 (MiRemoveWsle.c)
 *     MiAgePte @ 0x1402BC920 (MiAgePte.c)
 *     MiLogPageAccess @ 0x1402BDB30 (MiLogPageAccess.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C4BE0 (MiUnlinkFreeOrZeroedPage.c)
 *     ExReleaseResourceForThreadLite @ 0x1402FEF50 (ExReleaseResourceForThreadLite.c)
 *     IoAcquireCancelSpinLock @ 0x140300FE0 (IoAcquireCancelSpinLock.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14035BDC0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtSetInformationWorkerFactory @ 0x14035BF90 (NtSetInformationWorkerFactory.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14035CC50 (ExpSetResourceOwnerPointerEx.c)
 *     MiZeroLargePageThread @ 0x1403B28F0 (MiZeroLargePageThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
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
