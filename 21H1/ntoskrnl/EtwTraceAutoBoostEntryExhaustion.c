/*
 * XREFs of EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844
 * Callers:
 *     CcSetDirtyPinnedData @ 0x14022FAB0 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x1402305D0 (CcUnpinFileDataEx.c)
 *     ExpDeleteTimer @ 0x140236430 (ExpDeleteTimer.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14023D27C (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     FsRtlCheckOplockEx2 @ 0x140254990 (FsRtlCheckOplockEx2.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140260440 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExpSetTimerObject @ 0x14026A470 (ExpSetTimerObject.c)
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     CcSetDirtyInMask @ 0x14027B2A0 (CcSetDirtyInMask.c)
 *     CcPinFileData @ 0x140286B20 (CcPinFileData.c)
 *     MiLockAddressSpaceToo @ 0x1402AB1C8 (MiLockAddressSpaceToo.c)
 *     PfLockSharedTryAcquire @ 0x1402D5808 (PfLockSharedTryAcquire.c)
 *     FsRtlAcquireEofLock @ 0x1402EAD60 (FsRtlAcquireEofLock.c)
 *     NtCancelTimer @ 0x14033ECF0 (NtCancelTimer.c)
 *     ExTryAcquirePushLockSharedEx @ 0x140340780 (ExTryAcquirePushLockSharedEx.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x140340DD0 (ExTryAcquirePushLockExclusiveEx.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1403597C0 (ExAcquireAutoExpandPushLockShared.c)
 *     FsRtlReleaseEofLock @ 0x14035AE20 (FsRtlReleaseEofLock.c)
 *     FlushLookUpTableBucket @ 0x140372368 (FlushLookUpTableBucket.c)
 *     InsertEventEntryInLookUpTable @ 0x140372880 (InsertEventEntryInLookUpTable.c)
 *     MiTryLockVad @ 0x14037F148 (MiTryLockVad.c)
 *     ExpSaAllocatorAllocate @ 0x14038E09C (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14038E50C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14038E8B8 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140390EB4 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x1403910BC (ExpSaPageGroupFreeMemory.c)
 *     IopProcessIoTracking @ 0x1405029CC (IopProcessIoTracking.c)
 *     MiProcessTransitionHeatBatch @ 0x14055A30C (MiProcessTransitionHeatBatch.c)
 *     ExGetWakeTimerList @ 0x1405B0498 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B15D0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x1405B2250 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x1405B2680 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x1405B31C4 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405B4818 (ExpSaPageGroupDescriptorFree.c)
 *     WheaInitialize @ 0x140A5B63C (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A66D84 (ExpWorkerInitialization.c)
 *     KiForceSymbolReferences @ 0x140A8F49C (KiForceSymbolReferences.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1402A8CA4 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void __fastcall EtwTraceAutoBoostEntryExhaustion(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+38h] [rbp-30h]
  int v6; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  v2 = *(_DWORD *)(a1 + 1152);
  v6 = 0;
  v3 = *(_QWORD *)(a1 + 544);
  v4 = a2;
  v5 = v2;
  v7 = &v4;
  v9 = 0;
  v8 = 16;
  EtwTraceSiloKernelEvent(*(_QWORD *)(v3 + 2160), (__int64)&v7, 1u, 0x20000200u, 0x544u, 0x501A02u);
}
