/*
 * XREFs of ExAcquireSpinLockShared @ 0x14021CD80
 * Callers:
 *     PsGetWorkOnBehalfThread @ 0x1402055CC (PsGetWorkOnBehalfThread.c)
 *     MiCompleteProtoPteFault @ 0x140213D90 (MiCompleteProtoPteFault.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14024E760 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140251564 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExReferenceCallBackBlock @ 0x14025A950 (ExReferenceCallBackBlock.c)
 *     MiEmptyPageAccessLog @ 0x14025BC70 (MiEmptyPageAccessLog.c)
 *     PopPepLockActivityLink @ 0x140261F78 (PopPepLockActivityLink.c)
 *     MiFindFreePageFileSpace @ 0x14026A714 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x14026AE68 (MiPageFileLargestBitmapsRun.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14028452C (PopPepGetDevicePlatformStateDependents.c)
 *     IopFindDiskIoAttribution @ 0x14028A6D0 (IopFindDiskIoAttribution.c)
 *     ExRemovePoolTag @ 0x140297D28 (ExRemovePoolTag.c)
 *     MiLookupIoPageNode @ 0x14029859C (MiLookupIoPageNode.c)
 *     MiIsProbeActive @ 0x140299E04 (MiIsProbeActive.c)
 *     MiFindLastSubsection @ 0x1402A13FC (MiFindLastSubsection.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1402A3F14 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapLock @ 0x1402A4BD0 (RtlpCSparseBitmapLock.c)
 *     MiReferencePfBackedSection @ 0x1402C5218 (MiReferencePfBackedSection.c)
 *     MiGetPrototypePteRanges @ 0x1402C9F88 (MiGetPrototypePteRanges.c)
 *     MiGetPageFromSlabAllocator @ 0x1402E80D0 (MiGetPageFromSlabAllocator.c)
 *     MiTrimSection @ 0x1402EF6E0 (MiTrimSection.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1402F895C (IopReferenceIoAttributionFromProcess.c)
 *     PsGetNextPartitionUnsafe @ 0x1402F8D08 (PsGetNextPartitionUnsafe.c)
 *     RtlpHpAcquireLockShared @ 0x140306D74 (RtlpHpAcquireLockShared.c)
 *     MiSystemFault @ 0x140311400 (MiSystemFault.c)
 *     MiGetControlAreaPtes @ 0x140315EFC (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x140316AE0 (MiLocateSubsectionNode.c)
 *     MiSystemImageHasPrivateFixups @ 0x14031A798 (MiSystemImageHasPrivateFixups.c)
 *     PfSnGetFileInformation @ 0x14031BA90 (PfSnGetFileInformation.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14031BFE0 (IoSetDiskIoAttributionFromThread.c)
 *     MmIsFileObjectAPagingFile @ 0x14031C454 (MmIsFileObjectAPagingFile.c)
 *     MiEndingOffsetWithLock @ 0x14031C790 (MiEndingOffsetWithLock.c)
 *     MiReferenceControlAreaFile @ 0x14031CEB0 (MiReferenceControlAreaFile.c)
 *     MiStartingOffsetNeedLock @ 0x14031D004 (MiStartingOffsetNeedLock.c)
 *     MiOffsetToProtos @ 0x140320B50 (MiOffsetToProtos.c)
 *     CcMapAndCopyInToCache @ 0x140331C70 (CcMapAndCopyInToCache.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     MiDeletePagablePteRange @ 0x140337360 (MiDeletePagablePteRange.c)
 *     MiLogPageAccess @ 0x14033A650 (MiLogPageAccess.c)
 *     ExProtectPoolEx @ 0x140362BE8 (ExProtectPoolEx.c)
 *     MiAllocateCombineProto @ 0x140367E10 (MiAllocateCombineProto.c)
 *     PopFxLockDevice @ 0x14036E284 (PopFxLockDevice.c)
 *     MiFreePageToSlabAllocator @ 0x140375730 (MiFreePageToSlabAllocator.c)
 *     InsertEventEntryInLookUpTable @ 0x140375F60 (InsertEventEntryInLookUpTable.c)
 *     MiCheckSlabPage @ 0x14037CFD0 (MiCheckSlabPage.c)
 *     MiKernelStackVaToStackNode @ 0x14038C194 (MiKernelStackVaToStackNode.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C8A70 (MmMapLockedPagesWithReservedMapping.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403CEE9C (HalpQueryNumaRangeTableInformation.c)
 *     MmUnmapReservedMapping @ 0x140531C90 (MmUnmapReservedMapping.c)
 *     MiGenerateAccessViolation @ 0x140548560 (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549A28 (MiDecommitHardwareEnclavePages.c)
 *     MiGetSlabStandbyListWorker @ 0x140552F60 (MiGetSlabStandbyListWorker.c)
 *     MiTransientPageListWriter @ 0x140557C80 (MiTransientPageListWriter.c)
 *     MiGetPrototypePteBoundaries @ 0x140557DAC (MiGetPrototypePteBoundaries.c)
 *     MiTransientCombineAddress @ 0x14055D224 (MiTransientCombineAddress.c)
 *     MiObtainPagefileHashes @ 0x14055D5C0 (MiObtainPagefileHashes.c)
 *     PopPepGetComponentVetoMasks @ 0x1405745B0 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x1405746A8 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x140574780 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x140574890 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x1405754BC (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x140575DA4 (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x140581E40 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x140582224 (PspJobIoRateVolumeEntryReference.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1405979EC (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x1405A2630 (ViIrpDatabaseAcquireLockShared.c)
 *     ExpRemoveTagForBigPages @ 0x1405B3BE8 (ExpRemoveTagForBigPages.c)
 *     ExpCheckForResource @ 0x1405B5624 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x1409B2C64 (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5C64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

KIRQL __stdcall ExAcquireSpinLockShared(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // r8
  _DWORD *SchedulerAssist; // r9
  KIRQL CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v6; // rcx
  signed __int32 v7; // ett
  _DWORD *v9; // rcx
  int v10; // eax
  int v11; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v1 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, CurrentIrql, v1, SchedulerAssist);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = CurrentPrcb->SchedulerAssist;
    if ( v6 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = v6[6];
        v6[6] = v10 + 1;
        if ( v10 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    _m_prefetchw((const void *)SpinLock);
    v7 = *SpinLock & 0x7FFFFFFF;
    if ( v7 != _InterlockedCompareExchange(SpinLock, v7 + 1, v7) )
    {
      v9 = CurrentPrcb->SchedulerAssist;
      if ( v9 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v11 = v9[6] - 1;
          v9[6] = v11;
          if ( !v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, CurrentIrql);
    }
  }
  return CurrentIrql;
}
