/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x140202CB4
 * Callers:
 *     FsRtlInitializeBaseMcbEx @ 0x140202C50 (FsRtlInitializeBaseMcbEx.c)
 *     IoSetOplockPrivateFoExt @ 0x140206288 (IoSetOplockPrivateFoExt.c)
 *     FsRtlInitializeLargeMcb @ 0x14029B890 (FsRtlInitializeLargeMcb.c)
 *     CcAllocateVacbLevels @ 0x14029B8F4 (CcAllocateVacbLevels.c)
 *     LZNT1DecompressChunkNewThread @ 0x14029B998 (LZNT1DecompressChunkNewThread.c)
 *     FsRtlTruncateBaseMcb @ 0x14029D0A0 (FsRtlTruncateBaseMcb.c)
 *     FsRtlSplitLocks @ 0x1402A0228 (FsRtlSplitLocks.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1402CF748 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlAllocateFileLock @ 0x1402D11F0 (FsRtlAllocateFileLock.c)
 *     FsRtlPrivateLock @ 0x140358360 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x140358C0C (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140359518 (FsRtlPrivateInsertSharedLock.c)
 *     PopAllocateIrp @ 0x14036DF40 (PopAllocateIrp.c)
 *     WmipAllocRegEntry @ 0x1403710A4 (WmipAllocRegEntry.c)
 *     VfAvlReserveNode @ 0x140371CF0 (VfAvlReserveNode.c)
 *     IoSetOplockKeyContext @ 0x140390E44 (IoSetOplockKeyContext.c)
 *     PopCreateDynamicIrpWorker @ 0x1403A51D0 (PopCreateDynamicIrpWorker.c)
 *     MiAddMdlTracker @ 0x140530854 (MiAddMdlTracker.c)
 *     AlpcInitializeHandleTable @ 0x1405E0D44 (AlpcInitializeHandleTable.c)
 *     AlpcpInitializePort @ 0x1405E0D98 (AlpcpInitializePort.c)
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     AlpcpAllocateBlob @ 0x140660A8C (AlpcpAllocateBlob.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140684300 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlAddToTunnelCacheEx @ 0x140688B60 (FsRtlAddToTunnelCacheEx.c)
 *     WmipAllocEntry @ 0x1407580C0 (WmipAllocEntry.c)
 *     RtlpCopyRangeListEntry @ 0x140761290 (RtlpCopyRangeListEntry.c)
 *     RtlpCreateRangeListEntry @ 0x140764560 (RtlpCreateRangeListEntry.c)
 *     ViAllocateContextTable @ 0x1409C8474 (ViAllocateContextTable.c)
 *     ViIoCallbackSnapState @ 0x1409C9B84 (ViIoCallbackSnapState.c)
 *     VfAllocateAdapterChannel @ 0x1409CA5C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CA810 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x1409CB000 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x1409CC0F0 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x1409D14B0 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x1409DEB38 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x1409DF7B0 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdBeforeCallDriver @ 0x1409E0D48 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x1409E1820 (IovpSessionDataCreate.c)
 *     VfPacketCreateAndLock @ 0x1409E19B8 (VfPacketCreateAndLock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140407930 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
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
