/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x14020E6EC (KiSetLegacyAffinityThread.c)
 *     MiLockIoPfnTree @ 0x1402165BC (MiLockIoPfnTree.c)
 *     MiRemoveWsleList @ 0x140218310 (MiRemoveWsleList.c)
 *     MiIsDriverPage @ 0x1402189A0 (MiIsDriverPage.c)
 *     KeQueryBasePriorityThread @ 0x140234504 (KeQueryBasePriorityThread.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402358D4 (MiCaptureWriteWatchDirtyBit.c)
 *     KeQueryAffinityProcess @ 0x1402395A0 (KeQueryAffinityProcess.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x140256EAC (MiGetSharedProtosAtDpcLevel.c)
 *     KeQueryPrimaryGroupProcess @ 0x140257BB4 (KeQueryPrimaryGroupProcess.c)
 *     MiAbortCombineScan @ 0x140268998 (MiAbortCombineScan.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x14026EEA8 (MiUpdateWorkingSetPrivateSize.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402710C4 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     InsertEventEntryInLookUpTable @ 0x1402A1AEC (InsertEventEntryInLookUpTable.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1402D8304 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     MmLockLoadedModuleListShared @ 0x1402DC098 (MmLockLoadedModuleListShared.c)
 *     MiLockVadTree @ 0x1402ED128 (MiLockVadTree.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402EE104 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiRundownMutants @ 0x1402F0604 (KiRundownMutants.c)
 *     MiLookupDataTableEntry @ 0x1402FDA80 (MiLookupDataTableEntry.c)
 *     MiEmptyDecayClusterTimers @ 0x1403122F0 (MiEmptyDecayClusterTimers.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     MiCrcStillIntact @ 0x140339D70 (MiCrcStillIntact.c)
 *     MiReservePageFileSpace @ 0x14033AC90 (MiReservePageFileSpace.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14034F230 (KiAbEntryGetLockedHeadEntry.c)
 *     MiCheckVirtualAddress @ 0x1403536F0 (MiCheckVirtualAddress.c)
 *     vDbgPrintExWithPrefixInternal @ 0x140369C50 (vDbgPrintExWithPrefixInternal.c)
 *     DbgEnumerateCallback @ 0x140389E40 (DbgEnumerateCallback.c)
 *     VmpProcessContextLockShared @ 0x14045F804 (VmpProcessContextLockShared.c)
 *     KeQueryCpuSetsProcess @ 0x140572490 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x14057D168 (KiSelectCandidateProcessor.c)
 *     MiLocatePageCollisionNodeByPfn @ 0x1405AF30C (MiLocatePageCollisionNodeByPfn.c)
 *     MiPurgeSlabEntries @ 0x1405B1568 (MiPurgeSlabEntries.c)
 *     MiLockPageListAndFirstPage @ 0x1405B350C (MiLockPageListAndFirstPage.c)
 *     MiLockPageListAndLastPage @ 0x1405B3654 (MiLockPageListAndLastPage.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405E439C (DbgpRemoveDebugPrintCallback.c)
 *     RtlpAcquirePropStoreLockShared @ 0x1405E7B68 (RtlpAcquirePropStoreLockShared.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x140601F88 (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     VmpInvalidateOutstandingFaults @ 0x14062A198 (VmpInvalidateOutstandingFaults.c)
 *     ViDeadlockDetectionLock @ 0x140A994C4 (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140366A20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140461B20 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
