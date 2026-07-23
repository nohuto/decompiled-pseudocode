/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x14035B6C0
 * Callers:
 *     MiRemoveWsleList @ 0x14020BD70 (MiRemoveWsleList.c)
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     MiTryUnlinkNodeLargePage @ 0x14020F8CC (MiTryUnlinkNodeLargePage.c)
 *     MiGetPerfectColorHeadPage @ 0x140215F28 (MiGetPerfectColorHeadPage.c)
 *     MiRebuildLargeZeroPage @ 0x14021F3F0 (MiRebuildLargeZeroPage.c)
 *     MiRestoreTransitionPte @ 0x140220210 (MiRestoreTransitionPte.c)
 *     CcIsThereDirtyLoggedPages @ 0x14022FB50 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x1402369D0 (CcWaitForUninitializeCacheMap.c)
 *     CcSetLogHandleForFileEx @ 0x1402381B0 (CcSetLogHandleForFileEx.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14023C7DC (MmAdjustWorkingSetSizeEx.c)
 *     CcUpdateTimeOnLogHandles @ 0x14023F9FC (CcUpdateTimeOnLogHandles.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14023FC60 (MmQuerySystemWorkingSetInformation.c)
 *     MiUpdatePageAttributeStamp @ 0x140246A30 (MiUpdatePageAttributeStamp.c)
 *     MiLockWorkingSetCoreExclusive @ 0x14024FB54 (MiLockWorkingSetCoreExclusive.c)
 *     WmipNotificationIrpCancel @ 0x140250150 (WmipNotificationIrpCancel.c)
 *     CcSetLoggedDataThreshold @ 0x140250B90 (CcSetLoggedDataThreshold.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140257660 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReplaceTransitionPage @ 0x14025B310 (MiReplaceTransitionPage.c)
 *     MiEmptyDecayClusterTimers @ 0x14025FDA0 (MiEmptyDecayClusterTimers.c)
 *     MiSignalLargePageRebuild @ 0x140260F80 (MiSignalLargePageRebuild.c)
 *     KeStartThread @ 0x140265A0C (KeStartThread.c)
 *     KeTerminateThread @ 0x140266490 (KeTerminateThread.c)
 *     MiDrainSystemAccessLog @ 0x14027D0F0 (MiDrainSystemAccessLog.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     IoGetAttachedDeviceReference @ 0x1402D1260 (IoGetAttachedDeviceReference.c)
 *     CcFlushCachePriv @ 0x1402D13F0 (CcFlushCachePriv.c)
 *     CcInitializeCacheMapEx @ 0x1402D2E10 (CcInitializeCacheMapEx.c)
 *     ExpApplyPriorityBoost @ 0x1402D3850 (ExpApplyPriorityBoost.c)
 *     MiZeroLargePages @ 0x1402D6D70 (MiZeroLargePages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCoalesceFreePages @ 0x1402DA4F0 (MiCoalesceFreePages.c)
 *     MiDeleteBatch @ 0x1402DCCA0 (MiDeleteBatch.c)
 *     MmEnforceWorkingSetLimit @ 0x1402F69E8 (MmEnforceWorkingSetLimit.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402FCD90 (KiAbEntryGetLockedHeadEntry.c)
 *     CcUninitializeCacheMap @ 0x140301600 (CcUninitializeCacheMap.c)
 *     MiInsertLargePageChain @ 0x1403094D4 (MiInsertLargePageChain.c)
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x140309C30 (MiIncreaseAvailablePages.c)
 *     MiWakePageZeroing @ 0x140309E78 (MiWakePageZeroing.c)
 *     MiLargePageFreeToZero @ 0x14030EA90 (MiLargePageFreeToZero.c)
 *     MiDeleteProcessShadow @ 0x1403104B8 (MiDeleteProcessShadow.c)
 *     MiObtainSystemCacheView @ 0x14031D250 (MiObtainSystemCacheView.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140330C10 (MiInsertAndUnlockStandbyPages.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x1403341C0 (MiInsertProtectedStandbyPage.c)
 *     CcMapAndCopyInToCache @ 0x14033C9C0 (CcMapAndCopyInToCache.c)
 *     MiVolunteerForTrimFirst @ 0x140341F80 (MiVolunteerForTrimFirst.c)
 *     MiDeletePagablePteRange @ 0x1403420B0 (MiDeletePagablePteRange.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 *     IopDecrementVpbRefCount @ 0x14035F7E0 (IopDecrementVpbRefCount.c)
 *     IoBoostThreadIoPriority @ 0x140363380 (IoBoostThreadIoPriority.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x14036B0B8 (MiUpdateWorkingSetPrivateSize.c)
 *     MiPreUnlockWorkingSetShared @ 0x14036C3C0 (MiPreUnlockWorkingSetShared.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14037B940 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiPurgeLargeZeroNodePages @ 0x140384C18 (MiPurgeLargeZeroNodePages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385270 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorNodeLargePages @ 0x140385A5C (MiMirrorNodeLargePages.c)
 *     MiLockMemoryLists @ 0x140389120 (MiLockMemoryLists.c)
 *     MiRebuildLargePages @ 0x14038D810 (MiRebuildLargePages.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14038E4F0 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x14038E73C (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x14038EAD0 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceExclusive @ 0x14038EE20 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038F200 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038F4D0 (ExAcquireFastResourceShared.c)
 *     ExDisownFastResource @ 0x14038F870 (ExDisownFastResource.c)
 *     ExpReleaseFastResourceExclusive @ 0x14038FD10 (ExpReleaseFastResourceExclusive.c)
 *     CcNotifyExternalCaches @ 0x140392674 (CcNotifyExternalCaches.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C67E8 (HalpDmaAcquireBufferMappings.c)
 *     IvtAllocateContextTable @ 0x1404DF590 (IvtAllocateContextTable.c)
 *     IvtAttachDeviceDomainInternal @ 0x1404DF808 (IvtAttachDeviceDomainInternal.c)
 *     IvtFlushTbInternal @ 0x1404DFCE4 (IvtFlushTbInternal.c)
 *     IvtIommuSendCommand @ 0x1404E0A70 (IvtIommuSendCommand.c)
 *     IvtIommuWaitCommand @ 0x1404E0C70 (IvtIommuWaitCommand.c)
 *     HsaAttachDeviceDomainInternal @ 0x1404E2738 (HsaAttachDeviceDomainInternal.c)
 *     HsaFlushTbInternal @ 0x1404E303C (HsaFlushTbInternal.c)
 *     HsaIommuSendCommand @ 0x1404E3F48 (HsaIommuSendCommand.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1404E4CD4 (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     CcIncrementWriteBehindPriority @ 0x1404E9D6C (CcIncrementWriteBehindPriority.c)
 *     CcIsThereDirtyDataEx @ 0x1404EAC50 (CcIsThereDirtyDataEx.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB784 (CcUnmapInactiveViewsInternal.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1405162E0 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x140516370 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140516890 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     MiSetHugeRangePartitionId @ 0x140533C20 (MiSetHugeRangePartitionId.c)
 *     MiPurgeBadFileOnlyPages @ 0x140541B30 (MiPurgeBadFileOnlyPages.c)
 *     MiQueueExtentPfnDeletion @ 0x1405421AC (MiQueueExtentPfnDeletion.c)
 *     MiFreeModifiedReservations @ 0x140543964 (MiFreeModifiedReservations.c)
 *     MiGetEnclavePage @ 0x14054A918 (MiGetEnclavePage.c)
 *     MiFreeListPageContentsChanged @ 0x14054F08C (MiFreeListPageContentsChanged.c)
 *     MiMoveBadPageCrossPartition @ 0x14054F22C (MiMoveBadPageCrossPartition.c)
 *     MiSetPfnRemovalRequested @ 0x14054F668 (MiSetPfnRemovalRequested.c)
 *     MiUnlinkPageFromBadList @ 0x14054F780 (MiUnlinkPageFromBadList.c)
 *     MiNoPagesLastChance @ 0x140550A08 (MiNoPagesLastChance.c)
 *     MiSwapNumaStandbyPage @ 0x140551610 (MiSwapNumaStandbyPage.c)
 *     MiGetSlabStandbyPage @ 0x14055330C (MiGetSlabStandbyPage.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x1405B48E0 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1405B4CC0 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
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
