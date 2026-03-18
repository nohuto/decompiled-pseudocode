/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x1402971C0
 * Callers:
 *     KeQueryBasePriorityThread @ 0x140208C34 (KeQueryBasePriorityThread.c)
 *     KeQueryAffinityProcess @ 0x14023EF70 (KeQueryAffinityProcess.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140243610 (KiAbEntryGetLockedHeadEntry.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MmLockLoadedModuleListShared @ 0x140297178 (MmLockLoadedModuleListShared.c)
 *     KiRundownMutants @ 0x1402D5C98 (KiRundownMutants.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KeSetLegacyAffinityThread @ 0x1402F77F0 (KeSetLegacyAffinityThread.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140303618 (KiActivateWaiterQueueWithNoLocks.c)
 *     MiFreeSlabEntries @ 0x1403181C0 (MiFreeSlabEntries.c)
 *     MiAbortCombineScan @ 0x140349794 (MiAbortCombineScan.c)
 *     vDbgPrintExWithPrefixInternal @ 0x140364830 (vDbgPrintExWithPrefixInternal.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140371700 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     InsertEventEntryInLookUpTable @ 0x140375D50 (InsertEventEntryInLookUpTable.c)
 *     DbgEnumerateCallback @ 0x140394F60 (DbgEnumerateCallback.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1403A59CC (MiGetSharedProtosAtDpcLevel.c)
 *     KeQueryCpuSetsProcess @ 0x14051AB74 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051B100 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x1405240C4 (KiSelectCandidateProcessor.c)
 *     DbgpRemoveDebugPrintCallback @ 0x140583D8C (DbgpRemoveDebugPrintCallback.c)
 *     VmpInvalidateOutstandingFaults @ 0x1405A2264 (VmpInvalidateOutstandingFaults.c)
 *     VmpProcessContextLockShared @ 0x1405A2FA4 (VmpProcessContextLockShared.c)
 *     ViDeadlockDetectionLock @ 0x1409E22BC (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FFF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B4254 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
