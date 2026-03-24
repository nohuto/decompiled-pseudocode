/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x140350970
 * Callers:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     IoGetAttachedDeviceReference @ 0x14022CA10 (IoGetAttachedDeviceReference.c)
 *     CcFlushCachePriv @ 0x14022CBA0 (CcFlushCachePriv.c)
 *     CcInitializeCacheMapEx @ 0x14022E5C0 (CcInitializeCacheMapEx.c)
 *     ExpApplyPriorityBoost @ 0x14022F000 (ExpApplyPriorityBoost.c)
 *     MiZeroLargePages @ 0x140232520 (MiZeroLargePages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCoalesceFreePages @ 0x140235CA0 (MiCoalesceFreePages.c)
 *     MiDeleteBatch @ 0x140238450 (MiDeleteBatch.c)
 *     MmEnforceWorkingSetLimit @ 0x1402521D8 (MmEnforceWorkingSetLimit.c)
 *     MiDrainSystemAccessLog @ 0x14025BB80 (MiDrainSystemAccessLog.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402696C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReplaceTransitionPage @ 0x14026D370 (MiReplaceTransitionPage.c)
 *     MiEmptyDecayClusterTimers @ 0x140271E00 (MiEmptyDecayClusterTimers.c)
 *     MiSignalLargePageRebuild @ 0x140272FE0 (MiSignalLargePageRebuild.c)
 *     KeStartThread @ 0x140277A6C (KeStartThread.c)
 *     KeTerminateThread @ 0x1402784F0 (KeTerminateThread.c)
 *     MiRemoveWsleList @ 0x14028EBD0 (MiRemoveWsleList.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     MiTryUnlinkNodeLargePage @ 0x14029195C (MiTryUnlinkNodeLargePage.c)
 *     MiGetPerfectColorHeadPage @ 0x140299548 (MiGetPerfectColorHeadPage.c)
 *     MiRebuildLargeZeroPage @ 0x1402A1FB0 (MiRebuildLargeZeroPage.c)
 *     MiRestoreTransitionPte @ 0x1402A2DD0 (MiRestoreTransitionPte.c)
 *     CcIsThereDirtyLoggedPages @ 0x1402B19A0 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x1402B87C0 (CcWaitForUninitializeCacheMap.c)
 *     CcSetLogHandleForFileEx @ 0x1402B9FA0 (CcSetLogHandleForFileEx.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402BE19C (MmAdjustWorkingSetSizeEx.c)
 *     CcUpdateTimeOnLogHandles @ 0x1402C155C (CcUpdateTimeOnLogHandles.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1402C17C0 (MmQuerySystemWorkingSetInformation.c)
 *     MiUpdatePageAttributeStamp @ 0x1402C81D0 (MiUpdatePageAttributeStamp.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402D1734 (MiLockWorkingSetCoreExclusive.c)
 *     WmipNotificationIrpCancel @ 0x1402D1D80 (WmipNotificationIrpCancel.c)
 *     CcSetLoggedDataThreshold @ 0x1402D27A0 (CcSetLoggedDataThreshold.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402F2040 (KiAbEntryGetLockedHeadEntry.c)
 *     CcUninitializeCacheMap @ 0x1402F68B0 (CcUninitializeCacheMap.c)
 *     MiInsertLargePageChain @ 0x1402FE784 (MiInsertLargePageChain.c)
 *     MiInsertLargePageInNodeList @ 0x1402FEA50 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x1402FEEE0 (MiIncreaseAvailablePages.c)
 *     MiWakePageZeroing @ 0x1402FF128 (MiWakePageZeroing.c)
 *     MiLargePageFreeToZero @ 0x140303D40 (MiLargePageFreeToZero.c)
 *     MiDeleteProcessShadow @ 0x140305768 (MiDeleteProcessShadow.c)
 *     MiObtainSystemCacheView @ 0x140312500 (MiObtainSystemCacheView.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140325EC0 (MiInsertAndUnlockStandbyPages.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x140329470 (MiInsertProtectedStandbyPage.c)
 *     CcMapAndCopyInToCache @ 0x140331C70 (CcMapAndCopyInToCache.c)
 *     MiVolunteerForTrimFirst @ 0x140337230 (MiVolunteerForTrimFirst.c)
 *     MiDeletePagablePteRange @ 0x140337360 (MiDeletePagablePteRange.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14034FE80 (ExIsResourceAcquiredSharedLite.c)
 *     IopDecrementVpbRefCount @ 0x140354A90 (IopDecrementVpbRefCount.c)
 *     IoBoostThreadIoPriority @ 0x140358630 (IoBoostThreadIoPriority.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x14036AF08 (MiUpdateWorkingSetPrivateSize.c)
 *     MiPreUnlockWorkingSetShared @ 0x14036C210 (MiPreUnlockWorkingSetShared.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14037BDF0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiPurgeLargeZeroNodePages @ 0x140384AC8 (MiPurgeLargeZeroNodePages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385120 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorNodeLargePages @ 0x14038590C (MiMirrorNodeLargePages.c)
 *     MiLockMemoryLists @ 0x140388FD0 (MiLockMemoryLists.c)
 *     MiRebuildLargePages @ 0x14038D6C0 (MiRebuildLargePages.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14038E3A0 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x14038E5EC (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x14038E980 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceExclusive @ 0x14038ECD0 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038F0B0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038F380 (ExAcquireFastResourceShared.c)
 *     ExDisownFastResource @ 0x14038F720 (ExDisownFastResource.c)
 *     ExpReleaseFastResourceExclusive @ 0x14038FBC0 (ExpReleaseFastResourceExclusive.c)
 *     CcNotifyExternalCaches @ 0x140392524 (CcNotifyExternalCaches.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C65A8 (HalpDmaAcquireBufferMappings.c)
 *     IvtAllocateContextTable @ 0x1404DF350 (IvtAllocateContextTable.c)
 *     IvtAttachDeviceDomainInternal @ 0x1404DF5C8 (IvtAttachDeviceDomainInternal.c)
 *     IvtFlushTbInternal @ 0x1404DFAA4 (IvtFlushTbInternal.c)
 *     IvtIommuSendCommand @ 0x1404E0830 (IvtIommuSendCommand.c)
 *     IvtIommuWaitCommand @ 0x1404E0A30 (IvtIommuWaitCommand.c)
 *     HsaAttachDeviceDomainInternal @ 0x1404E24F8 (HsaAttachDeviceDomainInternal.c)
 *     HsaFlushTbInternal @ 0x1404E2DFC (HsaFlushTbInternal.c)
 *     HsaIommuSendCommand @ 0x1404E3D08 (HsaIommuSendCommand.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1404E4A94 (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     CcIncrementWriteBehindPriority @ 0x1404E9B2C (CcIncrementWriteBehindPriority.c)
 *     CcIsThereDirtyDataEx @ 0x1404EAA10 (CcIsThereDirtyDataEx.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB544 (CcUnmapInactiveViewsInternal.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1405160A0 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x140516130 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140516650 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     MiSetHugeRangePartitionId @ 0x1405339E0 (MiSetHugeRangePartitionId.c)
 *     MiPurgeBadFileOnlyPages @ 0x1405418F0 (MiPurgeBadFileOnlyPages.c)
 *     MiQueueExtentPfnDeletion @ 0x140541F6C (MiQueueExtentPfnDeletion.c)
 *     MiFreeModifiedReservations @ 0x140543724 (MiFreeModifiedReservations.c)
 *     MiGetEnclavePage @ 0x14054A6D8 (MiGetEnclavePage.c)
 *     MiFreeListPageContentsChanged @ 0x14054EE4C (MiFreeListPageContentsChanged.c)
 *     MiMoveBadPageCrossPartition @ 0x14054EFEC (MiMoveBadPageCrossPartition.c)
 *     MiSetPfnRemovalRequested @ 0x14054F428 (MiSetPfnRemovalRequested.c)
 *     MiUnlinkPageFromBadList @ 0x14054F540 (MiUnlinkPageFromBadList.c)
 *     MiNoPagesLastChance @ 0x1405507C8 (MiNoPagesLastChance.c)
 *     MiSwapNumaStandbyPage @ 0x1405513D0 (MiSwapNumaStandbyPage.c)
 *     MiGetSlabStandbyPage @ 0x1405530CC (MiGetSlabStandbyPage.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x1405B46B0 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1405B4A90 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KxAcquireQueuedSpinLock(__int64 a1, volatile __int64 *a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v6; // rdx
  __int64 result; // rax
  int v8; // eax
  bool v9; // zf

  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v8 = SchedulerAssist[6];
      v9 = v8 == -1;
      result = (unsigned int)(v8 + 1);
      SchedulerAssist[6] = result;
      if ( v9 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiAcquireQueuedSpinLockInstrumented(a1, a2);
  v6 = (_QWORD *)_InterlockedExchange64(a2, a1);
  if ( v6 )
    return KxWaitForLockOwnerShip(a1, v6);
  return result;
}
