/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x14029AB10
 * Callers:
 *     KiAbEntryGetLockedHeadEntry @ 0x140210820 (KiAbEntryGetLockedHeadEntry.c)
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 *     IoGetAttachedDeviceReference @ 0x1402244D0 (IoGetAttachedDeviceReference.c)
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140234630 (MiInsertAndUnlockStandbyPages.c)
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MiZeroLargePages @ 0x14023B690 (MiZeroLargePages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCoalesceFreePages @ 0x14023EE10 (MiCoalesceFreePages.c)
 *     MiDeleteBatch @ 0x1402415C0 (MiDeleteBatch.c)
 *     MiDeletePagablePteRange @ 0x140242470 (MiDeletePagablePteRange.c)
 *     MiVolunteerForTrimFirst @ 0x140245C40 (MiVolunteerForTrimFirst.c)
 *     MiDrainSystemAccessLog @ 0x14024BBE0 (MiDrainSystemAccessLog.c)
 *     MiDeleteProcessShadow @ 0x140254168 (MiDeleteProcessShadow.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     MiInsertProtectedStandbyPage @ 0x140278FC0 (MiInsertProtectedStandbyPage.c)
 *     MmEnforceWorkingSetLimit @ 0x14027B43C (MmEnforceWorkingSetLimit.c)
 *     ExpApplyPriorityBoost @ 0x1402830C0 (ExpApplyPriorityBoost.c)
 *     IopDecrementVpbRefCount @ 0x140291F80 (IopDecrementVpbRefCount.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14029BBE0 (ExIsResourceAcquiredSharedLite.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiObtainSystemCacheView @ 0x1402B94B0 (MiObtainSystemCacheView.c)
 *     CcFlushCachePriv @ 0x1402BEDA0 (CcFlushCachePriv.c)
 *     CcInitializeCacheMapEx @ 0x1402C05C0 (CcInitializeCacheMapEx.c)
 *     CcUninitializeCacheMap @ 0x1402C4180 (CcUninitializeCacheMap.c)
 *     MiEmptyDecayClusterTimers @ 0x1402D1DE4 (MiEmptyDecayClusterTimers.c)
 *     IoBoostThreadIoPriority @ 0x1402D668C (IoBoostThreadIoPriority.c)
 *     KeStartThread @ 0x1402EAD58 (KeStartThread.c)
 *     MiSignalLargePageRebuild @ 0x1402F41A4 (MiSignalLargePageRebuild.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402F64EC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRestoreTransitionPte @ 0x1402F6C10 (MiRestoreTransitionPte.c)
 *     KeTerminateThread @ 0x1402F9A38 (KeTerminateThread.c)
 *     MiPreUnlockWorkingSetShared @ 0x140311648 (MiPreUnlockWorkingSetShared.c)
 *     MiInsertLargePageChain @ 0x1403168A8 (MiInsertLargePageChain.c)
 *     MiInsertLargePageInNodeList @ 0x140316B80 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x140317010 (MiIncreaseAvailablePages.c)
 *     MiWakePageZeroing @ 0x140317258 (MiWakePageZeroing.c)
 *     MiLargePageFreeToZero @ 0x14031A0B0 (MiLargePageFreeToZero.c)
 *     MiReplaceTransitionPage @ 0x14031BEAC (MiReplaceTransitionPage.c)
 *     MiGetPerfectColorHeadPage @ 0x14031D940 (MiGetPerfectColorHeadPage.c)
 *     MiRemoveWsleList @ 0x1403234F0 (MiRemoveWsleList.c)
 *     MiRebuildLargeZeroPage @ 0x140331AA0 (MiRebuildLargeZeroPage.c)
 *     CcIsThereDirtyLoggedPages @ 0x14033FFB0 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x1403443D8 (CcWaitForUninitializeCacheMap.c)
 *     CcSetLogHandleForFileEx @ 0x140346080 (CcSetLogHandleForFileEx.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14034BC24 (MmAdjustWorkingSetSizeEx.c)
 *     CcUpdateTimeOnLogHandles @ 0x14034F1BC (CcUpdateTimeOnLogHandles.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14034F4C0 (MmQuerySystemWorkingSetInformation.c)
 *     MiTryUnlinkNodeLargePage @ 0x140353DE8 (MiTryUnlinkNodeLargePage.c)
 *     MiUpdatePageAttributeStamp @ 0x1403567A8 (MiUpdatePageAttributeStamp.c)
 *     WmipNotificationIrpCancel @ 0x14035EF10 (WmipNotificationIrpCancel.c)
 *     CcSetLoggedDataThreshold @ 0x14035F8D0 (CcSetLoggedDataThreshold.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x140368C78 (MiUpdateWorkingSetPrivateSize.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x140379E70 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiPurgeLargeZeroNodePages @ 0x140382008 (MiPurgeLargeZeroNodePages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140382660 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorNodeLargePages @ 0x140382E4C (MiMirrorNodeLargePages.c)
 *     MiLockMemoryLists @ 0x1403866D0 (MiLockMemoryLists.c)
 *     MiRebuildLargePages @ 0x14038ACA0 (MiRebuildLargePages.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14038B970 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x14038BBBC (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x14038BF50 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceExclusive @ 0x14038C2A0 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038C680 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038C980 (ExAcquireFastResourceShared.c)
 *     ExDisownFastResource @ 0x14038CD60 (ExDisownFastResource.c)
 *     ExpReleaseFastResourceExclusive @ 0x14038D200 (ExpReleaseFastResourceExclusive.c)
 *     CcNotifyExternalCaches @ 0x14038FBF4 (CcNotifyExternalCaches.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C16B8 (HalpDmaAcquireBufferMappings.c)
 *     IvtAllocateContextTable @ 0x1404DA3B0 (IvtAllocateContextTable.c)
 *     IvtAttachDeviceDomainInternal @ 0x1404DA628 (IvtAttachDeviceDomainInternal.c)
 *     IvtFlushTbInternal @ 0x1404DAB04 (IvtFlushTbInternal.c)
 *     IvtIommuSendCommand @ 0x1404DB890 (IvtIommuSendCommand.c)
 *     IvtIommuWaitCommand @ 0x1404DBA90 (IvtIommuWaitCommand.c)
 *     HsaAttachDeviceDomainInternal @ 0x1404DD4A8 (HsaAttachDeviceDomainInternal.c)
 *     HsaFlushTbInternal @ 0x1404DDD7C (HsaFlushTbInternal.c)
 *     HsaIommuSendCommand @ 0x1404DECF8 (HsaIommuSendCommand.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1404DF9D4 (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     CcIncrementWriteBehindPriority @ 0x1404E4A0C (CcIncrementWriteBehindPriority.c)
 *     CcIsThereDirtyDataEx @ 0x1404E58F0 (CcIsThereDirtyDataEx.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E6424 (CcUnmapInactiveViewsInternal.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140510C30 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x140510CC0 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x1405111E0 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     MiSetHugeRangePartitionId @ 0x14052E510 (MiSetHugeRangePartitionId.c)
 *     MiPurgeBadFileOnlyPages @ 0x14053C420 (MiPurgeBadFileOnlyPages.c)
 *     MiQueueExtentPfnDeletion @ 0x14053CA9C (MiQueueExtentPfnDeletion.c)
 *     MiFreeModifiedReservations @ 0x14053E254 (MiFreeModifiedReservations.c)
 *     MiGetEnclavePage @ 0x140545208 (MiGetEnclavePage.c)
 *     MiFreeListPageContentsChanged @ 0x14054997C (MiFreeListPageContentsChanged.c)
 *     MiMoveBadPageCrossPartition @ 0x140549B1C (MiMoveBadPageCrossPartition.c)
 *     MiSetPfnRemovalRequested @ 0x140549F58 (MiSetPfnRemovalRequested.c)
 *     MiUnlinkPageFromBadList @ 0x14054A070 (MiUnlinkPageFromBadList.c)
 *     MiLockWorkingSetCoreExclusive @ 0x14054A2E0 (MiLockWorkingSetCoreExclusive.c)
 *     MiNoPagesLastChance @ 0x14054B328 (MiNoPagesLastChance.c)
 *     MiSwapNumaStandbyPage @ 0x14054BF30 (MiSwapNumaStandbyPage.c)
 *     MiGetSlabStandbyPage @ 0x14054DC2C (MiGetSlabStandbyPage.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x1405AF150 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1405AF530 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
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
