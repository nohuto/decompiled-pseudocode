/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x140224840
 * Callers:
 *     KiAbEntryGetLockedHeadEntry @ 0x140210820 (KiAbEntryGetLockedHeadEntry.c)
 *     MmLockLoadedModuleListShared @ 0x1402247F4 (MmLockLoadedModuleListShared.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KeQueryAffinityProcess @ 0x14027D660 (KeQueryAffinityProcess.c)
 *     KeQueryBasePriorityThread @ 0x140296CE4 (KeQueryBasePriorityThread.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiAbortCombineScan @ 0x1402F7290 (MiAbortCombineScan.c)
 *     KiRundownMutants @ 0x1402FAA28 (KiRundownMutants.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402FB40C (KiActivateWaiterQueueWithNoLocks.c)
 *     KeSetLegacyAffinityThread @ 0x14030B910 (KeSetLegacyAffinityThread.c)
 *     MiFreeSlabEntries @ 0x140346D00 (MiFreeSlabEntries.c)
 *     vDbgPrintExWithPrefixInternal @ 0x1403613C0 (vDbgPrintExWithPrefixInternal.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14036F7B0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     InsertEventEntryInLookUpTable @ 0x140373690 (InsertEventEntryInLookUpTable.c)
 *     DbgEnumerateCallback @ 0x140392AA0 (DbgEnumerateCallback.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1403A35FC (MiGetSharedProtosAtDpcLevel.c)
 *     KeQueryCpuSetsProcess @ 0x1405171A4 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140517730 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x1405206F4 (KiSelectCandidateProcessor.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14058042C (DbgpRemoveDebugPrintCallback.c)
 *     VmpInvalidateOutstandingFaults @ 0x14059E7C4 (VmpInvalidateOutstandingFaults.c)
 *     VmpProcessContextLockShared @ 0x14059F504 (VmpProcessContextLockShared.c)
 *     ViDeadlockDetectionLock @ 0x1409DC29C (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140329910 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B06F4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
