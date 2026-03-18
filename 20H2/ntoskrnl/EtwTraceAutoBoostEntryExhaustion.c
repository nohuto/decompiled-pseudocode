/*
 * XREFs of EtwTraceAutoBoostEntryExhaustion @ 0x1403F74E8
 * Callers:
 *     ExTryAcquirePushLockSharedEx @ 0x140201870 (ExTryAcquirePushLockSharedEx.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x140208770 (ExTryAcquirePushLockExclusiveEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x140209A50 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlCheckOplockEx2 @ 0x14020C800 (FsRtlCheckOplockEx2.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x1402204A0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     FsRtlReleaseEofLock @ 0x1402404B0 (FsRtlReleaseEofLock.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x140240880 (ExAcquireAutoExpandPushLockShared.c)
 *     CcSetDirtyPinnedData @ 0x140241270 (CcSetDirtyPinnedData.c)
 *     PfLockSharedTryAcquire @ 0x14024452C (PfLockSharedTryAcquire.c)
 *     ExpDeleteTimer @ 0x140247950 (ExpDeleteTimer.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x1402565AC (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     NtCancelTimer @ 0x140288EC0 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x1402897E0 (ExpSetTimerObject.c)
 *     CcUnpinFileDataEx @ 0x14029D060 (CcUnpinFileDataEx.c)
 *     CcPinFileData @ 0x1402A2D80 (CcPinFileData.c)
 *     CcSetDirtyInMask @ 0x1402B96C0 (CcSetDirtyInMask.c)
 *     FsRtlAcquireEofLock @ 0x1402F4650 (FsRtlAcquireEofLock.c)
 *     MiLockAddressSpaceToo @ 0x14031B674 (MiLockAddressSpaceToo.c)
 *     FlushLookUpTableBucket @ 0x140375838 (FlushLookUpTableBucket.c)
 *     InsertEventEntryInLookUpTable @ 0x140375D50 (InsertEventEntryInLookUpTable.c)
 *     MiTryLockVad @ 0x140381868 (MiTryLockVad.c)
 *     ExpSaAllocatorAllocate @ 0x1403910FC (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14039156C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391918 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140393EE4 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x1403940EC (ExpSaPageGroupFreeMemory.c)
 *     IopProcessIoTracking @ 0x140506A2C (IopProcessIoTracking.c)
 *     MiProcessTransitionHeatBatch @ 0x14055E32C (MiProcessTransitionHeatBatch.c)
 *     ExGetWakeTimerList @ 0x1405B4718 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B5850 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x1405B64D0 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x1405B6900 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x1405B7444 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405B8A98 (ExpSaPageGroupDescriptorFree.c)
 *     WheaInitialize @ 0x140A61A3C (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A6DA34 (ExpWorkerInitialization.c)
 *     KiForceSymbolReferences @ 0x140A9478C (KiForceSymbolReferences.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1402339FC (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
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
