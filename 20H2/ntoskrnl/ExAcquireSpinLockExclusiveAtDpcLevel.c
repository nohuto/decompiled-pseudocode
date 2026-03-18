/*
 * XREFs of ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40
 * Callers:
 *     MiBeginPageAccessor @ 0x14022E964 (MiBeginPageAccessor.c)
 *     KeSetDisableQuantumProcess @ 0x14023D244 (KeSetDisableQuantumProcess.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140243610 (KiAbEntryGetLockedHeadEntry.c)
 *     MiOutPageSingleKernelStack @ 0x140250980 (MiOutPageSingleKernelStack.c)
 *     MiReferenceIoPages @ 0x140260AB4 (MiReferenceIoPages.c)
 *     MiWalkPageTables @ 0x14026A5E0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14026D0C0 (MiWalkPageTablesRecursively.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiFlushSectionInternal @ 0x14027B590 (MiFlushSectionInternal.c)
 *     MmUnmapViewInSystemCache @ 0x14029B2F0 (MmUnmapViewInSystemCache.c)
 *     MiInsertUnusedSegment @ 0x14029E554 (MiInsertUnusedSegment.c)
 *     MiRemoveUnusedSegment @ 0x14029F4D4 (MiRemoveUnusedSegment.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     PopPepLockActivityLink @ 0x1402D4288 (PopPepLockActivityLink.c)
 *     KeTerminateThread @ 0x1402D602C (KeTerminateThread.c)
 *     KeStartThread @ 0x1402D8900 (KeStartThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402E8FE4 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x1402E94C4 (KeSetQuantumProcess.c)
 *     KeFreezeProcess @ 0x1402EAEAC (KeFreezeProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x1402EB00C (KeSetProcessSchedulingGroup.c)
 *     KeForceResumeProcess @ 0x1402EB0E0 (KeForceResumeProcess.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     MiWaitForPageWriteCompletion @ 0x1402F5250 (MiWaitForPageWriteCompletion.c)
 *     MiCheckForControlAreaDeletion @ 0x140300958 (MiCheckForControlAreaDeletion.c)
 *     MiClearFilePointer @ 0x140300A58 (MiClearFilePointer.c)
 *     MiInsertUnusedSubsection @ 0x140300AC0 (MiInsertUnusedSubsection.c)
 *     MiRemoveUnusedSubsection @ 0x140300DB4 (MiRemoveUnusedSubsection.c)
 *     MiReferencePageRuns @ 0x140300EC0 (MiReferencePageRuns.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x14030B5B4 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     MiPreventControlAreaDeletion @ 0x14031F630 (MiPreventControlAreaDeletion.c)
 *     MiRemoveFaultNode @ 0x14032677C (MiRemoveFaultNode.c)
 *     KeSetExecuteOptions @ 0x14032A96C (KeSetExecuteOptions.c)
 *     MiZeroSectionObjectPointer @ 0x140331254 (MiZeroSectionObjectPointer.c)
 *     PopPepWork @ 0x14033EF3C (PopPepWork.c)
 *     MiGatherMappedPages @ 0x140344824 (MiGatherMappedPages.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiCopyDataPageToImagePage @ 0x14034EC44 (MiCopyDataPageToImagePage.c)
 *     MiSectionCreated @ 0x1403563C4 (MiSectionCreated.c)
 *     KeThawProcess @ 0x1403612D0 (KeThawProcess.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140371700 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     MmLockLoadedModuleListExclusive @ 0x140371D6C (MmLockLoadedModuleListExclusive.c)
 *     MiLockAllMemoryLists @ 0x140386000 (MiLockAllMemoryLists.c)
 *     KeSetAffinityThread @ 0x140398F5C (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C55C4 (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x1403CA8FC (KeSetAffinityProcess.c)
 *     VslIumEfiRuntimeService @ 0x1404FB000 (VslIumEfiRuntimeService.c)
 *     KeAdjustTimerDelayProcess @ 0x140511C8C (KeAdjustTimerDelayProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051AE58 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeTransitionProcessorParkState @ 0x1405239CC (KeTransitionProcessorParkState.c)
 *     MiPurgeSubsection @ 0x1405287D0 (MiPurgeSubsection.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053E278 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x14053E634 (MiCopyImageExtentContents.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405446F0 (MiDbgTranslatePhysicalAddress.c)
 *     MiFaultGetFileExtents @ 0x1405468F0 (MiFaultGetFileExtents.c)
 *     MiDecommitHardwareEnclavePages @ 0x140547F28 (MiDecommitHardwareEnclavePages.c)
 *     MiNoPagesLastChance @ 0x14054ECF8 (MiNoPagesLastChance.c)
 *     MiDrainCrossPartitionUsage @ 0x1405605CC (MiDrainCrossPartitionUsage.c)
 *     PspIumReplenishPartitionPages @ 0x140582568 (PspIumReplenishPartitionPages.c)
 *     DbgpInsertDebugPrintCallback @ 0x140583C34 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x140583D8C (DbgpRemoveDebugPrintCallback.c)
 *     VmpFaultEntryInsert @ 0x1405A1688 (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x1405A1840 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockExclusive @ 0x1405A2F2C (VmpProcessContextLockExclusive.c)
 *     ViDeadlockDetectionLock @ 0x1409E22BC (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402BF7C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockExclusiveAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  volatile LONG v5; // edx
  _DWORD *v6; // rcx
  bool v7; // zf
  signed __int32 v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // [rsp+38h] [rbp+10h] BYREF

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock, -1);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = 0;
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
    if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    {
      v6 = CurrentPrcb->SchedulerAssist;
      if ( v6 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v10 = v6[6] - 1;
          v6[6] = v10;
          if ( !v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      LOBYTE(v1) = -1;
      v11 = ExpWaitForSpinLockExclusiveAndAcquire(SpinLock, v1);
    }
    v5 = *SpinLock;
    while ( (v5 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v5 & 0x40000000) == 0 )
      {
        v8 = _InterlockedCompareExchange(SpinLock, v5 | 0x40000000, v5);
        v7 = v5 == v8;
        v5 = v8;
        if ( !v7 )
          continue;
      }
      KeYieldProcessorEx(&v11);
      v5 = *SpinLock;
    }
  }
}
