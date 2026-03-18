/*
 * XREFs of ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0
 * Callers:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140210820 (KiAbEntryGetLockedHeadEntry.c)
 *     MiRemoveUnusedSegment @ 0x14022865C (MiRemoveUnusedSegment.c)
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MmUnmapViewInSystemCache @ 0x140247350 (MmUnmapViewInSystemCache.c)
 *     MiBeginPageAccessor @ 0x14024A6C4 (MiBeginPageAccessor.c)
 *     MiInsertUnusedSegment @ 0x14024B300 (MiInsertUnusedSegment.c)
 *     MiInsertUnusedSubsection @ 0x14024C2B0 (MiInsertUnusedSubsection.c)
 *     MiRemoveUnusedSubsection @ 0x14024C568 (MiRemoveUnusedSubsection.c)
 *     MiCopyDataPageToImagePage @ 0x14026085C (MiCopyDataPageToImagePage.c)
 *     MiSectionCreated @ 0x140267074 (MiSectionCreated.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KeSetDisableQuantumProcess @ 0x14027B784 (KeSetDisableQuantumProcess.c)
 *     MiWalkPageTablesRecursively @ 0x14029DD80 (MiWalkPageTablesRecursively.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 *     PopPepLockActivityLink @ 0x1402CF340 (PopPepLockActivityLink.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     PopPepWork @ 0x1402E3E30 (PopPepWork.c)
 *     KeStartThread @ 0x1402EAD58 (KeStartThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402F049C (KeSetPriorityAndQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x1402F1B94 (KeSetQuantumProcess.c)
 *     MiGatherMappedPages @ 0x1402F5340 (MiGatherMappedPages.c)
 *     MiOutPageSingleKernelStack @ 0x1402F5850 (MiOutPageSingleKernelStack.c)
 *     KeTerminateThread @ 0x1402F9A38 (KeTerminateThread.c)
 *     KeForceResumeProcess @ 0x1402FCC94 (KeForceResumeProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x1402FCD88 (KeSetProcessSchedulingGroup.c)
 *     KeFreezeProcess @ 0x1402FCEBC (KeFreezeProcess.c)
 *     MiWaitForPageWriteCompletion @ 0x14030F4FC (MiWaitForPageWriteCompletion.c)
 *     MiPreventControlAreaDeletion @ 0x1403209B8 (MiPreventControlAreaDeletion.c)
 *     MiReferencePageRuns @ 0x14032BE40 (MiReferencePageRuns.c)
 *     MiCheckForControlAreaDeletion @ 0x14032D218 (MiCheckForControlAreaDeletion.c)
 *     MiClearFilePointer @ 0x14032D318 (MiClearFilePointer.c)
 *     MiReferenceIoPages @ 0x140336B14 (MiReferenceIoPages.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x140338E94 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KeThawProcess @ 0x140347AF0 (KeThawProcess.c)
 *     MiRemoveFaultNode @ 0x140355ABC (MiRemoveFaultNode.c)
 *     KeSetExecuteOptions @ 0x14035A06C (KeSetExecuteOptions.c)
 *     MiZeroSectionObjectPointer @ 0x14036063C (MiZeroSectionObjectPointer.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14036F7B0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     MmLockLoadedModuleListExclusive @ 0x14036FE1C (MmLockLoadedModuleListExclusive.c)
 *     MiLockAllMemoryLists @ 0x140383ED0 (MiLockAllMemoryLists.c)
 *     KeSetAffinityThread @ 0x140396A9C (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C2E54 (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x1403C7CBC (KeSetAffinityProcess.c)
 *     VslIumEfiRuntimeService @ 0x1404F7770 (VslIumEfiRuntimeService.c)
 *     KeAdjustTimerDelayProcess @ 0x14050E35C (KeAdjustTimerDelayProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140517488 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeTransitionProcessorParkState @ 0x14051FFFC (KeTransitionProcessorParkState.c)
 *     MiPurgeSubsection @ 0x140524E00 (MiPurgeSubsection.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053A8A8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x14053AC64 (MiCopyImageExtentContents.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140540D20 (MiDbgTranslatePhysicalAddress.c)
 *     MiFaultGetFileExtents @ 0x140542F20 (MiFaultGetFileExtents.c)
 *     MiDecommitHardwareEnclavePages @ 0x140544558 (MiDecommitHardwareEnclavePages.c)
 *     MiNoPagesLastChance @ 0x14054B328 (MiNoPagesLastChance.c)
 *     MiDrainCrossPartitionUsage @ 0x14055CBFC (MiDrainCrossPartitionUsage.c)
 *     PspIumReplenishPartitionPages @ 0x14057EB38 (PspIumReplenishPartitionPages.c)
 *     DbgpInsertDebugPrintCallback @ 0x1405802D4 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14058042C (DbgpRemoveDebugPrintCallback.c)
 *     VmpFaultEntryInsert @ 0x14059DBE8 (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x14059DDA0 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockExclusive @ 0x14059F48C (VmpProcessContextLockExclusive.c)
 *     ViDeadlockDetectionLock @ 0x1409DC29C (ViDeadlockDetectionLock.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402CF620 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockExclusiveAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v5; // rdx
  _DWORD *v6; // rcx
  bool v7; // zf
  unsigned __int32 v8; // eax
  char v9; // dl
  int v10; // eax
  int v11; // eax
  int v12; // [rsp+38h] [rbp+10h] BYREF

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v9 = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock, v9);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = SchedulerAssist[6];
        SchedulerAssist[6] = v10 + 1;
        if ( v10 == -1 )
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
          v11 = v6[6] - 1;
          v6[6] = v11;
          if ( !v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      LOBYTE(v1) = -1;
      v12 = ExpWaitForSpinLockExclusiveAndAcquire(SpinLock, v1);
    }
    v5 = *(unsigned int *)SpinLock;
    if ( (*SpinLock & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v5 & 0x40000000) == 0 )
        {
          v8 = _InterlockedCompareExchange(SpinLock, v5 | 0x40000000, v5);
          v7 = (_DWORD)v5 == v8;
          v5 = v8;
          if ( !v7 )
            continue;
        }
        KeYieldProcessorEx(&v12, v5);
        v5 = *(unsigned int *)SpinLock;
      }
      while ( (v5 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
}
