/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x14021A938
 * Callers:
 *     CcExtendVacbArray @ 0x140212CB4 (CcExtendVacbArray.c)
 *     CcFreeUnusedVacbLevels @ 0x140213140 (CcFreeUnusedVacbLevels.c)
 *     CcDeallocateVacbLevel @ 0x14021343C (CcDeallocateVacbLevel.c)
 *     FsRtlFreeFileLock @ 0x140219B00 (FsRtlFreeFileLock.c)
 *     FsRtlAddEntry @ 0x14021A688 (FsRtlAddEntry.c)
 *     FsRtlUninitializeLargeMcb @ 0x14021A8B0 (FsRtlUninitializeLargeMcb.c)
 *     FsRtlUninitializeBaseMcb @ 0x14021A8F0 (FsRtlUninitializeBaseMcb.c)
 *     FsRtlUninitializeFileLock @ 0x14021A970 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14021CFE4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14021D334 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlEmptyFreePoolList @ 0x14021D494 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x14021D4EC (FsRtlFreeTunnelNode.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140245890 (LZNT1DecompressChunkWorkItem.c)
 *     IopDeleteFileObjectExtension @ 0x140285B3C (IopDeleteFileObjectExtension.c)
 *     IoSetOplockPrivateFoExt @ 0x1402AABB8 (IoSetOplockPrivateFoExt.c)
 *     CcDeleteMbcb @ 0x1402FD68C (CcDeleteMbcb.c)
 *     FsRtlPrivateInsertLock @ 0x14036395C (FsRtlPrivateInsertLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x140363A3C (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x140363F58 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140364268 (FsRtlPrivateInsertSharedLock.c)
 *     PopAllocateIrp @ 0x14036E0F0 (PopAllocateIrp.c)
 *     WmipDeregisterRegEntry @ 0x140370CE4 (WmipDeregisterRegEntry.c)
 *     PopFreeIrp @ 0x14037A5CC (PopFreeIrp.c)
 *     VfTargetDriversRemove @ 0x14037E4E0 (VfTargetDriversRemove.c)
 *     IoSetOplockKeyContext @ 0x140390F94 (IoSetOplockKeyContext.c)
 *     PopIrpWorker @ 0x14039FFC0 (PopIrpWorker.c)
 *     PopCreateDynamicIrpWorker @ 0x1403A5320 (PopCreateDynamicIrpWorker.c)
 *     sub_1403DDFC0 @ 0x1403DDFC0 (sub_1403DDFC0.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EFCF0 (FsRtlPrivateCancelFileLockIrp.c)
 *     MiFreeMdlTracker @ 0x140530D70 (MiFreeMdlTracker.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x1405A12F8 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     AlpcConnectionDestroyProcedure @ 0x1405E4D30 (AlpcConnectionDestroyProcedure.c)
 *     AlpcpDestroyBlob @ 0x1405E4E4C (AlpcpDestroyBlob.c)
 *     WmipUnreferenceEntry @ 0x14062E428 (WmipUnreferenceEntry.c)
 *     AlpcAddHandleTableEntry @ 0x1406575E8 (AlpcAddHandleTableEntry.c)
 *     IopCreateFile @ 0x14069AF70 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14069C490 (FsRtlFreeExtraCreateParameter.c)
 *     AlpcpDestroyPort @ 0x1406D265C (AlpcpDestroyPort.c)
 *     AlpcpDereferenceBlobEx @ 0x1406D9720 (AlpcpDereferenceBlobEx.c)
 *     ObWaitForMultipleObjects @ 0x1406EC520 (ObWaitForMultipleObjects.c)
 *     RtlpFreeRangeListEntry @ 0x140761828 (RtlpFreeRangeListEntry.c)
 *     FsRtlDeleteTunnelCache @ 0x14076EE80 (FsRtlDeleteTunnelCache.c)
 *     IovCallDriver @ 0x1409C5CB4 (IovCallDriver.c)
 *     ViFreeContextTable @ 0x1409C94B4 (ViFreeContextTable.c)
 *     VfFastIoCheckState @ 0x1409CA9B4 (VfFastIoCheckState.c)
 *     VfIoCompletionCheckState @ 0x1409CAADC (VfIoCompletionCheckState.c)
 *     VfAllocateAdapterChannel @ 0x1409CB5C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CB810 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x1409CC000 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x1409CC590 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1409CC950 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409CCA00 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x1409CCCF0 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x1409CD0F0 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x1409CDF30 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1409CE1A0 (ViAdapterCallback.c)
 *     ViDevObjRemove @ 0x1409D734C (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D7804 (ViRemLockDeleteFirstTreeNode.c)
 *     ViDeadlockFree @ 0x1409E05A8 (ViDeadlockFree.c)
 *     ViDeadlockPopulateLookasideCache @ 0x1409E07B0 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x1409E1ECC (ViWdIrpBeforeCompletionRoutine.c)
 *     ViLookasideAdd @ 0x1409E25B4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409E26DC (ViLookasideDelete.c)
 *     IovpSessionDataDereference @ 0x1409E2930 (IovpSessionDataDereference.c)
 *     ViPacketNotificationCallback @ 0x1409E2A80 (ViPacketNotificationCallback.c)
 *     VerifierExDeleteResourceLite @ 0x1409E2E20 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409E3200 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409E348C (VfCheckForResource.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

void __stdcall ExFreeToNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( LOWORD(Lookaside->L.ListHead.Alignment) >= Lookaside->L.Depth )
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(PVOID))Lookaside->L.FreeEx)(Entry);
  }
  else
  {
    RtlpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
}
