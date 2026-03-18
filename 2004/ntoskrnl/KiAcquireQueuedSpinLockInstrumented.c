/*
 * XREFs of KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C
 * Callers:
 *     MiProcessWorkingSets @ 0x1402036D0 (MiProcessWorkingSets.c)
 *     MiTrimOrAgeWorkingSet @ 0x140203D20 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x140204610 (MiAgeWorkingSet.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402091B0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140209B00 (ExpAcquireResourceExclusiveLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14020FDA0 (NtWaitForWorkViaWorkerFactory.c)
 *     CcSetDirtyInMask @ 0x140222250 (CcSetDirtyInMask.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14022CBA0 (ExpAcquireSharedStarveExclusive.c)
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x140237D20 (MiSetVaAgeList.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14023F530 (MiUnlinkFreeOrZeroedPage.c)
 *     MiRemoveWsle @ 0x1402440F0 (MiRemoveWsle.c)
 *     MiAgePte @ 0x140244550 (MiAgePte.c)
 *     MiLogPageAccess @ 0x140245760 (MiLogPageAccess.c)
 *     NtSetInformationWorkerFactory @ 0x1402661E0 (NtSetInformationWorkerFactory.c)
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
 *     IopIncrementDeviceObjectRefCount @ 0x140292090 (IopIncrementDeviceObjectRefCount.c)
 *     IopGetMountFlag @ 0x140298D00 (IopGetMountFlag.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiAddWorkingSetEntries @ 0x1402A43A0 (MiAddWorkingSetEntries.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     KeAcquireQueuedSpinLock @ 0x1402BE5E0 (KeAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402BED20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     CcCanIWrite @ 0x1402C0F70 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x1402C1270 (CcCanIWriteStreamEx.c)
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 *     ExReleaseResourceForThreadLite @ 0x1403283B0 (ExReleaseResourceForThreadLite.c)
 *     IopDereferenceVpbAndFree @ 0x14032BD40 (IopDereferenceVpbAndFree.c)
 *     IoAcquireCancelSpinLock @ 0x14032BF60 (IoAcquireCancelSpinLock.c)
 *     MiZeroLargePageThread @ 0x1403AB420 (MiZeroLargePageThread.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x1405111A0 (KxWaitForLockOwnerShipWithIrql.c)
 *     PerfLogSpinLockAcquire @ 0x1405A5F28 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall KiAcquireQueuedSpinLockInstrumented(__int64 a1, volatile __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int InterruptCount; // ebp
  int v6; // r14d
  int v7; // r9d
  int v8; // esi
  char v9; // di
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v6 = 0;
  v7 = 0;
  v8 = (int)a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v9 = 1;
    result = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v6 = result;
  }
  else
  {
    v9 = 0;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v10 = _InterlockedExchange64(a2, a1);
  if ( v10 )
  {
    result = KxWaitForLockOwnerShipWithIrql(a1, v10, a3, 0LL);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v7 = result;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += result;
  }
  if ( v9 )
  {
    v11 = __rdtsc();
    return PerfLogSpinLockAcquire(v8, v11, (int)v11 - v6, v7, InterruptCount, 1);
  }
  return result;
}
