/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x140202234
 * Callers:
 *     FsRtlInitializeLargeMcb @ 0x140202160 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1402021D0 (FsRtlInitializeBaseMcbEx.c)
 *     FsRtlPrivateLock @ 0x14021E2B0 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x14021E5E4 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x14021E6C4 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateInitializeFileLock @ 0x14021F468 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlSplitLocks @ 0x14021F514 (FsRtlSplitLocks.c)
 *     FsRtlTruncateBaseMcb @ 0x14022BCB0 (FsRtlTruncateBaseMcb.c)
 *     CcAllocateVacbLevels @ 0x140247914 (CcAllocateVacbLevels.c)
 *     WmipAllocRegEntry @ 0x140248914 (WmipAllocRegEntry.c)
 *     FsRtlAllocateFileLock @ 0x140256110 (FsRtlAllocateFileLock.c)
 *     IoSetOplockPrivateFoExt @ 0x1402A2EF0 (IoSetOplockPrivateFoExt.c)
 *     VfAvlReserveNode @ 0x1402D83B4 (VfAvlReserveNode.c)
 *     LZNT1DecompressChunkNewThread @ 0x14035D158 (LZNT1DecompressChunkNewThread.c)
 *     PopCreateDynamicIrpWorker @ 0x14039653C (PopCreateDynamicIrpWorker.c)
 *     IoSetOplockKeyContext @ 0x14039E588 (IoSetOplockKeyContext.c)
 *     PopAllocateIrp @ 0x1403A3F0C (PopAllocateIrp.c)
 *     MiAddMdlTracker @ 0x140584030 (MiAddMdlTracker.c)
 *     AlpcInitializeHandleTable @ 0x140667810 (AlpcInitializeHandleTable.c)
 *     AlpcpInitializePort @ 0x140667864 (AlpcpInitializePort.c)
 *     FsRtlAddToTunnelCacheEx @ 0x140694B30 (FsRtlAddToTunnelCacheEx.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14071E5C0 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     WmipAllocEntry @ 0x14075E074 (WmipAllocEntry.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     AlpcpAllocateBlob @ 0x1407A73B0 (AlpcpAllocateBlob.c)
 *     RtlpCreateRangeListEntry @ 0x14083A160 (RtlpCreateRangeListEntry.c)
 *     RtlpCopyRangeListEntry @ 0x14083A490 (RtlpCopyRangeListEntry.c)
 *     HashpHashMemory @ 0x140A3731C (HashpHashMemory.c)
 *     HashpVerifyPkcs1Signature @ 0x140A375DC (HashpVerifyPkcs1Signature.c)
 *     ViAllocateContextTable @ 0x140A835CC (ViAllocateContextTable.c)
 *     VfAllocateAdapterChannel @ 0x140A84180 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140A843D0 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140A84BC0 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140A85DA0 (VfGetScatterGatherList.c)
 *     ViIoCallbackSnapState @ 0x140A8AAA4 (ViIoCallbackSnapState.c)
 *     VfIrpAllocateCallDriverData @ 0x140A8D11C (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x140A98DCC (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140A999D0 (ViDeadlockPopulateLookasideCache.c)
 *     VfPacketCreateAndLock @ 0x140A9BFC0 (VfPacketCreateAndLock.c)
 *     IovpSessionDataCreate @ 0x140A9CDF4 (IovpSessionDataCreate.c)
 *     ViWdBeforeCallDriver @ 0x140A9D128 (ViWdBeforeCallDriver.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
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
