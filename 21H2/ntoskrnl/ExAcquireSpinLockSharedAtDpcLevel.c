/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x14031C8D0
 * Callers:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     KeQueryAffinityProcess @ 0x14025C840 (KeQueryAffinityProcess.c)
 *     KiRundownMutants @ 0x140277650 (KiRundownMutants.c)
 *     vDbgPrintExWithPrefixInternal @ 0x1402841E0 (vDbgPrintExWithPrefixInternal.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14029F4FC (KiActivateWaiterQueueWithNoLocks.c)
 *     KeQueryBasePriorityThread @ 0x1402A74C0 (KeQueryBasePriorityThread.c)
 *     MiFreeSlabEntries @ 0x1402BA910 (MiFreeSlabEntries.c)
 *     KeSetLegacyAffinityThread @ 0x1402ECAF0 (KeSetLegacyAffinityThread.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402F2040 (KiAbEntryGetLockedHeadEntry.c)
 *     MiAbortCombineScan @ 0x140303770 (MiAbortCombineScan.c)
 *     MmLockLoadedModuleListShared @ 0x14031C888 (MmLockLoadedModuleListShared.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140371C40 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     InsertEventEntryInLookUpTable @ 0x140375F60 (InsertEventEntryInLookUpTable.c)
 *     DbgEnumerateCallback @ 0x1403953D0 (DbgEnumerateCallback.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1403A628C (MiGetSharedProtosAtDpcLevel.c)
 *     KeQueryCpuSetsProcess @ 0x14051C654 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CBE0 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x140525BA4 (KiSelectCandidateProcessor.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14058579C (DbgpRemoveDebugPrintCallback.c)
 *     VmpInvalidateOutstandingFaults @ 0x1405A3C94 (VmpInvalidateOutstandingFaults.c)
 *     VmpProcessContextLockShared @ 0x1405A49D4 (VmpProcessContextLockShared.c)
 *     ViDeadlockDetectionLock @ 0x1409DF2AC (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5C64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockSharedAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  _DWORD *v3; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v7; // ett
  _DWORD *v8; // rcx
  int v9; // eax
  int v10; // eax

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
        v9 = SchedulerAssist[6];
        SchedulerAssist[6] = v9 + 1;
        if ( v9 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    _m_prefetchw((const void *)SpinLock);
    v7 = *SpinLock & 0x7FFFFFFF;
    if ( v7 != _InterlockedCompareExchange(SpinLock, v7 + 1, v7) )
    {
      v8 = CurrentPrcb->SchedulerAssist;
      if ( v8 && CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = v8[6] - 1;
        v8[6] = v10;
        if ( !v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      LOBYTE(v1) = -1;
      ExpWaitForSpinLockSharedAndAcquire((unsigned __int64)SpinLock, v1, v2, v3);
    }
  }
}
