/*
 * XREFs of ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14020B270 (MiWalkPageTablesRecursively.c)
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     PopPepLockActivityLink @ 0x14023C510 (PopPepLockActivityLink.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140269870 (KiAbEntryGetLockedHeadEntry.c)
 *     MiRemoveUnusedSegment @ 0x1402816AC (MiRemoveUnusedSegment.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MmUnmapViewInSystemCache @ 0x1402A0380 (MmUnmapViewInSystemCache.c)
 *     MiBeginPageAccessor @ 0x1402A36F4 (MiBeginPageAccessor.c)
 *     MiInsertUnusedSegment @ 0x1402A4330 (MiInsertUnusedSegment.c)
 *     MiInsertUnusedSubsection @ 0x1402A52E0 (MiInsertUnusedSubsection.c)
 *     MiRemoveUnusedSubsection @ 0x1402A5598 (MiRemoveUnusedSubsection.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 *     MiSectionCreated @ 0x1402C00A4 (MiSectionCreated.c)
 *     MiWaitForPageWriteCompletion @ 0x1402CDB2C (MiWaitForPageWriteCompletion.c)
 *     MiPreventControlAreaDeletion @ 0x1402D01FC (MiPreventControlAreaDeletion.c)
 *     KeSetDisableQuantumProcess @ 0x1402D41C4 (KeSetDisableQuantumProcess.c)
 *     PopPepWork @ 0x1402D7D28 (PopPepWork.c)
 *     MiReferencePageRuns @ 0x1402F02C0 (MiReferencePageRuns.c)
 *     MiCheckForControlAreaDeletion @ 0x1402F1478 (MiCheckForControlAreaDeletion.c)
 *     MiClearFilePointer @ 0x1402F1578 (MiClearFilePointer.c)
 *     MiReferenceIoPages @ 0x1402F9AE4 (MiReferenceIoPages.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1402FBE64 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KeThawProcess @ 0x14030B2A0 (KeThawProcess.c)
 *     MiRemoveFaultNode @ 0x140317F9C (MiRemoveFaultNode.c)
 *     KeSetExecuteOptions @ 0x14031C49C (KeSetExecuteOptions.c)
 *     MiZeroSectionObjectPointer @ 0x140322A2C (MiZeroSectionObjectPointer.c)
 *     KeStartThread @ 0x14032FE98 (KeStartThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1403355DC (KeSetPriorityAndQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x140336CD4 (KeSetQuantumProcess.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiGatherMappedPages @ 0x14035131C (MiGatherMappedPages.c)
 *     MiOutPageSingleKernelStack @ 0x140351830 (MiOutPageSingleKernelStack.c)
 *     KeTerminateThread @ 0x140355A18 (KeTerminateThread.c)
 *     KeForceResumeProcess @ 0x140358C74 (KeForceResumeProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x140358D68 (KeSetProcessSchedulingGroup.c)
 *     KeFreezeProcess @ 0x140358E9C (KeFreezeProcess.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14036EB80 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     MmLockLoadedModuleListExclusive @ 0x14036F1EC (MmLockLoadedModuleListExclusive.c)
 *     MiLockAllMemoryLists @ 0x14037F638 (MiLockAllMemoryLists.c)
 *     KeSetAffinityThread @ 0x140395ECC (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C1F94 (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x1403C6EAC (KeSetAffinityProcess.c)
 *     VslIumEfiRuntimeService @ 0x1404F7120 (VslIumEfiRuntimeService.c)
 *     KeAdjustTimerDelayProcess @ 0x14050DD0C (KeAdjustTimerDelayProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140516E38 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeTransitionProcessorParkState @ 0x14051F9AC (KeTransitionProcessorParkState.c)
 *     MiPurgeSubsection @ 0x1405247B0 (MiPurgeSubsection.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053A258 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x14053A614 (MiCopyImageExtentContents.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405406D0 (MiDbgTranslatePhysicalAddress.c)
 *     MiFaultGetFileExtents @ 0x1405428D0 (MiFaultGetFileExtents.c)
 *     MiDecommitHardwareEnclavePages @ 0x140543F08 (MiDecommitHardwareEnclavePages.c)
 *     MiNoPagesLastChance @ 0x14054ACD8 (MiNoPagesLastChance.c)
 *     MiDrainCrossPartitionUsage @ 0x14055C5AC (MiDrainCrossPartitionUsage.c)
 *     PspIumReplenishPartitionPages @ 0x14057E4F8 (PspIumReplenishPartitionPages.c)
 *     DbgpInsertDebugPrintCallback @ 0x14057FB84 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14057FCDC (DbgpRemoveDebugPrintCallback.c)
 *     VmpFaultEntryInsert @ 0x14059D4F8 (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x14059D6B0 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockExclusive @ 0x14059ED9C (VmpProcessContextLockExclusive.c)
 *     ViDeadlockDetectionLock @ 0x1409DC23C (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14023C7F0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
