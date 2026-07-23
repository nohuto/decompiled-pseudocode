/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x140327620
 * Callers:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14021CA5C (KiActivateWaiterQueueWithNoLocks.c)
 *     KeQueryBasePriorityThread @ 0x140225600 (KeQueryBasePriorityThread.c)
 *     MiFreeSlabEntries @ 0x140238B20 (MiFreeSlabEntries.c)
 *     KiRundownMutants @ 0x1402655F0 (KiRundownMutants.c)
 *     vDbgPrintExWithPrefixInternal @ 0x140272800 (vDbgPrintExWithPrefixInternal.c)
 *     KeQueryAffinityProcess @ 0x14027DDB0 (KeQueryAffinityProcess.c)
 *     KeSetLegacyAffinityThread @ 0x14029DE40 (KeSetLegacyAffinityThread.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402FCD90 (KiAbEntryGetLockedHeadEntry.c)
 *     MiAbortCombineScan @ 0x14030E4C0 (MiAbortCombineScan.c)
 *     MmLockLoadedModuleListShared @ 0x1403275D8 (MmLockLoadedModuleListShared.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140371790 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     InsertEventEntryInLookUpTable @ 0x140375AB0 (InsertEventEntryInLookUpTable.c)
 *     DbgEnumerateCallback @ 0x140395520 (DbgEnumerateCallback.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1403A63DC (MiGetSharedProtosAtDpcLevel.c)
 *     KeQueryCpuSetsProcess @ 0x14051C894 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CE20 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x140525DE4 (KiSelectCandidateProcessor.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405859CC (DbgpRemoveDebugPrintCallback.c)
 *     VmpInvalidateOutstandingFaults @ 0x1405A3EC4 (VmpInvalidateOutstandingFaults.c)
 *     VmpProcessContextLockShared @ 0x1405A4C04 (VmpProcessContextLockShared.c)
 *     ViDeadlockDetectionLock @ 0x1409E02AC (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140213930 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5E94 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockSharedAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v4; // ett
  _DWORD *v5; // rcx
  int v6; // eax
  int v7; // eax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, -1);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v6 = SchedulerAssist[6];
        SchedulerAssist[6] = v6 + 1;
        if ( v6 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    _m_prefetchw((const void *)SpinLock);
    v4 = *SpinLock & 0x7FFFFFFF;
    if ( v4 != _InterlockedCompareExchange(SpinLock, v4 + 1, v4) )
    {
      v5 = CurrentPrcb->SchedulerAssist;
      if ( v5 && CurrentPrcb->NestingLevel <= 1u )
      {
        v7 = v5[6] - 1;
        v5[6] = v7;
        if ( !v7 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, 0xFFu);
    }
  }
}
