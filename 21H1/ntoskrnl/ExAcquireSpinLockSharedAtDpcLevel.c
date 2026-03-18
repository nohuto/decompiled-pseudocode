/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x14027D890
 * Callers:
 *     KeQueryAffinityProcess @ 0x140204350 (KeQueryAffinityProcess.c)
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     KeQueryBasePriorityThread @ 0x14025A464 (KeQueryBasePriorityThread.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140269870 (KiAbEntryGetLockedHeadEntry.c)
 *     MmLockLoadedModuleListShared @ 0x14027D844 (MmLockLoadedModuleListShared.c)
 *     KeSetLegacyAffinityThread @ 0x1402C9F30 (KeSetLegacyAffinityThread.c)
 *     MiFreeSlabEntries @ 0x140308F00 (MiFreeSlabEntries.c)
 *     vDbgPrintExWithPrefixInternal @ 0x14033C750 (vDbgPrintExWithPrefixInternal.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     MiAbortCombineScan @ 0x140353270 (MiAbortCombineScan.c)
 *     KiRundownMutants @ 0x140356A08 (KiRundownMutants.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1403573EC (KiActivateWaiterQueueWithNoLocks.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14036EB80 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     InsertEventEntryInLookUpTable @ 0x140372880 (InsertEventEntryInLookUpTable.c)
 *     DbgEnumerateCallback @ 0x140391EF0 (DbgEnumerateCallback.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1403A2E6C (MiGetSharedProtosAtDpcLevel.c)
 *     KeQueryCpuSetsProcess @ 0x140516B54 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1405170E0 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x1405200A4 (KiSelectCandidateProcessor.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14057FCDC (DbgpRemoveDebugPrintCallback.c)
 *     VmpInvalidateOutstandingFaults @ 0x14059E0D4 (VmpInvalidateOutstandingFaults.c)
 *     VmpProcessContextLockShared @ 0x14059EE14 (VmpProcessContextLockShared.c)
 *     ViDeadlockDetectionLock @ 0x1409DC23C (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402EF840 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405AFFD4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockSharedAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v5; // ett
  _DWORD *v6; // rcx
  int v7; // eax
  int v8; // eax

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
        v7 = SchedulerAssist[6];
        SchedulerAssist[6] = v7 + 1;
        if ( v7 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    _m_prefetchw((const void *)SpinLock);
    v5 = *SpinLock & 0x7FFFFFFF;
    if ( v5 != _InterlockedCompareExchange(SpinLock, v5 + 1, v5) )
    {
      v6 = CurrentPrcb->SchedulerAssist;
      if ( v6 && CurrentPrcb->NestingLevel <= 1u )
      {
        v8 = v6[6] - 1;
        v6[6] = v8;
        if ( !v8 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      LOBYTE(v1) = -1;
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, v1);
    }
  }
}
