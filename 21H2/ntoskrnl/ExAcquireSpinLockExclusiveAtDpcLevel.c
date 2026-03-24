/*
 * XREFs of ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140314D90
 * Callers:
 *     MiWalkPageTables @ 0x1402092C0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14020BDA0 (MiWalkPageTablesRecursively.c)
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiFlushSectionInternal @ 0x140219DB0 (MiFlushSectionInternal.c)
 *     MiReferencePageRuns @ 0x14022FB90 (MiReferencePageRuns.c)
 *     KeSetDisableQuantumProcess @ 0x140252104 (KeSetDisableQuantumProcess.c)
 *     MiGatherMappedPages @ 0x140255BC8 (MiGatherMappedPages.c)
 *     PopPepWork @ 0x1402614FC (PopPepWork.c)
 *     PopPepLockActivityLink @ 0x140261F78 (PopPepLockActivityLink.c)
 *     MiCheckForControlAreaDeletion @ 0x140263BF8 (MiCheckForControlAreaDeletion.c)
 *     MiClearFilePointer @ 0x140263CF8 (MiClearFilePointer.c)
 *     MiInsertUnusedSubsection @ 0x140263D60 (MiInsertUnusedSubsection.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     KeStartThread @ 0x140277A6C (KeStartThread.c)
 *     KeTerminateThread @ 0x1402784F0 (KeTerminateThread.c)
 *     KeFreezeProcess @ 0x1402830E8 (KeFreezeProcess.c)
 *     KeThawProcess @ 0x140283E7C (KeThawProcess.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     MiReferenceIoPages @ 0x140295A24 (MiReferenceIoPages.c)
 *     MiWaitForPageWriteCompletion @ 0x140299EBC (MiWaitForPageWriteCompletion.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1402AA214 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     MiRemoveFaultNode @ 0x1402C71BC (MiRemoveFaultNode.c)
 *     KeSetExecuteOptions @ 0x1402CBD4C (KeSetExecuteOptions.c)
 *     MiZeroSectionObjectPointer @ 0x1402D3754 (MiZeroSectionObjectPointer.c)
 *     MiOutPageSingleKernelStack @ 0x1402D5A60 (MiOutPageSingleKernelStack.c)
 *     MiSectionCreated @ 0x1402E88CC (MiSectionCreated.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402E9944 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x1402E9E24 (KeSetQuantumProcess.c)
 *     KeForceResumeProcess @ 0x1402EAA58 (KeForceResumeProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x1402EAB4C (KeSetProcessSchedulingGroup.c)
 *     MiPreventControlAreaDeletion @ 0x1402EE728 (MiPreventControlAreaDeletion.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402F2040 (KiAbEntryGetLockedHeadEntry.c)
 *     MiRemoveUnusedSubsection @ 0x1402F8B04 (MiRemoveUnusedSubsection.c)
 *     MiCopyDataPageToImagePage @ 0x1403043E8 (MiCopyDataPageToImagePage.c)
 *     MmUnmapViewInSystemCache @ 0x140313AE0 (MmUnmapViewInSystemCache.c)
 *     MiBeginPageAccessor @ 0x140314E48 (MiBeginPageAccessor.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MiRemoveUnusedSegment @ 0x1403573A8 (MiRemoveUnusedSegment.c)
 *     MiInsertUnusedSegment @ 0x140357560 (MiInsertUnusedSegment.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140371C40 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     MmLockLoadedModuleListExclusive @ 0x140372568 (MmLockLoadedModuleListExclusive.c)
 *     MiLockAllMemoryLists @ 0x14038415C (MiLockAllMemoryLists.c)
 *     KeSetAffinityThread @ 0x1403993CC (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C5FB4 (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x1403CB2CC (KeSetAffinityProcess.c)
 *     VslIumEfiRuntimeService @ 0x1404FCBA0 (VslIumEfiRuntimeService.c)
 *     KeAdjustTimerDelayProcess @ 0x1405137CC (KeAdjustTimerDelayProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051C938 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeTransitionProcessorParkState @ 0x1405254AC (KeTransitionProcessorParkState.c)
 *     MiPurgeSubsection @ 0x14052A2B0 (MiPurgeSubsection.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FD78 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x140540134 (MiCopyImageExtentContents.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405461F0 (MiDbgTranslatePhysicalAddress.c)
 *     MiFaultGetFileExtents @ 0x1405483F0 (MiFaultGetFileExtents.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549A28 (MiDecommitHardwareEnclavePages.c)
 *     MiNoPagesLastChance @ 0x1405507C8 (MiNoPagesLastChance.c)
 *     MiDrainCrossPartitionUsage @ 0x14056209C (MiDrainCrossPartitionUsage.c)
 *     PspIumReplenishPartitionPages @ 0x140583F78 (PspIumReplenishPartitionPages.c)
 *     DbgpInsertDebugPrintCallback @ 0x140585644 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14058579C (DbgpRemoveDebugPrintCallback.c)
 *     VmpFaultEntryInsert @ 0x1405A30B8 (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x1405A3270 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockExclusive @ 0x1405A495C (VmpProcessContextLockExclusive.c)
 *     ViDeadlockDetectionLock @ 0x1409DF2AC (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402315C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5BA8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
