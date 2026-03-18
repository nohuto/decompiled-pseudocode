/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1402C1284
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x14025AFA8 (IoSetOplockPrivateFoExt.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1402C1220 (FsRtlInitializeBaseMcbEx.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402E2B98 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateLock @ 0x1402E3940 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x1402E4864 (FsRtlPrivateInsertLock.c)
 *     FsRtlInitializeLargeMcb @ 0x1402EF170 (FsRtlInitializeLargeMcb.c)
 *     CcAllocateVacbLevels @ 0x1402EF1D4 (CcAllocateVacbLevels.c)
 *     LZNT1DecompressChunkNewThread @ 0x1402EF278 (LZNT1DecompressChunkNewThread.c)
 *     FsRtlTruncateBaseMcb @ 0x1402F0560 (FsRtlTruncateBaseMcb.c)
 *     FsRtlSplitLocks @ 0x1402F3CE8 (FsRtlSplitLocks.c)
 *     FsRtlPrivateInitializeFileLock @ 0x14031F568 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlAllocateFileLock @ 0x140320D30 (FsRtlAllocateFileLock.c)
 *     PopAllocateIrp @ 0x14036D060 (PopAllocateIrp.c)
 *     WmipAllocRegEntry @ 0x14036DE34 (WmipAllocRegEntry.c)
 *     VfAvlReserveNode @ 0x14036EC30 (VfAvlReserveNode.c)
 *     IoSetOplockKeyContext @ 0x14038D914 (IoSetOplockKeyContext.c)
 *     PopCreateDynamicIrpWorker @ 0x1403A1CB0 (PopCreateDynamicIrpWorker.c)
 *     MiAddMdlTracker @ 0x14052AD34 (MiAddMdlTracker.c)
 *     ObWaitForMultipleObjects @ 0x1405F7860 (ObWaitForMultipleObjects.c)
 *     AlpcpAllocateBlob @ 0x140611EA0 (AlpcpAllocateBlob.c)
 *     AlpcInitializeHandleTable @ 0x140649C64 (AlpcInitializeHandleTable.c)
 *     AlpcpInitializePort @ 0x140649CB8 (AlpcpInitializePort.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1406B7920 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1406B9D20 (FsRtlAddToTunnelCacheEx.c)
 *     WmipAllocEntry @ 0x140740B90 (WmipAllocEntry.c)
 *     RtlpCopyRangeListEntry @ 0x140749C00 (RtlpCopyRangeListEntry.c)
 *     RtlpCreateRangeListEntry @ 0x14074CED0 (RtlpCreateRangeListEntry.c)
 *     ViAllocateContextTable @ 0x1409C5454 (ViAllocateContextTable.c)
 *     ViIoCallbackSnapState @ 0x1409C6B64 (ViIoCallbackSnapState.c)
 *     VfAllocateAdapterChannel @ 0x1409C75A0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409C77F0 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x1409C7FE0 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x1409C90D0 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x1409CE490 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x1409DBAC8 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x1409DC740 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdBeforeCallDriver @ 0x1409DDCD8 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x1409DE7B0 (IovpSessionDataCreate.c)
 *     VfPacketCreateAndLock @ 0x1409DE948 (VfPacketCreateAndLock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
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
