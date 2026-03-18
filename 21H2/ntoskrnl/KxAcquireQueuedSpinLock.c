/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x1403119F0
 * Callers:
 *     MmEnforceWorkingSetLimit @ 0x1402091B0 (MmEnforceWorkingSetLimit.c)
 *     MiRemoveWsleList @ 0x140218310 (MiRemoveWsleList.c)
 *     CcIsThereDirtyLoggedPages @ 0x14023A5E0 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x14023AFD8 (CcWaitForUninitializeCacheMap.c)
 *     CcSetLogHandleForFileEx @ 0x140241350 (CcSetLogHandleForFileEx.c)
 *     CcUpdateTimeOnLogHandles @ 0x1402492E0 (CcUpdateTimeOnLogHandles.c)
 *     WmipNotificationIrpCancel @ 0x140252E20 (WmipNotificationIrpCancel.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140257B30 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     CcUninitializeCacheMap @ 0x1402761B0 (CcUninitializeCacheMap.c)
 *     MiDeleteProcessShadow @ 0x14027D408 (MiDeleteProcessShadow.c)
 *     MiAttachThreadDone @ 0x14027D8DC (MiAttachThreadDone.c)
 *     IoBoostThreadIoPriority @ 0x140280754 (IoBoostThreadIoPriority.c)
 *     CcFlushCachePriv @ 0x140283030 (CcFlushCachePriv.c)
 *     MiObtainSystemCacheView @ 0x140286210 (MiObtainSystemCacheView.c)
 *     MiReleaseSystemCacheView @ 0x1402864A0 (MiReleaseSystemCacheView.c)
 *     KeStartThread @ 0x140292350 (KeStartThread.c)
 *     CcMapAndCopyInToCache @ 0x1402BD970 (CcMapAndCopyInToCache.c)
 *     MiInsertLargePageInNodeList @ 0x1402BEEA0 (MiInsertLargePageInNodeList.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeTerminateThread @ 0x1402F00BC (KeTerminateThread.c)
 *     IoGetAttachedDeviceReference @ 0x1403109B0 (IoGetAttachedDeviceReference.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiAddWorkingSetEntries @ 0x1403234A0 (MiAddWorkingSetEntries.c)
 *     MiVolunteerForTrimFirst @ 0x1403335A0 (MiVolunteerForTrimFirst.c)
 *     MiIncreaseAvailablePages @ 0x140338BF0 (MiIncreaseAvailablePages.c)
 *     MiRestoreTransitionPte @ 0x14033FAA4 (MiRestoreTransitionPte.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14034F230 (KiAbEntryGetLockedHeadEntry.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14036B680 (ExIsResourceAcquiredSharedLite.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14036D62C (MmAdjustWorkingSetSizeEx.c)
 *     CcIncrementWriteBehindPriority @ 0x140376BFC (CcIncrementWriteBehindPriority.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x140376DF0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     CcSetLoggedDataThreshold @ 0x1403891F0 (CcSetLoggedDataThreshold.c)
 *     ExAcquireFastResourceShared @ 0x14039B6B0 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14039BA90 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14039BDE0 (ExAcquireFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x14039C100 (ExDisownFastResource.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14039C944 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x14039CBAC (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x14039D010 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x14039D3E4 (ExpReleaseFastResourceExclusive.c)
 *     CcNotifyExternalCachesInternal @ 0x14039ED00 (CcNotifyExternalCachesInternal.c)
 *     HalpDmaAcquireBufferMappings @ 0x140456CC6 (HalpDmaAcquireBufferMappings.c)
 *     IvtAllocateContextTable @ 0x14052D9E0 (IvtAllocateContextTable.c)
 *     IvtAllocateScalableModePasidTables @ 0x14052DC38 (IvtAllocateScalableModePasidTables.c)
 *     IvtAttachDeviceDomainInternal @ 0x14052DF88 (IvtAttachDeviceDomainInternal.c)
 *     IvtFlushTbInternal @ 0x14052E568 (IvtFlushTbInternal.c)
 *     IvtFreeScalableModePasidTables @ 0x14052E768 (IvtFreeScalableModePasidTables.c)
 *     IvtIommuSendCommand @ 0x14052F378 (IvtIommuSendCommand.c)
 *     IvtIommuWaitCommand @ 0x14052F618 (IvtIommuWaitCommand.c)
 *     HsaAttachDeviceDomainInternal @ 0x1405311A8 (HsaAttachDeviceDomainInternal.c)
 *     HsaFlushTbInternal @ 0x140531A6C (HsaFlushTbInternal.c)
 *     HsaIommuSendCommand @ 0x140532A28 (HsaIommuSendCommand.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1405336FC (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     CcIsThereDirtyDataEx @ 0x14053A990 (CcIsThereDirtyDataEx.c)
 *     CcUnmapInactiveViewsInternal @ 0x14053B55C (CcUnmapInactiveViewsInternal.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x14056E3D0 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x14056E460 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 *     DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper @ 0x140611F10 (DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x14063CB30 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14063CF10 (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
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
