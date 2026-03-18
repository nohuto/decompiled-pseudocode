/*
 * XREFs of ExAcquireSpinLockShared @ 0x140366580
 * Callers:
 *     SepGetSingletonEntryFromIndexNumber @ 0x1402058C0 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExRemovePoolTag @ 0x1402166FC (ExRemovePoolTag.c)
 *     MiFindLastSubsection @ 0x14022CB60 (MiFindLastSubsection.c)
 *     MiFreePageToSlabAllocator @ 0x14023BE50 (MiFreePageToSlabAllocator.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x14023CD70 (RtlpHpVaMgrCtxAlloc.c)
 *     MiReferencePfBackedSection @ 0x14023FA50 (MiReferencePfBackedSection.c)
 *     MiBetterDriverPageNeeded @ 0x140247FBC (MiBetterDriverPageNeeded.c)
 *     MiGetPrototypePteRanges @ 0x140250D70 (MiGetPrototypePteRanges.c)
 *     MiFindFreePageFileSpace @ 0x14025F6B0 (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x14025FD40 (MiPageFileLargestBitmapsRun.c)
 *     MiSystemImageHasPrivateFixups @ 0x140279474 (MiSystemImageHasPrivateFixups.c)
 *     MiSystemFault @ 0x140279590 (MiSystemFault.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14027A794 (MiReferenceControlAreaFileWithTag.c)
 *     MiReferenceInPageFile @ 0x14027A818 (MiReferenceInPageFile.c)
 *     MiTrimSection @ 0x14027E174 (MiTrimSection.c)
 *     MiReferenceControlAreaFile @ 0x140281750 (MiReferenceControlAreaFile.c)
 *     ExReferenceCallBackBlock @ 0x140281870 (ExReferenceCallBackBlock.c)
 *     MiGetControlAreaPtes @ 0x140287070 (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x140287180 (MiLocateSubsectionNode.c)
 *     InsertEventEntryInLookUpTable @ 0x1402A1AEC (InsertEventEntryInLookUpTable.c)
 *     CcMapAndCopyInToCache @ 0x1402BD970 (CcMapAndCopyInToCache.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiGetPageFromSlabAllocator @ 0x1402EB59C (MiGetPageFromSlabAllocator.c)
 *     MiLockVadTree @ 0x1402ED128 (MiLockVadTree.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1402F5F14 (IopReferenceIoAttributionFromProcess.c)
 *     PsGetWorkOnBehalfThread @ 0x1402F6220 (PsGetWorkOnBehalfThread.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140300534 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     MiLogPageAccess @ 0x140333040 (MiLogPageAccess.c)
 *     MiMakeSystemCacheRangeValid @ 0x140333AC0 (MiMakeSystemCacheRangeValid.c)
 *     MiStartingOffsetNeedLock @ 0x140334364 (MiStartingOffsetNeedLock.c)
 *     MiEmptyPageAccessLog @ 0x140334400 (MiEmptyPageAccessLog.c)
 *     IoPageReadEx @ 0x140342C50 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1403437A0 (IoSetDiskIoAttributionFromThread.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     PopPepLockActivityLink @ 0x140356948 (PopPepLockActivityLink.c)
 *     RtlpCSparseBitmapLock @ 0x140363BC0 (RtlpCSparseBitmapLock.c)
 *     PsGetNextPartitionUnsafe @ 0x140363D98 (PsGetNextPartitionUnsafe.c)
 *     RtlpHpAcquireLockShared @ 0x140364760 (RtlpHpAcquireLockShared.c)
 *     IopFindDiskIoAttribution @ 0x140365DD0 (IopFindDiskIoAttribution.c)
 *     ExpStampBigPoolEntry @ 0x140365EB4 (ExpStampBigPoolEntry.c)
 *     PfSnGetFileInformation @ 0x1403661D0 (PfSnGetFileInformation.c)
 *     ExProtectPoolEx @ 0x140367008 (ExProtectPoolEx.c)
 *     MmIsFileObjectAPagingFile @ 0x140374EA8 (MmIsFileObjectAPagingFile.c)
 *     MiKernelStackVaToStackNode @ 0x1403936D8 (MiKernelStackVaToStackNode.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x140395AE0 (PopPepGetDevicePlatformStateDependents.c)
 *     PopFxLockDevice @ 0x1403A4868 (PopFxLockDevice.c)
 *     MiCheckSlabPage @ 0x1403B1DEC (MiCheckSlabPage.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403D7610 (MmMapLockedPagesWithReservedMapping.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403DE3A4 (HalpQueryNumaRangeTableInformation.c)
 *     MiObtainPagefileHashes @ 0x14045D4C6 (MiObtainPagefileHashes.c)
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x140533E60 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     MmUnmapReservedMapping @ 0x1405858A0 (MmUnmapReservedMapping.c)
 *     MmQueryBadAddresses @ 0x14058FE88 (MmQueryBadAddresses.c)
 *     MiFindPageFileMemoryExtent @ 0x140599D58 (MiFindPageFileMemoryExtent.c)
 *     MiInitializeCachedExtentWalker @ 0x14059F4C4 (MiInitializeCachedExtentWalker.c)
 *     MiGenerateAccessViolation @ 0x1405A7258 (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x1405A89EC (MiDecommitHardwareEnclavePages.c)
 *     MiTransientPageListWriter @ 0x1405B04A4 (MiTransientPageListWriter.c)
 *     MiGetSlabStandbyListWorker @ 0x1405B11A0 (MiGetSlabStandbyListWorker.c)
 *     MiTransientCombineAddress @ 0x1405B63F0 (MiTransientCombineAddress.c)
 *     MiGetPrototypePteBoundaries @ 0x1405C33AC (MiGetPrototypePteBoundaries.c)
 *     PopPepGetComponentVetoMasks @ 0x1405D4F54 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x1405D504C (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x1405D5124 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1405D5234 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x1405D5E24 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x1405D6478 (PopPepRegisterComponentPerfStates.c)
 *     PsGetJobLastThrottledIoTime @ 0x1405E0B58 (PsGetJobLastThrottledIoTime.c)
 *     PspJobIoRateVolumeEntryReference @ 0x1405E0FA0 (PspJobIoRateVolumeEntryReference.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1405F58AC (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x1406022B8 (ViIrpDatabaseAcquireLockShared.c)
 *     ExpRemoveTagForBigPages @ 0x14063BC14 (ExpRemoveTagForBigPages.c)
 *     ExpCheckForResource @ 0x14063D44C (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x140A6C8B4 (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140366A20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140461B20 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
