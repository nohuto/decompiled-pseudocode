/*
 * XREFs of KxWaitForLockChainValid @ 0x1402DAB20
 * Callers:
 *     MiAddWorkingSetEntries @ 0x140211890 (MiAddWorkingSetEntries.c)
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     CcCanIWrite @ 0x14022E140 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x14022E440 (CcCanIWriteStreamEx.c)
 *     CcUnpinFileDataEx @ 0x1402305D0 (CcUnpinFileDataEx.c)
 *     IopGetMountFlag @ 0x140242060 (IopGetMountFlag.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140245B40 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140245EC0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpApplyPriorityBoost @ 0x1402468E0 (ExpApplyPriorityBoost.c)
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     IopCheckDeviceAndDriver @ 0x140253FB0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x140254590 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x140254800 (IopDecrementDeviceObjectRef.c)
 *     IopDecrementVpbRefCount @ 0x140255700 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140255810 (IopIncrementDeviceObjectRefCount.c)
 *     MiProcessWorkingSets @ 0x14025C5F0 (MiProcessWorkingSets.c)
 *     MiTrimOrAgeWorkingSet @ 0x14025CC40 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x14025D530 (MiAgeWorkingSet.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140261630 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402620D0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140262A20 (ExpAcquireResourceExclusiveLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140263230 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140268DF0 (NtWaitForWorkViaWorkerFactory.c)
 *     CcSetDirtyInMask @ 0x14027B2A0 (CcSetDirtyInMask.c)
 *     ExpAcquireSharedStarveExclusive @ 0x140285BF0 (ExpAcquireSharedStarveExclusive.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x140290D70 (MiSetVaAgeList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140298560 (MiUnlinkFreeOrZeroedPage.c)
 *     MiRemoveWsle @ 0x14029D120 (MiRemoveWsle.c)
 *     MiAgePte @ 0x14029D580 (MiAgePte.c)
 *     MiLogPageAccess @ 0x14029E790 (MiLogPageAccess.c)
 *     NtSetInformationWorkerFactory @ 0x1402BF210 (NtSetInformationWorkerFactory.c)
 *     MiInsertProtectedStandbyPage @ 0x1402D9CF0 (MiInsertProtectedStandbyPage.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1402DA270 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1402DA540 (ExpSetResourceOwnerPointerEx.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402DAA90 (KeReleaseInStackQueuedSpinLock.c)
 *     IoReleaseCancelSpinLock @ 0x1402DABB0 (IoReleaseCancelSpinLock.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiZeroLargePageThread @ 0x1403B1C70 (MiZeroLargePageThread.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14038CC10 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038D9F0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KxWaitForLockChainValid(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 result; // rax

  v5 = 0;
  do
  {
    if ( (++v5 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
    {
      HvlNotifyLongSpinWait(v5);
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
