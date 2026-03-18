/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x14026E044
 * Callers:
 *     FsRtlInitializeBaseMcbEx @ 0x14026DFE0 (FsRtlInitializeBaseMcbEx.c)
 *     FsRtlInitializeLargeMcb @ 0x14026E1C0 (FsRtlInitializeLargeMcb.c)
 *     CcAllocateVacbLevels @ 0x14026E224 (CcAllocateVacbLevels.c)
 *     LZNT1DecompressChunkNewThread @ 0x14026E2C8 (LZNT1DecompressChunkNewThread.c)
 *     IoSetOplockPrivateFoExt @ 0x140297828 (IoSetOplockPrivateFoExt.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402D5E48 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateLock @ 0x1402D6BF0 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x1402D7B14 (FsRtlPrivateInsertLock.c)
 *     FsRtlTruncateBaseMcb @ 0x14032C300 (FsRtlTruncateBaseMcb.c)
 *     FsRtlSplitLocks @ 0x1403308E8 (FsRtlSplitLocks.c)
 *     FsRtlPrivateInitializeFileLock @ 0x14035D078 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlAllocateFileLock @ 0x14035E7F0 (FsRtlAllocateFileLock.c)
 *     PopAllocateIrp @ 0x14036CD00 (PopAllocateIrp.c)
 *     WmipAllocRegEntry @ 0x14036EA64 (WmipAllocRegEntry.c)
 *     VfAvlReserveNode @ 0x14036F860 (VfAvlReserveNode.c)
 *     IoSetOplockKeyContext @ 0x14038E484 (IoSetOplockKeyContext.c)
 *     PopCreateDynamicIrpWorker @ 0x1403A2440 (PopCreateDynamicIrpWorker.c)
 *     MiAddMdlTracker @ 0x14052B384 (MiAddMdlTracker.c)
 *     AlpcInitializeHandleTable @ 0x14062C0B4 (AlpcInitializeHandleTable.c)
 *     AlpcpInitializePort @ 0x14062C108 (AlpcpInitializePort.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14062F3D0 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     ObWaitForMultipleObjects @ 0x14066F900 (ObWaitForMultipleObjects.c)
 *     AlpcpAllocateBlob @ 0x14068A024 (AlpcpAllocateBlob.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1406DB030 (FsRtlAddToTunnelCacheEx.c)
 *     WmipAllocEntry @ 0x140742710 (WmipAllocEntry.c)
 *     RtlpCopyRangeListEntry @ 0x14074E020 (RtlpCopyRangeListEntry.c)
 *     RtlpCreateRangeListEntry @ 0x140751560 (RtlpCreateRangeListEntry.c)
 *     ViAllocateContextTable @ 0x1409C5464 (ViAllocateContextTable.c)
 *     ViIoCallbackSnapState @ 0x1409C6B74 (ViIoCallbackSnapState.c)
 *     VfAllocateAdapterChannel @ 0x1409C75B0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409C7800 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x1409C7FF0 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x1409C90E0 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x1409CE4A0 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x1409DBB28 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x1409DC7A0 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdBeforeCallDriver @ 0x1409DDD38 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x1409DE810 (IovpSessionDataCreate.c)
 *     VfPacketCreateAndLock @ 0x1409DE9A8 (VfPacketCreateAndLock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

PVOID __stdcall ExAllocateFromNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx)(
                    (unsigned int)Lookaside->L.Type,
                    Lookaside->L.Size,
                    Lookaside->L.Tag);
  }
  return result;
}
