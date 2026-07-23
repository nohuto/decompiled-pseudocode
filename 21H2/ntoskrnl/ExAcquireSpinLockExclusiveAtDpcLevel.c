/*
 * XREFs of ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0
 * Callers:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     MiReferenceIoPages @ 0x1402176E4 (MiReferenceIoPages.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x140228354 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     MiInsertUnusedSubsection @ 0x14022A08C (MiInsertUnusedSubsection.c)
 *     MiWaitForPageWriteCompletion @ 0x14022A42C (MiWaitForPageWriteCompletion.c)
 *     KeThawProcess @ 0x14023A474 (KeThawProcess.c)
 *     KeFreezeProcess @ 0x14023A64C (KeFreezeProcess.c)
 *     MiRemoveFaultNode @ 0x1402458FC (MiRemoveFaultNode.c)
 *     KeSetExecuteOptions @ 0x14024A49C (KeSetExecuteOptions.c)
 *     MiZeroSectionObjectPointer @ 0x140251A4C (MiZeroSectionObjectPointer.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     KeStartThread @ 0x140265A0C (KeStartThread.c)
 *     KeTerminateThread @ 0x140266490 (KeTerminateThread.c)
 *     MiGatherMappedPages @ 0x140277138 (MiGatherMappedPages.c)
 *     PopPepWork @ 0x1402829CC (PopPepWork.c)
 *     PopPepLockActivityLink @ 0x140283448 (PopPepLockActivityLink.c)
 *     MiCheckForControlAreaDeletion @ 0x1402850C8 (MiCheckForControlAreaDeletion.c)
 *     MiClearFilePointer @ 0x1402851C8 (MiClearFilePointer.c)
 *     MiOutPageSingleKernelStack @ 0x140286DB0 (MiOutPageSingleKernelStack.c)
 *     MiSectionCreated @ 0x140299C1C (MiSectionCreated.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14029AC94 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x14029B174 (KeSetQuantumProcess.c)
 *     KeForceResumeProcess @ 0x14029BDA8 (KeForceResumeProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x14029BE9C (KeSetProcessSchedulingGroup.c)
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x1402B06A0 (MiWalkPageTablesRecursively.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     MiReferencePageRuns @ 0x1402D43E0 (MiReferencePageRuns.c)
 *     KeSetDisableQuantumProcess @ 0x1402F6914 (KeSetDisableQuantumProcess.c)
 *     MiPreventControlAreaDeletion @ 0x1402F9478 (MiPreventControlAreaDeletion.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402FCD90 (KiAbEntryGetLockedHeadEntry.c)
 *     MiRemoveUnusedSubsection @ 0x140303854 (MiRemoveUnusedSubsection.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MiBeginPageAccessor @ 0x14031FB98 (MiBeginPageAccessor.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiRemoveUnusedSegment @ 0x1403620F8 (MiRemoveUnusedSegment.c)
 *     MiInsertUnusedSegment @ 0x1403622B0 (MiInsertUnusedSegment.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140371790 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     MmLockLoadedModuleListExclusive @ 0x1403720B8 (MmLockLoadedModuleListExclusive.c)
 *     MiLockAllMemoryLists @ 0x1403842AC (MiLockAllMemoryLists.c)
 *     KeSetAffinityThread @ 0x14039951C (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C6154 (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x1403CB43C (KeSetAffinityProcess.c)
 *     VslIumEfiRuntimeService @ 0x1404FCB20 (VslIumEfiRuntimeService.c)
 *     KeAdjustTimerDelayProcess @ 0x140513A0C (KeAdjustTimerDelayProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051CB78 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeTransitionProcessorParkState @ 0x1405256EC (KeTransitionProcessorParkState.c)
 *     MiPurgeSubsection @ 0x14052A4F0 (MiPurgeSubsection.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FFB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x140540374 (MiCopyImageExtentContents.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140546430 (MiDbgTranslatePhysicalAddress.c)
 *     MiFaultGetFileExtents @ 0x140548630 (MiFaultGetFileExtents.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549C68 (MiDecommitHardwareEnclavePages.c)
 *     MiNoPagesLastChance @ 0x140550A08 (MiNoPagesLastChance.c)
 *     MiDrainCrossPartitionUsage @ 0x1405622DC (MiDrainCrossPartitionUsage.c)
 *     PspIumReplenishPartitionPages @ 0x1405841A8 (PspIumReplenishPartitionPages.c)
 *     DbgpInsertDebugPrintCallback @ 0x140585874 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405859CC (DbgpRemoveDebugPrintCallback.c)
 *     VmpFaultEntryInsert @ 0x1405A32E8 (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x1405A34A0 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockExclusive @ 0x1405A4B8C (VmpProcessContextLockExclusive.c)
 *     ViDeadlockDetectionLock @ 0x1409E02AC (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402D5E10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockExclusiveAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  _DWORD *v3; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  bool v9; // zf
  unsigned __int32 v10; // eax
  char v11; // dl
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+38h] [rbp+10h] BYREF

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v11 = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock, v11);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = SchedulerAssist[6];
        SchedulerAssist[6] = v12 + 1;
        if ( v12 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    {
      v8 = CurrentPrcb->SchedulerAssist;
      if ( v8 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v13 = v8[6] - 1;
          v8[6] = v13;
          if ( !v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      LOBYTE(v1) = -1;
      v14 = ExpWaitForSpinLockExclusiveAndAcquire((unsigned __int64)SpinLock, v1, v2, v3);
    }
    v7 = *(unsigned int *)SpinLock;
    if ( (*SpinLock & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v7 & 0x40000000) == 0 )
        {
          v10 = _InterlockedCompareExchange(SpinLock, v7 | 0x40000000, v7);
          v9 = (_DWORD)v7 == v10;
          v7 = v10;
          if ( !v9 )
            continue;
        }
        KeYieldProcessorEx(&v14, v7, v2, (__int64)v3);
        v7 = *(unsigned int *)SpinLock;
      }
      while ( (v7 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
}
