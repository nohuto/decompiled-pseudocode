/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x140208000
 * Callers:
 *     ExIsResourceAcquiredSharedLite @ 0x1402090D0 (ExIsResourceAcquiredSharedLite.c)
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiObtainSystemCacheView @ 0x140226830 (MiObtainSystemCacheView.c)
 *     CcFlushCachePriv @ 0x14022C120 (CcFlushCachePriv.c)
 *     CcInitializeCacheMapEx @ 0x14022D790 (CcInitializeCacheMapEx.c)
 *     CcUninitializeCacheMap @ 0x140231350 (CcUninitializeCacheMap.c)
 *     MiEmptyDecayClusterTimers @ 0x14023F05C (MiEmptyDecayClusterTimers.c)
 *     ExpApplyPriorityBoost @ 0x1402468E0 (ExpApplyPriorityBoost.c)
 *     IopDecrementVpbRefCount @ 0x140255700 (IopDecrementVpbRefCount.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140269870 (KiAbEntryGetLockedHeadEntry.c)
 *     CcMapAndCopyInToCache @ 0x14027BC80 (CcMapAndCopyInToCache.c)
 *     IoGetAttachedDeviceReference @ 0x14027D520 (IoGetAttachedDeviceReference.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14028D680 (MiInsertAndUnlockStandbyPages.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MiZeroLargePages @ 0x1402946C0 (MiZeroLargePages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCoalesceFreePages @ 0x140297E40 (MiCoalesceFreePages.c)
 *     MiDeleteBatch @ 0x14029A5F0 (MiDeleteBatch.c)
 *     MiDeletePagablePteRange @ 0x14029B4A0 (MiDeletePagablePteRange.c)
 *     MiVolunteerForTrimFirst @ 0x14029EC70 (MiVolunteerForTrimFirst.c)
 *     MiDrainSystemAccessLog @ 0x1402A4C10 (MiDrainSystemAccessLog.c)
 *     MiDeleteProcessShadow @ 0x1402AD198 (MiDeleteProcessShadow.c)
 *     MmEnforceWorkingSetLimit @ 0x1402D8388 (MmEnforceWorkingSetLimit.c)
 *     MiInsertProtectedStandbyPage @ 0x1402D9CF0 (MiInsertProtectedStandbyPage.c)
 *     IoBoostThreadIoPriority @ 0x1402E33DC (IoBoostThreadIoPriority.c)
 *     MiRemoveWsleList @ 0x1402E8870 (MiRemoveWsleList.c)
 *     MiGetPerfectColorHeadPage @ 0x1402EA0F8 (MiGetPerfectColorHeadPage.c)
 *     MiRebuildLargeZeroPage @ 0x1402F4D70 (MiRebuildLargeZeroPage.c)
 *     CcIsThereDirtyLoggedPages @ 0x1403031B0 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x1403065D4 (CcWaitForUninitializeCacheMap.c)
 *     CcSetLogHandleForFileEx @ 0x140308280 (CcSetLogHandleForFileEx.c)
 *     MiPreUnlockWorkingSetShared @ 0x14030C55C (MiPreUnlockWorkingSetShared.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14030E744 (MmAdjustWorkingSetSizeEx.c)
 *     CcUpdateTimeOnLogHandles @ 0x1403119C8 (CcUpdateTimeOnLogHandles.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140311CD0 (MmQuerySystemWorkingSetInformation.c)
 *     MiTryUnlinkNodeLargePage @ 0x140316270 (MiTryUnlinkNodeLargePage.c)
 *     MiUpdatePageAttributeStamp @ 0x140318BB8 (MiUpdatePageAttributeStamp.c)
 *     WmipNotificationIrpCancel @ 0x140321560 (WmipNotificationIrpCancel.c)
 *     CcSetLoggedDataThreshold @ 0x140321F40 (CcSetLoggedDataThreshold.c)
 *     KeStartThread @ 0x14032FE98 (KeStartThread.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     MiInsertLargePageChain @ 0x140345BE8 (MiInsertLargePageChain.c)
 *     MiInsertLargePageInNodeList @ 0x140345EC0 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x140346350 (MiIncreaseAvailablePages.c)
 *     MiWakePageZeroing @ 0x140346598 (MiWakePageZeroing.c)
 *     MiLargePageFreeToZero @ 0x1403493F0 (MiLargePageFreeToZero.c)
 *     MiReplaceTransitionPage @ 0x14034B1EC (MiReplaceTransitionPage.c)
 *     MiSignalLargePageRebuild @ 0x140350180 (MiSignalLargePageRebuild.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403524CC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRestoreTransitionPte @ 0x140352BF0 (MiRestoreTransitionPte.c)
 *     KeTerminateThread @ 0x140355A18 (KeTerminateThread.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1403682B8 (MiUpdateWorkingSetPrivateSize.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x1403790B0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiPurgeLargeZeroNodePages @ 0x1403817C8 (MiPurgeLargeZeroNodePages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140381E20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorNodeLargePages @ 0x14038260C (MiMirrorNodeLargePages.c)
 *     MiLockMemoryLists @ 0x140385760 (MiLockMemoryLists.c)
 *     MiRebuildLargePages @ 0x140389C30 (MiRebuildLargePages.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14038AE00 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x14038B04C (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x14038B3E0 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceExclusive @ 0x14038B730 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038BB10 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038BE10 (ExAcquireFastResourceShared.c)
 *     ExDisownFastResource @ 0x14038C1F0 (ExDisownFastResource.c)
 *     ExpReleaseFastResourceExclusive @ 0x14038C690 (ExpReleaseFastResourceExclusive.c)
 *     CcNotifyExternalCaches @ 0x14038F084 (CcNotifyExternalCaches.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C1248 (HalpDmaAcquireBufferMappings.c)
 *     IvtAllocateContextTable @ 0x1404D9EA0 (IvtAllocateContextTable.c)
 *     IvtAttachDeviceDomainInternal @ 0x1404DA118 (IvtAttachDeviceDomainInternal.c)
 *     IvtFlushTbInternal @ 0x1404DA5F4 (IvtFlushTbInternal.c)
 *     IvtIommuSendCommand @ 0x1404DB380 (IvtIommuSendCommand.c)
 *     IvtIommuWaitCommand @ 0x1404DB580 (IvtIommuWaitCommand.c)
 *     HsaAttachDeviceDomainInternal @ 0x1404DCEE8 (HsaAttachDeviceDomainInternal.c)
 *     HsaFlushTbInternal @ 0x1404DD7BC (HsaFlushTbInternal.c)
 *     HsaIommuSendCommand @ 0x1404DE738 (HsaIommuSendCommand.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1404DF414 (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     CcIncrementWriteBehindPriority @ 0x1404E445C (CcIncrementWriteBehindPriority.c)
 *     CcIsThereDirtyDataEx @ 0x1404E5340 (CcIsThereDirtyDataEx.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E5E74 (CcUnmapInactiveViewsInternal.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1405105E0 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x140510670 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140510B90 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     MiSetHugeRangePartitionId @ 0x14052DEC0 (MiSetHugeRangePartitionId.c)
 *     MiPurgeBadFileOnlyPages @ 0x14053BDD0 (MiPurgeBadFileOnlyPages.c)
 *     MiQueueExtentPfnDeletion @ 0x14053C44C (MiQueueExtentPfnDeletion.c)
 *     MiFreeModifiedReservations @ 0x14053DC04 (MiFreeModifiedReservations.c)
 *     MiGetEnclavePage @ 0x140544BB8 (MiGetEnclavePage.c)
 *     MiFreeListPageContentsChanged @ 0x14054932C (MiFreeListPageContentsChanged.c)
 *     MiMoveBadPageCrossPartition @ 0x1405494CC (MiMoveBadPageCrossPartition.c)
 *     MiSetPfnRemovalRequested @ 0x140549908 (MiSetPfnRemovalRequested.c)
 *     MiUnlinkPageFromBadList @ 0x140549A20 (MiUnlinkPageFromBadList.c)
 *     MiLockWorkingSetCoreExclusive @ 0x140549C90 (MiLockWorkingSetCoreExclusive.c)
 *     MiNoPagesLastChance @ 0x14054ACD8 (MiNoPagesLastChance.c)
 *     MiSwapNumaStandbyPage @ 0x14054B8E0 (MiSwapNumaStandbyPage.c)
 *     MiGetSlabStandbyPage @ 0x14054D5DC (MiGetSlabStandbyPage.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x1405AEA30 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1405AEE10 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
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
