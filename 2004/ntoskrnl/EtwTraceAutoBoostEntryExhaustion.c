/*
 * XREFs of EtwTraceAutoBoostEntryExhaustion @ 0x1403F2AD4
 * Callers:
 *     ExAcquireFastMutexUnsafe @ 0x140202D60 (ExAcquireFastMutexUnsafe.c)
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140207520 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExpSetTimerObject @ 0x140211420 (ExpSetTimerObject.c)
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     CcSetDirtyInMask @ 0x140222250 (CcSetDirtyInMask.c)
 *     CcPinFileData @ 0x14022DAD0 (CcPinFileData.c)
 *     MiLockAddressSpaceToo @ 0x140252198 (MiLockAddressSpaceToo.c)
 *     PfLockSharedTryAcquire @ 0x14026BE68 (PfLockSharedTryAcquire.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x140272C60 (ExTryAcquirePushLockExclusiveEx.c)
 *     FsRtlReleaseEofLock @ 0x140273750 (FsRtlReleaseEofLock.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x140273B20 (ExAcquireAutoExpandPushLockShared.c)
 *     FsRtlCheckOplockEx2 @ 0x140291210 (FsRtlCheckOplockEx2.c)
 *     CcSetDirtyPinnedData @ 0x1402C28E0 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 *     ExpDeleteTimer @ 0x1402C9260 (ExpDeleteTimer.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x1402D00AC (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     NtCancelTimer @ 0x1402FFD50 (NtCancelTimer.c)
 *     ExTryAcquirePushLockSharedEx @ 0x140323D90 (ExTryAcquirePushLockSharedEx.c)
 *     FsRtlAcquireEofLock @ 0x140324690 (FsRtlAcquireEofLock.c)
 *     FlushLookUpTableBucket @ 0x140373178 (FlushLookUpTableBucket.c)
 *     InsertEventEntryInLookUpTable @ 0x140373690 (InsertEventEntryInLookUpTable.c)
 *     MiTryLockVad @ 0x14037FAB4 (MiTryLockVad.c)
 *     ExpSaAllocatorAllocate @ 0x14038EC0C (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14038F07C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14038F428 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140391A24 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x140391C2C (ExpSaPageGroupFreeMemory.c)
 *     IopProcessIoTracking @ 0x14050301C (IopProcessIoTracking.c)
 *     MiProcessTransitionHeatBatch @ 0x14055A95C (MiProcessTransitionHeatBatch.c)
 *     ExGetWakeTimerList @ 0x1405B0BB8 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B1CF0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x1405B2970 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x1405B2DA0 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x1405B38E4 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405B4F38 (ExpSaPageGroupDescriptorFree.c)
 *     WheaInitialize @ 0x140A5A6DC (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A66764 (ExpWorkerInitialization.c)
 *     KiForceSymbolReferences @ 0x140A8EA8C (KiForceSymbolReferences.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14024FC74 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
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
