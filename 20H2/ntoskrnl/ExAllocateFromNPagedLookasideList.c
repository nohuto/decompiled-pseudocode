/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x140205EF4
 * Callers:
 *     FsRtlInitializeBaseMcbEx @ 0x140205E90 (FsRtlInitializeBaseMcbEx.c)
 *     IoSetOplockPrivateFoExt @ 0x140209778 (IoSetOplockPrivateFoExt.c)
 *     FsRtlPrivateLock @ 0x1402F8A80 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x1402F8D50 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402F8E30 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlSplitLocks @ 0x1402F9CF8 (FsRtlSplitLocks.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1402F9E20 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlInitializeLargeMcb @ 0x1402FA410 (FsRtlInitializeLargeMcb.c)
 *     CcAllocateVacbLevels @ 0x1402FA92C (CcAllocateVacbLevels.c)
 *     LZNT1DecompressChunkNewThread @ 0x1402FA9D0 (LZNT1DecompressChunkNewThread.c)
 *     FsRtlTruncateBaseMcb @ 0x140301EE0 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAllocateFileLock @ 0x14032F240 (FsRtlAllocateFileLock.c)
 *     PopAllocateIrp @ 0x14036F900 (PopAllocateIrp.c)
 *     WmipAllocRegEntry @ 0x1403709B4 (WmipAllocRegEntry.c)
 *     VfAvlReserveNode @ 0x1403717B0 (VfAvlReserveNode.c)
 *     IoSetOplockKeyContext @ 0x140390974 (IoSetOplockKeyContext.c)
 *     PopCreateDynamicIrpWorker @ 0x1403A4910 (PopCreateDynamicIrpWorker.c)
 *     MiAddMdlTracker @ 0x14052ED54 (MiAddMdlTracker.c)
 *     AlpcInitializeHandleTable @ 0x1405E82E4 (AlpcInitializeHandleTable.c)
 *     AlpcpInitializePort @ 0x1405E8338 (AlpcpInitializePort.c)
 *     AlpcpAllocateBlob @ 0x1405F307C (AlpcpAllocateBlob.c)
 *     ObWaitForMultipleObjects @ 0x140688460 (ObWaitForMultipleObjects.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1406A7770 (FsRtlAddToTunnelCacheEx.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1406A8190 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     WmipAllocEntry @ 0x1407512F0 (WmipAllocEntry.c)
 *     RtlpCopyRangeListEntry @ 0x14075CC00 (RtlpCopyRangeListEntry.c)
 *     RtlpCreateRangeListEntry @ 0x140760140 (RtlpCreateRangeListEntry.c)
 *     ViAllocateContextTable @ 0x1409CB484 (ViAllocateContextTable.c)
 *     ViIoCallbackSnapState @ 0x1409CCB94 (ViIoCallbackSnapState.c)
 *     VfAllocateAdapterChannel @ 0x1409CD5D0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CD820 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x1409CE010 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x1409CF100 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x1409D44C0 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x1409E1B48 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x1409E27C0 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdBeforeCallDriver @ 0x1409E3D58 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x1409E4830 (IovpSessionDataCreate.c)
 *     VfPacketCreateAndLock @ 0x1409E49C8 (VfPacketCreateAndLock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
