/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1402D7298
 * Callers:
 *     CcDeleteMbcb @ 0x140235CE0 (CcDeleteMbcb.c)
 *     IoSetOplockPrivateFoExt @ 0x14025AFA8 (IoSetOplockPrivateFoExt.c)
 *     IopDeleteFileObjectExtension @ 0x1402D7140 (IopDeleteFileObjectExtension.c)
 *     LZNT1DecompressChunkWorkItem @ 0x1402D7930 (LZNT1DecompressChunkWorkItem.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402E2B98 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleShared @ 0x1402E2CEC (FsRtlFastUnlockSingleShared.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1402E3254 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateInsertLock @ 0x1402E4864 (FsRtlPrivateInsertLock.c)
 *     CcExtendVacbArray @ 0x1402EEC04 (CcExtendVacbArray.c)
 *     CcFreeUnusedVacbLevels @ 0x1402EF090 (CcFreeUnusedVacbLevels.c)
 *     CcDeallocateVacbLevel @ 0x1402EF350 (CcDeallocateVacbLevel.c)
 *     FsRtlFreeFileLock @ 0x1402F0480 (FsRtlFreeFileLock.c)
 *     FsRtlAddEntry @ 0x1402F0F94 (FsRtlAddEntry.c)
 *     FsRtlUninitializeLargeMcb @ 0x1402F11B0 (FsRtlUninitializeLargeMcb.c)
 *     FsRtlUninitializeBaseMcb @ 0x1402F11F0 (FsRtlUninitializeBaseMcb.c)
 *     FsRtlUninitializeFileLock @ 0x1402F1240 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1402F3524 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402F3874 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlEmptyFreePoolList @ 0x1402F39D4 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x1402F3A2C (FsRtlFreeTunnelNode.c)
 *     PopAllocateIrp @ 0x14036D060 (PopAllocateIrp.c)
 *     WmipDeregisterRegEntry @ 0x14036DF24 (WmipDeregisterRegEntry.c)
 *     VfTargetDriversRemove @ 0x14036F7DC (VfTargetDriversRemove.c)
 *     PopFreeIrp @ 0x140377D3C (PopFreeIrp.c)
 *     IoSetOplockKeyContext @ 0x14038D914 (IoSetOplockKeyContext.c)
 *     PopIrpWorker @ 0x14039C950 (PopIrpWorker.c)
 *     PopCreateDynamicIrpWorker @ 0x1403A1CB0 (PopCreateDynamicIrpWorker.c)
 *     sub_1403D9A10 @ 0x1403D9A10 (sub_1403D9A10.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EA310 (FsRtlPrivateCancelFileLockIrp.c)
 *     MiFreeMdlTracker @ 0x14052B010 (MiFreeMdlTracker.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x14059B508 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     ObWaitForMultipleObjects @ 0x1405F7860 (ObWaitForMultipleObjects.c)
 *     AlpcpDereferenceBlobEx @ 0x1406103F0 (AlpcpDereferenceBlobEx.c)
 *     AlpcAddHandleTableEntry @ 0x140642CE8 (AlpcAddHandleTableEntry.c)
 *     AlpcpDestroyPort @ 0x14064651C (AlpcpDestroyPort.c)
 *     IopCreateFile @ 0x14066D230 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14066E310 (FsRtlFreeExtraCreateParameter.c)
 *     WmipUnreferenceEntry @ 0x1406817E8 (WmipUnreferenceEntry.c)
 *     AlpcConnectionDestroyProcedure @ 0x1406B8640 (AlpcConnectionDestroyProcedure.c)
 *     AlpcpDestroyBlob @ 0x1406B875C (AlpcpDestroyBlob.c)
 *     RtlpFreeRangeListEntry @ 0x140749FD8 (RtlpFreeRangeListEntry.c)
 *     FsRtlDeleteTunnelCache @ 0x14075A660 (FsRtlDeleteTunnelCache.c)
 *     IovCallDriver @ 0x1409C1C94 (IovCallDriver.c)
 *     ViFreeContextTable @ 0x1409C5494 (ViFreeContextTable.c)
 *     VfFastIoCheckState @ 0x1409C6994 (VfFastIoCheckState.c)
 *     VfIoCompletionCheckState @ 0x1409C6ABC (VfIoCompletionCheckState.c)
 *     VfAllocateAdapterChannel @ 0x1409C75A0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409C77F0 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x1409C7FE0 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x1409C8570 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1409C8930 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409C89E0 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x1409C8CD0 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x1409C90D0 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x1409C9F10 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1409CA180 (ViAdapterCallback.c)
 *     ViDevObjRemove @ 0x1409D32DC (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D3794 (ViRemLockDeleteFirstTreeNode.c)
 *     ViDeadlockFree @ 0x1409DC538 (ViDeadlockFree.c)
 *     ViDeadlockPopulateLookasideCache @ 0x1409DC740 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x1409DDE5C (ViWdIrpBeforeCompletionRoutine.c)
 *     ViLookasideAdd @ 0x1409DE544 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409DE66C (ViLookasideDelete.c)
 *     IovpSessionDataDereference @ 0x1409DE8C0 (IovpSessionDataDereference.c)
 *     ViPacketNotificationCallback @ 0x1409DEA10 (ViPacketNotificationCallback.c)
 *     VerifierExDeleteResourceLite @ 0x1409DEDB0 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409DF190 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409DF41C (VfCheckForResource.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
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
