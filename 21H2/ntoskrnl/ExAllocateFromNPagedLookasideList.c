/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x140213400
 * Callers:
 *     FsRtlInitializeLargeMcb @ 0x140213220 (FsRtlInitializeLargeMcb.c)
 *     CcAllocateVacbLevels @ 0x140213284 (CcAllocateVacbLevels.c)
 *     LZNT1DecompressChunkNewThread @ 0x140213328 (LZNT1DecompressChunkNewThread.c)
 *     FsRtlTruncateBaseMcb @ 0x140219BE0 (FsRtlTruncateBaseMcb.c)
 *     FsRtlSplitLocks @ 0x14021D7A8 (FsRtlSplitLocks.c)
 *     FsRtlPrivateInitializeFileLock @ 0x14024DAC8 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlAllocateFileLock @ 0x14024F680 (FsRtlAllocateFileLock.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1402A75D0 (FsRtlInitializeBaseMcbEx.c)
 *     IoSetOplockPrivateFoExt @ 0x1402AABB8 (IoSetOplockPrivateFoExt.c)
 *     FsRtlPrivateLock @ 0x1403630B0 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x14036395C (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140364268 (FsRtlPrivateInsertSharedLock.c)
 *     PopAllocateIrp @ 0x14036E0F0 (PopAllocateIrp.c)
 *     WmipAllocRegEntry @ 0x140370BF4 (WmipAllocRegEntry.c)
 *     VfAvlReserveNode @ 0x140371840 (VfAvlReserveNode.c)
 *     IoSetOplockKeyContext @ 0x140390F94 (IoSetOplockKeyContext.c)
 *     PopCreateDynamicIrpWorker @ 0x1403A5320 (PopCreateDynamicIrpWorker.c)
 *     MiAddMdlTracker @ 0x140530A94 (MiAddMdlTracker.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1405DE140 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1405E7FF0 (FsRtlAddToTunnelCacheEx.c)
 *     AlpcpAllocateBlob @ 0x1406558AC (AlpcpAllocateBlob.c)
 *     AlpcInitializeHandleTable @ 0x1406D04A4 (AlpcInitializeHandleTable.c)
 *     AlpcpInitializePort @ 0x1406D04F8 (AlpcpInitializePort.c)
 *     ObWaitForMultipleObjects @ 0x1406EC520 (ObWaitForMultipleObjects.c)
 *     WmipAllocEntry @ 0x140758280 (WmipAllocEntry.c)
 *     RtlpCopyRangeListEntry @ 0x140761450 (RtlpCopyRangeListEntry.c)
 *     RtlpCreateRangeListEntry @ 0x140764720 (RtlpCreateRangeListEntry.c)
 *     ViAllocateContextTable @ 0x1409C9474 (ViAllocateContextTable.c)
 *     ViIoCallbackSnapState @ 0x1409CAB84 (ViIoCallbackSnapState.c)
 *     VfAllocateAdapterChannel @ 0x1409CB5C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CB810 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x1409CC000 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x1409CD0F0 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x1409D24B0 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x1409DFB38 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x1409E07B0 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdBeforeCallDriver @ 0x1409E1D48 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x1409E2820 (IovpSessionDataCreate.c)
 *     VfPacketCreateAndLock @ 0x1409E29B8 (VfPacketCreateAndLock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
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
