/*
 * XREFs of KiAcquireQueuedSpinLockInstrumented @ 0x14051090C
 * Callers:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiAddWorkingSetEntries @ 0x140211890 (MiAddWorkingSetEntries.c)
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14022C0A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
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
 *     IopIncrementDeviceObjectRefCount @ 0x140255810 (IopIncrementDeviceObjectRefCount.c)
 *     MiProcessWorkingSets @ 0x14025C5F0 (MiProcessWorkingSets.c)
 *     MiTrimOrAgeWorkingSet @ 0x14025CC40 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x14025D530 (MiAgeWorkingSet.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402620D0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140262A20 (ExpAcquireResourceExclusiveLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140268DF0 (NtWaitForWorkViaWorkerFactory.c)
 *     CcSetDirtyInMask @ 0x14027B2A0 (CcSetDirtyInMask.c)
 *     ExpAcquireSharedStarveExclusive @ 0x140285BF0 (ExpAcquireSharedStarveExclusive.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x140290D70 (MiSetVaAgeList.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140298560 (MiUnlinkFreeOrZeroedPage.c)
 *     MiRemoveWsle @ 0x14029D120 (MiRemoveWsle.c)
 *     MiAgePte @ 0x14029D580 (MiAgePte.c)
 *     MiLogPageAccess @ 0x14029E790 (MiLogPageAccess.c)
 *     NtSetInformationWorkerFactory @ 0x1402BF210 (NtSetInformationWorkerFactory.c)
 *     MiInsertProtectedStandbyPage @ 0x1402D9CF0 (MiInsertProtectedStandbyPage.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1402DA270 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1402DA540 (ExpSetResourceOwnerPointerEx.c)
 *     ExReleaseResourceForThreadLite @ 0x1402EEA80 (ExReleaseResourceForThreadLite.c)
 *     IopDereferenceVpbAndFree @ 0x1402F01C0 (IopDereferenceVpbAndFree.c)
 *     IoAcquireCancelSpinLock @ 0x1402F03E0 (IoAcquireCancelSpinLock.c)
 *     MiZeroLargePageThread @ 0x1403B1C70 (MiZeroLargePageThread.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x140510B50 (KxWaitForLockOwnerShipWithIrql.c)
 *     PerfLogSpinLockAcquire @ 0x1405A5838 (PerfLogSpinLockAcquire.c)
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
