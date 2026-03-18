/*
 * XREFs of KiAcquireQueuedSpinLockInstrumented @ 0x14051488C
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
 *     KxWaitForLockOwnerShipWithIrql @ 0x140514AD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     PerfLogSpinLockAcquire @ 0x1405A99C8 (PerfLogSpinLockAcquire.c)
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
