/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x140252DE4
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140206288 (IoSetOplockPrivateFoExt.c)
 *     IopDeleteFileObjectExtension @ 0x140252C8C (IopDeleteFileObjectExtension.c)
 *     CcExtendVacbArray @ 0x14029B324 (CcExtendVacbArray.c)
 *     CcFreeUnusedVacbLevels @ 0x14029B7B0 (CcFreeUnusedVacbLevels.c)
 *     CcDeallocateVacbLevel @ 0x14029BA70 (CcDeallocateVacbLevel.c)
 *     FsRtlFreeFileLock @ 0x14029CFC0 (FsRtlFreeFileLock.c)
 *     FsRtlAddEntry @ 0x14029DB44 (FsRtlAddEntry.c)
 *     FsRtlUninitializeLargeMcb @ 0x14029DD60 (FsRtlUninitializeLargeMcb.c)
 *     FsRtlUninitializeBaseMcb @ 0x14029DDA0 (FsRtlUninitializeBaseMcb.c)
 *     FsRtlUninitializeFileLock @ 0x14029DDF0 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14029FA64 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14029FDB4 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlEmptyFreePoolList @ 0x14029FF14 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x14029FF6C (FsRtlFreeTunnelNode.c)
 *     LZNT1DecompressChunkWorkItem @ 0x1402C7150 (LZNT1DecompressChunkWorkItem.c)
 *     CcDeleteMbcb @ 0x1402F293C (CcDeleteMbcb.c)
 *     FsRtlPrivateInsertLock @ 0x140358C0C (FsRtlPrivateInsertLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x140358CEC (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x140359208 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140359518 (FsRtlPrivateInsertSharedLock.c)
 *     PopAllocateIrp @ 0x14036DF40 (PopAllocateIrp.c)
 *     WmipDeregisterRegEntry @ 0x140371194 (WmipDeregisterRegEntry.c)
 *     PopFreeIrp @ 0x14037AA7C (PopFreeIrp.c)
 *     VfTargetDriversRemove @ 0x14037E990 (VfTargetDriversRemove.c)
 *     IoSetOplockKeyContext @ 0x140390E44 (IoSetOplockKeyContext.c)
 *     PopIrpWorker @ 0x14039FE70 (PopIrpWorker.c)
 *     PopCreateDynamicIrpWorker @ 0x1403A51D0 (PopCreateDynamicIrpWorker.c)
 *     sub_1403DDE50 @ 0x1403DDE50 (sub_1403DDE50.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EFD70 (FsRtlPrivateCancelFileLockIrp.c)
 *     MiFreeMdlTracker @ 0x140530B30 (MiFreeMdlTracker.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x1405A10C8 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     AlpcpDestroyPort @ 0x1405E2EFC (AlpcpDestroyPort.c)
 *     AlpcpDereferenceBlobEx @ 0x1405E9FC0 (AlpcpDereferenceBlobEx.c)
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     IopCreateFile @ 0x14060B4C0 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060C9E0 (FsRtlFreeExtraCreateParameter.c)
 *     WmipUnreferenceEntry @ 0x140639618 (WmipUnreferenceEntry.c)
 *     AlpcAddHandleTableEntry @ 0x1406627C8 (AlpcAddHandleTableEntry.c)
 *     AlpcConnectionDestroyProcedure @ 0x140685BD0 (AlpcConnectionDestroyProcedure.c)
 *     AlpcpDestroyBlob @ 0x140685CEC (AlpcpDestroyBlob.c)
 *     RtlpFreeRangeListEntry @ 0x140761668 (RtlpFreeRangeListEntry.c)
 *     FsRtlDeleteTunnelCache @ 0x14076ECC0 (FsRtlDeleteTunnelCache.c)
 *     IovCallDriver @ 0x1409C4CB4 (IovCallDriver.c)
 *     ViFreeContextTable @ 0x1409C84B4 (ViFreeContextTable.c)
 *     VfFastIoCheckState @ 0x1409C99B4 (VfFastIoCheckState.c)
 *     VfIoCompletionCheckState @ 0x1409C9ADC (VfIoCompletionCheckState.c)
 *     VfAllocateAdapterChannel @ 0x1409CA5C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CA810 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x1409CB000 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x1409CB590 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1409CB950 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409CBA00 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x1409CBCF0 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x1409CC0F0 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x1409CCF30 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1409CD1A0 (ViAdapterCallback.c)
 *     ViDevObjRemove @ 0x1409D634C (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D6804 (ViRemLockDeleteFirstTreeNode.c)
 *     ViDeadlockFree @ 0x1409DF5A8 (ViDeadlockFree.c)
 *     ViDeadlockPopulateLookasideCache @ 0x1409DF7B0 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x1409E0ECC (ViWdIrpBeforeCompletionRoutine.c)
 *     ViLookasideAdd @ 0x1409E15B4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409E16DC (ViLookasideDelete.c)
 *     IovpSessionDataDereference @ 0x1409E1930 (IovpSessionDataDereference.c)
 *     ViPacketNotificationCallback @ 0x1409E1A80 (ViPacketNotificationCallback.c)
 *     VerifierExDeleteResourceLite @ 0x1409E1E20 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409E2200 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409E248C (VfCheckForResource.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140407970 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
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
