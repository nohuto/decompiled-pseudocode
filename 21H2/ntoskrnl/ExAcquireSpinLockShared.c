/*
 * XREFs of ExAcquireSpinLockShared @ 0x1402C1680
 * Callers:
 *     IopFindDiskIoAttribution @ 0x140207870 (IopFindDiskIoAttribution.c)
 *     ExRemovePoolTag @ 0x1402187A8 (ExRemovePoolTag.c)
 *     MiLookupIoPageNode @ 0x14021901C (MiLookupIoPageNode.c)
 *     MiIsProbeActive @ 0x140219764 (MiIsProbeActive.c)
 *     MiFindLastSubsection @ 0x14021E97C (MiFindLastSubsection.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x140221354 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapLock @ 0x140222010 (RtlpCSparseBitmapLock.c)
 *     MiReferencePfBackedSection @ 0x140243798 (MiReferencePfBackedSection.c)
 *     MiGetPrototypePteRanges @ 0x140248878 (MiGetPrototypePteRanges.c)
 *     MiFindFreePageFileSpace @ 0x1402586B4 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x140258E08 (MiPageFileLargestBitmapsRun.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x140272B84 (PopPepGetDevicePlatformStateDependents.c)
 *     ExReferenceCallBackBlock @ 0x14027BEC0 (ExReferenceCallBackBlock.c)
 *     MiEmptyPageAccessLog @ 0x14027D1E0 (MiEmptyPageAccessLog.c)
 *     PopPepLockActivityLink @ 0x140283448 (PopPepLockActivityLink.c)
 *     MiGetPageFromSlabAllocator @ 0x140299420 (MiGetPageFromSlabAllocator.c)
 *     PsGetWorkOnBehalfThread @ 0x1402A9F0C (PsGetWorkOnBehalfThread.c)
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1402F2FB0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1402F5D74 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExProtectPoolEx @ 0x1402F7F18 (ExProtectPoolEx.c)
 *     MiTrimSection @ 0x1402FA430 (MiTrimSection.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1403036AC (IopReferenceIoAttributionFromProcess.c)
 *     PsGetNextPartitionUnsafe @ 0x140303A58 (PsGetNextPartitionUnsafe.c)
 *     RtlpHpAcquireLockShared @ 0x140311AC4 (RtlpHpAcquireLockShared.c)
 *     MiSystemFault @ 0x14031C150 (MiSystemFault.c)
 *     MiGetControlAreaPtes @ 0x140320C4C (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x140321830 (MiLocateSubsectionNode.c)
 *     MiSystemImageHasPrivateFixups @ 0x1403254E8 (MiSystemImageHasPrivateFixups.c)
 *     PfSnGetFileInformation @ 0x1403267E0 (PfSnGetFileInformation.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140326D30 (IoSetDiskIoAttributionFromThread.c)
 *     MmIsFileObjectAPagingFile @ 0x1403271A4 (MmIsFileObjectAPagingFile.c)
 *     MiEndingOffsetWithLock @ 0x1403274E0 (MiEndingOffsetWithLock.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     MiStartingOffsetNeedLock @ 0x140327D54 (MiStartingOffsetNeedLock.c)
 *     MiOffsetToProtos @ 0x14032B8A0 (MiOffsetToProtos.c)
 *     CcMapAndCopyInToCache @ 0x14033C9C0 (CcMapAndCopyInToCache.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiDeletePagablePteRange @ 0x1403420B0 (MiDeletePagablePteRange.c)
 *     MiLogPageAccess @ 0x1403453A0 (MiLogPageAccess.c)
 *     MiAllocateCombineProto @ 0x140367FC0 (MiAllocateCombineProto.c)
 *     PopFxLockDevice @ 0x14036E434 (PopFxLockDevice.c)
 *     MiFreePageToSlabAllocator @ 0x140375280 (MiFreePageToSlabAllocator.c)
 *     InsertEventEntryInLookUpTable @ 0x140375AB0 (InsertEventEntryInLookUpTable.c)
 *     MiCheckSlabPage @ 0x14037CB20 (MiCheckSlabPage.c)
 *     MiKernelStackVaToStackNode @ 0x14038C2E4 (MiKernelStackVaToStackNode.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C8C10 (MmMapLockedPagesWithReservedMapping.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403CF00C (HalpQueryNumaRangeTableInformation.c)
 *     MmUnmapReservedMapping @ 0x140531ED0 (MmUnmapReservedMapping.c)
 *     MiGenerateAccessViolation @ 0x1405487A0 (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549C68 (MiDecommitHardwareEnclavePages.c)
 *     MiGetSlabStandbyListWorker @ 0x1405531A0 (MiGetSlabStandbyListWorker.c)
 *     MiTransientPageListWriter @ 0x140557EC0 (MiTransientPageListWriter.c)
 *     MiGetPrototypePteBoundaries @ 0x140557FEC (MiGetPrototypePteBoundaries.c)
 *     MiTransientCombineAddress @ 0x14055D464 (MiTransientCombineAddress.c)
 *     MiObtainPagefileHashes @ 0x14055D800 (MiObtainPagefileHashes.c)
 *     PopPepGetComponentVetoMasks @ 0x1405747F0 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x1405748E8 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x1405749C0 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x140574AD0 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x1405756FC (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x140575FE4 (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x140582070 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x140582454 (PspJobIoRateVolumeEntryReference.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140597C1C (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x1405A2860 (ViIrpDatabaseAcquireLockShared.c)
 *     ExpRemoveTagForBigPages @ 0x1405B3E18 (ExpRemoveTagForBigPages.c)
 *     ExpCheckForResource @ 0x1405B5854 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x1409B3B94 (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140213930 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5E94 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

KIRQL __stdcall ExAcquireSpinLockShared(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // di
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
