/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x140226AC0
 * Callers:
 *     IoGetAttachedDeviceReference @ 0x14020ACC0 (IoGetAttachedDeviceReference.c)
 *     IopDecrementVpbRefCount @ 0x14020DC10 (IopDecrementVpbRefCount.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140225FD0 (ExIsResourceAcquiredSharedLite.c)
 *     MiDrainSystemAccessLog @ 0x1402330C0 (MiDrainSystemAccessLog.c)
 *     MiDeleteProcessShadow @ 0x140236418 (MiDeleteProcessShadow.c)
 *     MmEnforceWorkingSetLimit @ 0x14023CEFC (MmEnforceWorkingSetLimit.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140243610 (KiAbEntryGetLockedHeadEntry.c)
 *     MiEmptyDecayClusterTimers @ 0x140265568 (MiEmptyDecayClusterTimers.c)
 *     MiSignalLargePageRebuild @ 0x1402660EC (MiSignalLargePageRebuild.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     ExpApplyPriorityBoost @ 0x140291140 (ExpApplyPriorityBoost.c)
 *     CcInitializeCacheMapEx @ 0x140291D10 (CcInitializeCacheMapEx.c)
 *     CcFlushCachePriv @ 0x140296300 (CcFlushCachePriv.c)
 *     MiObtainSystemCacheView @ 0x140299AE0 (MiObtainSystemCacheView.c)
 *     MiRemoveWsleList @ 0x14029DF00 (MiRemoveWsleList.c)
 *     CcUninitializeCacheMap @ 0x14029E760 (CcUninitializeCacheMap.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1402A9610 (MiInsertAndUnlockStandbyPages.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x1402ACBC0 (MiInsertProtectedStandbyPage.c)
 *     CcMapAndCopyInToCache @ 0x1402B4EC0 (CcMapAndCopyInToCache.c)
 *     MiVolunteerForTrimFirst @ 0x1402BA5A0 (MiVolunteerForTrimFirst.c)
 *     MiDeletePagablePteRange @ 0x1402BA840 (MiDeletePagablePteRange.c)
 *     MiZeroLargePages @ 0x1402C0D40 (MiZeroLargePages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCoalesceFreePages @ 0x1402C44C0 (MiCoalesceFreePages.c)
 *     MiDeleteBatch @ 0x1402C6C70 (MiDeleteBatch.c)
 *     KeTerminateThread @ 0x1402D602C (KeTerminateThread.c)
 *     KeStartThread @ 0x1402D8900 (KeStartThread.c)
 *     IoBoostThreadIoPriority @ 0x1402EB1D4 (IoBoostThreadIoPriority.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     MiInsertLargePageChain @ 0x1402F1AEC (MiInsertLargePageChain.c)
 *     MiInsertLargePageInNodeList @ 0x1402F1DC0 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x1402F2250 (MiIncreaseAvailablePages.c)
 *     MiWakePageZeroing @ 0x1402F2498 (MiWakePageZeroing.c)
 *     MiTryUnlinkNodeLargePage @ 0x1402F27F8 (MiTryUnlinkNodeLargePage.c)
 *     MiRebuildLargeZeroPage @ 0x140304F60 (MiRebuildLargeZeroPage.c)
 *     CcIsThereDirtyLoggedPages @ 0x140310FE0 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x1403154B0 (CcWaitForUninitializeCacheMap.c)
 *     CcSetLogHandleForFileEx @ 0x140317370 (CcSetLogHandleForFileEx.c)
 *     MiPreUnlockWorkingSetShared @ 0x14031ACE0 (MiPreUnlockWorkingSetShared.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14031CBE4 (MmAdjustWorkingSetSizeEx.c)
 *     CcUpdateTimeOnLogHandles @ 0x14031FFBC (CcUpdateTimeOnLogHandles.c)
 *     MiUpdatePageAttributeStamp @ 0x140326FF8 (MiUpdatePageAttributeStamp.c)
 *     WmipNotificationIrpCancel @ 0x14032FD10 (WmipNotificationIrpCancel.c)
 *     CcSetLoggedDataThreshold @ 0x140330640 (CcSetLoggedDataThreshold.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140332144 (MmQuerySystemWorkingSetInformation.c)
 *     MiGetPerfectColorHeadPage @ 0x1403412FC (MiGetPerfectColorHeadPage.c)
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140349C1C (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiLargePageFreeToZero @ 0x14034DC00 (MiLargePageFreeToZero.c)
 *     MiReplaceTransitionPage @ 0x140351C54 (MiReplaceTransitionPage.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x14036AC58 (MiUpdateWorkingSetPrivateSize.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14037BBA0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiPurgeLargeZeroNodePages @ 0x140383CE8 (MiPurgeLargeZeroNodePages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384340 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorNodeLargePages @ 0x140384B2C (MiMirrorNodeLargePages.c)
 *     MiLockMemoryLists @ 0x140388870 (MiLockMemoryLists.c)
 *     MiRebuildLargePages @ 0x14038CFA0 (MiRebuildLargePages.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14038DE30 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x14038E07C (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x14038E410 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceExclusive @ 0x14038E760 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038EB40 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038EE40 (ExAcquireFastResourceShared.c)
 *     ExDisownFastResource @ 0x14038F220 (ExDisownFastResource.c)
 *     ExpReleaseFastResourceExclusive @ 0x14038F6C0 (ExpReleaseFastResourceExclusive.c)
 *     CcNotifyExternalCaches @ 0x1403920B4 (CcNotifyExternalCaches.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C4BD8 (HalpDmaAcquireBufferMappings.c)
 *     IvtAllocateContextTable @ 0x1404DD940 (IvtAllocateContextTable.c)
 *     IvtAttachDeviceDomainInternal @ 0x1404DDBB8 (IvtAttachDeviceDomainInternal.c)
 *     IvtFlushTbInternal @ 0x1404DE094 (IvtFlushTbInternal.c)
 *     IvtIommuSendCommand @ 0x1404DEE20 (IvtIommuSendCommand.c)
 *     IvtIommuWaitCommand @ 0x1404DF020 (IvtIommuWaitCommand.c)
 *     HsaAttachDeviceDomainInternal @ 0x1404E0A38 (HsaAttachDeviceDomainInternal.c)
 *     HsaFlushTbInternal @ 0x1404E130C (HsaFlushTbInternal.c)
 *     HsaIommuSendCommand @ 0x1404E2288 (HsaIommuSendCommand.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1404E2F64 (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     CcIncrementWriteBehindPriority @ 0x1404E7F9C (CcIncrementWriteBehindPriority.c)
 *     CcIsThereDirtyDataEx @ 0x1404E8E80 (CcIsThereDirtyDataEx.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E99B4 (CcUnmapInactiveViewsInternal.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140514560 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x1405145F0 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140514B10 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     MiSetHugeRangePartitionId @ 0x140531EE0 (MiSetHugeRangePartitionId.c)
 *     MiPurgeBadFileOnlyPages @ 0x14053FDF0 (MiPurgeBadFileOnlyPages.c)
 *     MiQueueExtentPfnDeletion @ 0x14054046C (MiQueueExtentPfnDeletion.c)
 *     MiFreeModifiedReservations @ 0x140541C24 (MiFreeModifiedReservations.c)
 *     MiGetEnclavePage @ 0x140548BD8 (MiGetEnclavePage.c)
 *     MiFreeListPageContentsChanged @ 0x14054D34C (MiFreeListPageContentsChanged.c)
 *     MiMoveBadPageCrossPartition @ 0x14054D4EC (MiMoveBadPageCrossPartition.c)
 *     MiSetPfnRemovalRequested @ 0x14054D928 (MiSetPfnRemovalRequested.c)
 *     MiUnlinkPageFromBadList @ 0x14054DA40 (MiUnlinkPageFromBadList.c)
 *     MiLockWorkingSetCoreExclusive @ 0x14054DCB0 (MiLockWorkingSetCoreExclusive.c)
 *     MiNoPagesLastChance @ 0x14054ECF8 (MiNoPagesLastChance.c)
 *     MiSwapNumaStandbyPage @ 0x14054F900 (MiSwapNumaStandbyPage.c)
 *     MiGetSlabStandbyPage @ 0x1405515FC (MiGetSlabStandbyPage.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x1405B2CB0 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1405B3090 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KxAcquireQueuedSpinLock(__int64 a1, volatile __int64 *a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 result; // rax
  int v7; // eax
  bool v8; // zf

  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v7 = SchedulerAssist[6];
      v8 = v7 == -1;
      result = (unsigned int)(v7 + 1);
      SchedulerAssist[6] = result;
      if ( v8 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiAcquireQueuedSpinLockInstrumented(a1, a2);
  if ( _InterlockedExchange64(a2, a1) )
    return KxWaitForLockOwnerShip(a1);
  return result;
}
