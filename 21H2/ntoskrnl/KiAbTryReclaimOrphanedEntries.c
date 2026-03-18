/*
 * XREFs of KiAbTryReclaimOrphanedEntries @ 0x14029F6A8
 * Callers:
 *     FsRtlLookupPerFileObjectContext @ 0x14021C390 (FsRtlLookupPerFileObjectContext.c)
 *     ExTryAcquirePushLockSharedEx @ 0x140220540 (ExTryAcquirePushLockSharedEx.c)
 *     MiTryLockVad @ 0x140259A00 (MiTryLockVad.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     CcUnpinFileDataEx @ 0x14028A370 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x14029D3D0 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14029D860 (CcSetDirtyInMask.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14029EDB0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x14029EFF0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14029FB3C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaAllocatorAllocate @ 0x14029FDC4 (ExpSaAllocatorAllocate.c)
 *     InsertEventEntryInLookUpTable @ 0x1402A1AEC (InsertEventEntryInLookUpTable.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1402AE630 (FsRtlLookupPerStreamContextInternal.c)
 *     MiCoalesceFreePages @ 0x1402C7DF0 (MiCoalesceFreePages.c)
 *     ExpSetTimerObject @ 0x1402E33D0 (ExpSetTimerObject.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x1402F62C0 (ExTryAcquirePushLockExclusiveEx.c)
 *     FsRtlInsertPerStreamContext @ 0x1402F8CF0 (FsRtlInsertPerStreamContext.c)
 *     MiLockAddressSpaceToo @ 0x140310450 (MiLockAddressSpaceToo.c)
 *     CcPinFileData @ 0x14032AD00 (CcPinFileData.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExpDeleteTimer @ 0x140356E00 (ExpDeleteTimer.c)
 *     NtCancelTimer @ 0x140356F50 (NtCancelTimer.c)
 *     FsRtlReleaseEofLock @ 0x140358CC0 (FsRtlReleaseEofLock.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x140359B80 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     FsRtlAcquireEofLock @ 0x14035D230 (FsRtlAcquireEofLock.c)
 *     PfLockSharedTryAcquire @ 0x140360258 (PfLockSharedTryAcquire.c)
 *     ExpSaAllocatorFree @ 0x140360FD4 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x140361290 (ExpSaPageGroupFreeMemory.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14037CE7C (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     FlushLookUpTableBucket @ 0x140386944 (FlushLookUpTableBucket.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1403A0424 (ExpSaPageGroupDescriptorFree.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403A61E8 (ExpSaPageGroupDescriptorAllocate.c)
 *     IopProcessIoTracking @ 0x140559C3C (IopProcessIoTracking.c)
 *     MiProcessTransitionHeatBatch @ 0x1405B7EB4 (MiProcessTransitionHeatBatch.c)
 *     ExGetWakeTimerList @ 0x14063DABC (ExGetWakeTimerList.c)
 *     ExInitializeDeviceAts @ 0x14063E8C0 (ExInitializeDeviceAts.c)
 *     ExUninitializeDeviceAts @ 0x14063EC3C (ExUninitializeDeviceAts.c)
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x140640500 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x140640800 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x140641354 (ExpSvmDereferenceDevice.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x140643104 (WheaSelLogSetNtSchedulerAvailability.c)
 *     WheaInitialize @ 0x140AFF910 (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140B240EC (ExpWorkerInitialization.c)
 *     KiForceSymbolReferences @ 0x140B50C78 (KiForceSymbolReferences.c)
 * Callees:
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14062D4BC (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 __fastcall KiAbTryReclaimOrphanedEntries(__int64 a1, __int64 a2)
{
  char v4; // dl

  if ( *(_BYTE *)(a2 + 870) )
  {
    v4 = *(_BYTE *)(a2 + 870);
    *(_BYTE *)(a2 + 870) = 0;
    return (unsigned int)v4;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 120) & 0x10000) == 0 )
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0x10u);
    _enable();
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceAutoBoostEntryExhaustion(a2, a1);
    return 0LL;
  }
}
