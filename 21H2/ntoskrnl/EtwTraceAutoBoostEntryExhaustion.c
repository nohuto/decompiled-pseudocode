/*
 * XREFs of EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C
 * Callers:
 *     ExTryAcquirePushLockExclusiveEx @ 0x140205430 (ExTryAcquirePushLockExclusiveEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402067E0 (ExAcquireFastMutexUnsafe.c)
 *     NtCancelTimer @ 0x140248B00 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x140249420 (ExpSetTimerObject.c)
 *     ExpDeleteTimer @ 0x1402601A0 (ExpDeleteTimer.c)
 *     ExTryAcquirePushLockSharedEx @ 0x14028AD30 (ExTryAcquirePushLockSharedEx.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14028F230 (ExAcquireAutoExpandPushLockShared.c)
 *     FsRtlAcquireEofLock @ 0x1402907F0 (FsRtlAcquireEofLock.c)
 *     MiLockAddressSpaceToo @ 0x1402BD720 (MiLockAddressSpaceToo.c)
 *     PfLockSharedTryAcquire @ 0x1402D4AAC (PfLockSharedTryAcquire.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x1402D8D5C (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     FsRtlReleaseEofLock @ 0x1402EEC80 (FsRtlReleaseEofLock.c)
 *     CcUnpinFileDataEx @ 0x1402F4630 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1402F9310 (CcSetDirtyPinnedData.c)
 *     CcPinFileData @ 0x14031F630 (CcPinFileData.c)
 *     CcSetDirtyInMask @ 0x140336470 (CcSetDirtyInMask.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x14034A230 (KeAbPreAcquire.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x14034A3F0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     FsRtlCheckOplockEx2 @ 0x140353D20 (FsRtlCheckOplockEx2.c)
 *     FlushLookUpTableBucket @ 0x140375A48 (FlushLookUpTableBucket.c)
 *     InsertEventEntryInLookUpTable @ 0x140375F60 (InsertEventEntryInLookUpTable.c)
 *     MiTryLockVad @ 0x140381F68 (MiTryLockVad.c)
 *     ExpSaAllocatorAllocate @ 0x1403915CC (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x140391A3C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391DE8 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140394354 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x14039455C (ExpSaPageGroupFreeMemory.c)
 *     IopProcessIoTracking @ 0x14050855C (IopProcessIoTracking.c)
 *     MiProcessTransitionHeatBatch @ 0x14055FDFC (MiProcessTransitionHeatBatch.c)
 *     ExGetWakeTimerList @ 0x1405B6148 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B7280 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x1405B7F00 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x1405B8330 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x1405B8E74 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405BA4DC (ExpSaPageGroupDescriptorFree.c)
 *     WheaInitialize @ 0x140A6305C (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A6AE74 (ExpWorkerInitialization.c)
 *     KiForceSymbolReferences @ 0x140A915EC (KiForceSymbolReferences.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14025A84C (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
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
