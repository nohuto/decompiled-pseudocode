/*
 * XREFs of EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348
 * Callers:
 *     ExTryAcquirePushLockSharedEx @ 0x140207ED0 (ExTryAcquirePushLockSharedEx.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14020C3D0 (ExAcquireAutoExpandPushLockShared.c)
 *     FsRtlAcquireEofLock @ 0x14020E760 (FsRtlAcquireEofLock.c)
 *     MiLockAddressSpaceToo @ 0x14023BDD0 (MiLockAddressSpaceToo.c)
 *     PfLockSharedTryAcquire @ 0x14027378C (PfLockSharedTryAcquire.c)
 *     ExpDeleteTimer @ 0x140281910 (ExpDeleteTimer.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14028A0AC (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x1402A9D70 (ExTryAcquirePushLockExclusiveEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     NtCancelTimer @ 0x1402ED350 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x1402EDC70 (ExpSetTimerObject.c)
 *     FsRtlReleaseEofLock @ 0x1402F99D0 (FsRtlReleaseEofLock.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x140304060 (CcSetDirtyPinnedData.c)
 *     CcPinFileData @ 0x14032A380 (CcPinFileData.c)
 *     CcSetDirtyInMask @ 0x1403411C0 (CcSetDirtyInMask.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140355140 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     FsRtlCheckOplockEx2 @ 0x14035EA70 (FsRtlCheckOplockEx2.c)
 *     FlushLookUpTableBucket @ 0x140375598 (FlushLookUpTableBucket.c)
 *     InsertEventEntryInLookUpTable @ 0x140375AB0 (InsertEventEntryInLookUpTable.c)
 *     MiTryLockVad @ 0x140381AB8 (MiTryLockVad.c)
 *     ExpSaAllocatorAllocate @ 0x14039171C (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x140391B8C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391F38 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x1403944A4 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x1403946AC (ExpSaPageGroupFreeMemory.c)
 *     IopProcessIoTracking @ 0x1405084DC (IopProcessIoTracking.c)
 *     MiProcessTransitionHeatBatch @ 0x14056003C (MiProcessTransitionHeatBatch.c)
 *     ExGetWakeTimerList @ 0x1405B6378 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B74B0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x1405B8130 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x1405B8560 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x1405B90A4 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405BA70C (ExpSaPageGroupDescriptorFree.c)
 *     WheaInitialize @ 0x140A6405C (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A6BE74 (ExpWorkerInitialization.c)
 *     KiForceSymbolReferences @ 0x140A925EC (KiForceSymbolReferences.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14027BDBC (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAutoBoostEntryExhaustion(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  v2 = *(_DWORD *)(a1 + 1152);
  v7 = 0;
  v3 = *(_QWORD *)(a1 + 544);
  v5 = a2;
  v6 = v2;
  v8 = &v5;
  v10 = 0;
  v9 = 16;
  return EtwTraceSiloKernelEvent(*(_QWORD *)(v3 + 2160), (int)&v8, 1, 0x20000200u, 1348, 5249538);
}
