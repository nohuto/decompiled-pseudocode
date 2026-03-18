/*
 * XREFs of ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0
 * Callers:
 *     PsGetWorkOnBehalfThread @ 0x14020890C (PsGetWorkOnBehalfThread.c)
 *     KeQueryBasePriorityThread @ 0x140208C34 (KeQueryBasePriorityThread.c)
 *     ExpAddTagForBigPages @ 0x140211B40 (ExpAddTagForBigPages.c)
 *     RtlpHpLfhSlotAllocate @ 0x140212CB0 (RtlpHpLfhSlotAllocate.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14022ABD0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     MiGetControlAreaPtes @ 0x14022D05C (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x14022E700 (MiLocateSubsectionNode.c)
 *     MiEmptyPageAccessLog @ 0x1402331B0 (MiEmptyPageAccessLog.c)
 *     ExReferenceCallBackBlock @ 0x140233690 (ExReferenceCallBackBlock.c)
 *     ExProtectPoolEx @ 0x140238434 (ExProtectPoolEx.c)
 *     KeQueryAffinityProcess @ 0x14023EF70 (KeQueryAffinityProcess.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140243610 (KiAbEntryGetLockedHeadEntry.c)
 *     IopReferenceIoAttributionFromProcess @ 0x14024923C (IopReferenceIoAttributionFromProcess.c)
 *     MmIsFileObjectAPagingFile @ 0x14024E4A8 (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14024E710 (IoSetDiskIoAttributionFromThread.c)
 *     MiIsProbeActive @ 0x14025EA90 (MiIsProbeActive.c)
 *     MiLookupIoPageNode @ 0x14025F87C (MiLookupIoPageNode.c)
 *     ExRemovePoolTag @ 0x140260FA4 (ExRemovePoolTag.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     MmUnlockLoadedModuleListShared @ 0x140297044 (MmUnlockLoadedModuleListShared.c)
 *     MiEndingOffsetWithLock @ 0x140297080 (MiEndingOffsetWithLock.c)
 *     MiSystemFault @ 0x1402989E0 (MiSystemFault.c)
 *     MiReferenceControlAreaFile @ 0x1402A0600 (MiReferenceControlAreaFile.c)
 *     MiStartingOffsetNeedLock @ 0x1402A0754 (MiStartingOffsetNeedLock.c)
 *     MiOffsetToProtos @ 0x1402A42A0 (MiOffsetToProtos.c)
 *     CcMapAndCopyInToCache @ 0x1402B4EC0 (CcMapAndCopyInToCache.c)
 *     MiLogPageAccess @ 0x1402BDB30 (MiLogPageAccess.c)
 *     RtlpHpLfhContextCompact @ 0x1402D13D8 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x1402D14C0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402D1FE0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     PfSnGetFileInformation @ 0x1402D2A40 (PfSnGetFileInformation.c)
 *     PopPepLockActivityLink @ 0x1402D4288 (PopPepLockActivityLink.c)
 *     PopPepReleaseActivityLink @ 0x1402D4DF8 (PopPepReleaseActivityLink.c)
 *     KiRundownMutants @ 0x1402D5C98 (KiRundownMutants.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1402E3574 (SepGetSingletonEntryFromIndexNumber.c)
 *     IopFindDiskIoAttribution @ 0x1402EED50 (IopFindDiskIoAttribution.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KeSetLegacyAffinityThread @ 0x1402F77F0 (KeSetLegacyAffinityThread.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140303618 (KiActivateWaiterQueueWithNoLocks.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x140307164 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x140307A80 (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x140309B20 (RtlpHpLfhSubsegmentCreate.c)
 *     MiSystemImageHasPrivateFixups @ 0x14030DB7C (MiSystemImageHasPrivateFixups.c)
 *     MiFreeSlabEntries @ 0x1403181C0 (MiFreeSlabEntries.c)
 *     MiGetPrototypePteRanges @ 0x140319788 (MiGetPrototypePteRanges.c)
 *     MiReferencePfBackedSection @ 0x14031F7A0 (MiReferencePfBackedSection.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x140329544 (PopPepGetDevicePlatformStateDependents.c)
 *     MiGetPageFromSlabAllocator @ 0x140332F1C (MiGetPageFromSlabAllocator.c)
 *     MiFindFreePageFileSpace @ 0x14033A15C (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x14033A8B0 (MiPageFileLargestBitmapsRun.c)
 *     PsGetNextPartitionUnsafe @ 0x14033B998 (PsGetNextPartitionUnsafe.c)
 *     MiAbortCombineScan @ 0x140349794 (MiAbortCombineScan.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiTrimSection @ 0x1403545B0 (MiTrimSection.c)
 *     MiFindLastSubsection @ 0x140355FCC (MiFindLastSubsection.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     vDbgPrintExWithPrefixInternal @ 0x140364830 (vDbgPrintExWithPrefixInternal.c)
 *     MiAllocateCombineProto @ 0x140367B60 (MiAllocateCombineProto.c)
 *     PopFxLockDevice @ 0x14036FC44 (PopFxLockDevice.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403716CC (ViAvlReleaseTableLockFromDpcLevel.c)
 *     MiFreePageToSlabAllocator @ 0x140375520 (MiFreePageToSlabAllocator.c)
 *     InsertEventEntryInLookUpTable @ 0x140375D50 (InsertEventEntryInLookUpTable.c)
 *     MiCheckSlabPage @ 0x14037CD40 (MiCheckSlabPage.c)
 *     MiKernelStackVaToStackNode @ 0x14038BA44 (MiKernelStackVaToStackNode.c)
 *     DbgEnumerateCallback @ 0x140394F60 (DbgEnumerateCallback.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1403A59CC (MiGetSharedProtosAtDpcLevel.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C7ED0 (MmMapLockedPagesWithReservedMapping.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403CE4AC (HalpQueryNumaRangeTableInformation.c)
 *     KeQueryCpuSetsProcess @ 0x14051AB74 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051B100 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x1405240C4 (KiSelectCandidateProcessor.c)
 *     MmUnmapReservedMapping @ 0x140530190 (MmUnmapReservedMapping.c)
 *     MmReadProcessPageTables @ 0x140546300 (MmReadProcessPageTables.c)
 *     MiGenerateAccessViolation @ 0x140546A60 (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x140547F28 (MiDecommitHardwareEnclavePages.c)
 *     MiGetSlabStandbyListWorker @ 0x140551490 (MiGetSlabStandbyListWorker.c)
 *     MiTransientPageListWriter @ 0x1405561B0 (MiTransientPageListWriter.c)
 *     MiGetPrototypePteBoundaries @ 0x1405562DC (MiGetPrototypePteBoundaries.c)
 *     MiTransientCombineAddress @ 0x14055B754 (MiTransientCombineAddress.c)
 *     MiObtainPagefileHashes @ 0x14055BAF0 (MiObtainPagefileHashes.c)
 *     PopPepGetComponentVetoMasks @ 0x140572BA0 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x140572C98 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x140572D70 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x140572E80 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x140573AAC (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x140574394 (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x140580430 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x140580814 (PspJobIoRateVolumeEntryReference.c)
 *     DbgpRemoveDebugPrintCallback @ 0x140583D8C (DbgpRemoveDebugPrintCallback.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1405938D8 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x140593A2C (RtlpHpLargeAllocSize.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140595FBC (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x1405A0CA0 (ViIrpDatabaseReleaseLockShared.c)
 *     VmColdPagesHint @ 0x1405A0DA0 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x1405A113C (VmpAccessFaultBatch.c)
 *     VmpInvalidateOutstandingFaults @ 0x1405A2264 (VmpInvalidateOutstandingFaults.c)
 *     VmpPrefetchVirtualAddresses @ 0x1405A2B54 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x1405A31BC (VmpQueryAccessedState.c)
 *     VmpSplitMemoryRange @ 0x1405A3714 (VmpSplitMemoryRange.c)
 *     ExpRemoveTagForBigPages @ 0x1405B21E8 (ExpRemoveTagForBigPages.c)
 *     ExpCheckForResource @ 0x1405B3C24 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x1409B5D64 (ExQuerySystemLockInformation.c)
 *     ViDeadlockDetectionUnlock @ 0x1409E22F4 (ViDeadlockDetectionUnlock.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B43A4 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __stdcall ExReleaseSpinLockSharedFromDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v3; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(SpinLock, retaddr);
  }
  else
  {
    _InterlockedAnd(SpinLock, 0xBFFFFFFF);
    _InterlockedDecrement(SpinLock);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist && CurrentPrcb->NestingLevel <= 1u )
  {
    v3 = SchedulerAssist[6] - 1;
    SchedulerAssist[6] = v3;
    if ( !v3 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
}
