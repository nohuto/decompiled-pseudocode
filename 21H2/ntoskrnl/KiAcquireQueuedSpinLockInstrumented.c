/*
 * XREFs of KiAcquireQueuedSpinLockInstrumented @ 0x14051660C
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
 *     KxWaitForLockOwnerShipWithIrql @ 0x140516850 (KxWaitForLockOwnerShipWithIrql.c)
 *     PerfLogSpinLockAcquire @ 0x1405AB604 (PerfLogSpinLockAcquire.c)
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
