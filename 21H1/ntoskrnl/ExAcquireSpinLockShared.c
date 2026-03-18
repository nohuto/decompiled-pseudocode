/*
 * XREFs of ExAcquireSpinLockShared @ 0x1402814C0
 * Callers:
 *     PsGetNextPartitionUnsafe @ 0x140202E28 (PsGetNextPartitionUnsafe.c)
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiSystemFault @ 0x14022A810 (MiSystemFault.c)
 *     IopReferenceIoAttributionFromProcess @ 0x14023561C (IopReferenceIoAttributionFromProcess.c)
 *     RtlpHpAcquireLockShared @ 0x140238714 (RtlpHpAcquireLockShared.c)
 *     PopPepLockActivityLink @ 0x14023C510 (PopPepLockActivityLink.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140259940 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     PsGetWorkOnBehalfThread @ 0x14025A200 (PsGetWorkOnBehalfThread.c)
 *     CcMapAndCopyInToCache @ 0x14027BC80 (CcMapAndCopyInToCache.c)
 *     MiEndingOffsetWithLock @ 0x14027D624 (MiEndingOffsetWithLock.c)
 *     MiStartingOffsetNeedLock @ 0x14027D718 (MiStartingOffsetNeedLock.c)
 *     MmIsFileObjectAPagingFile @ 0x140280A5C (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140280FF0 (IoSetDiskIoAttributionFromThread.c)
 *     PfSnGetFileInformation @ 0x140281140 (PfSnGetFileInformation.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiOffsetToProtos @ 0x140288040 (MiOffsetToProtos.c)
 *     MiDeletePagablePteRange @ 0x14029B4A0 (MiDeletePagablePteRange.c)
 *     MiLogPageAccess @ 0x14029E790 (MiLogPageAccess.c)
 *     MiGetControlAreaPtes @ 0x1402A25CC (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x1402A3490 (MiLocateSubsectionNode.c)
 *     MiEmptyPageAccessLog @ 0x1402A4D00 (MiEmptyPageAccessLog.c)
 *     ExReferenceCallBackBlock @ 0x1402A5A10 (ExReferenceCallBackBlock.c)
 *     MiFindLastSubsection @ 0x1402BF004 (MiFindLastSubsection.c)
 *     MiTrimSection @ 0x1402CE300 (MiTrimSection.c)
 *     MiReferencePfBackedSection @ 0x1402D03FC (MiReferencePfBackedSection.c)
 *     IopFindDiskIoAttribution @ 0x1402DB0D0 (IopFindDiskIoAttribution.c)
 *     ExProtectPoolEx @ 0x1402DF9C4 (ExProtectPoolEx.c)
 *     MiIsProbeActive @ 0x1402F8260 (MiIsProbeActive.c)
 *     ExRemovePoolTag @ 0x1402FABA8 (ExRemovePoolTag.c)
 *     MiLookupIoPageNode @ 0x1402FB41C (MiLookupIoPageNode.c)
 *     MiSystemImageHasPrivateFixups @ 0x1402FDDE4 (MiSystemImageHasPrivateFixups.c)
 *     MiGetPrototypePteRanges @ 0x14031AA38 (MiGetPrototypePteRanges.c)
 *     MiGetPageFromSlabAllocator @ 0x1403261BC (MiGetPageFromSlabAllocator.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140339374 (SepGetSingletonEntryFromIndexNumber.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14033C57C (PopPepGetDevicePlatformStateDependents.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiFindFreePageFileSpace @ 0x14034CC50 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x14034D3A4 (MiPageFileLargestBitmapsRun.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x140360CA0 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapLock @ 0x14036195C (RtlpCSparseBitmapLock.c)
 *     MiAllocateCombineProto @ 0x1403651C0 (MiAllocateCombineProto.c)
 *     PopFxLockDevice @ 0x14036D3A4 (PopFxLockDevice.c)
 *     MiFreePageToSlabAllocator @ 0x140372050 (MiFreePageToSlabAllocator.c)
 *     InsertEventEntryInLookUpTable @ 0x140372880 (InsertEventEntryInLookUpTable.c)
 *     MiCheckSlabPage @ 0x14037A290 (MiCheckSlabPage.c)
 *     MiKernelStackVaToStackNode @ 0x140388834 (MiKernelStackVaToStackNode.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C4570 (MmMapLockedPagesWithReservedMapping.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403CAAAC (HalpQueryNumaRangeTableInformation.c)
 *     MmUnmapReservedMapping @ 0x14052C170 (MmUnmapReservedMapping.c)
 *     MiGenerateAccessViolation @ 0x140542A40 (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x140543F08 (MiDecommitHardwareEnclavePages.c)
 *     MiGetSlabStandbyListWorker @ 0x14054D470 (MiGetSlabStandbyListWorker.c)
 *     MiTransientPageListWriter @ 0x140552190 (MiTransientPageListWriter.c)
 *     MiGetPrototypePteBoundaries @ 0x1405522BC (MiGetPrototypePteBoundaries.c)
 *     MiTransientCombineAddress @ 0x140557734 (MiTransientCombineAddress.c)
 *     MiObtainPagefileHashes @ 0x140557AD0 (MiObtainPagefileHashes.c)
 *     PopPepGetComponentVetoMasks @ 0x14056EB20 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x14056EC18 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x14056ECF0 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x14056EE00 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x14056FA2C (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x140570314 (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x14057C3C0 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x14057C7A4 (PspJobIoRateVolumeEntryReference.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140591E2C (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x14059CA70 (ViIrpDatabaseAcquireLockShared.c)
 *     ExpRemoveTagForBigPages @ 0x1405ADF68 (ExpRemoveTagForBigPages.c)
 *     ExpCheckForResource @ 0x1405AF9A4 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x1409AEF94 (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402EF840 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405AFFD4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

KIRQL __stdcall ExAcquireSpinLockShared(PEX_SPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v4; // rcx
  signed __int32 v5; // ett
  _DWORD *v7; // rcx
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  int v10; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = CurrentPrcb->SchedulerAssist;
    if ( v4 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v9 = v4[6];
        v4[6] = v9 + 1;
        if ( v9 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    _m_prefetchw((const void *)SpinLock);
    v5 = *SpinLock & 0x7FFFFFFF;
    if ( v5 != _InterlockedCompareExchange(SpinLock, v5 + 1, v5) )
    {
      v7 = CurrentPrcb->SchedulerAssist;
      if ( v7 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v10 = v7[6] - 1;
          v7[6] = v10;
          if ( !v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, CurrentIrql);
    }
  }
  return CurrentIrql;
}
