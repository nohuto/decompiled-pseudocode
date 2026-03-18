/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x140269FBC
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140269E64 (IopDeleteFileObjectExtension.c)
 *     IoSetOplockPrivateFoExt @ 0x140297828 (IoSetOplockPrivateFoExt.c)
 *     CcDeleteMbcb @ 0x1402C8B10 (CcDeleteMbcb.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402D5E48 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleShared @ 0x1402D5F9C (FsRtlFastUnlockSingleShared.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1402D6504 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateInsertLock @ 0x1402D7B14 (FsRtlPrivateInsertLock.c)
 *     FsRtlFreeFileLock @ 0x14032C220 (FsRtlFreeFileLock.c)
 *     FsRtlAddEntry @ 0x14032CD34 (FsRtlAddEntry.c)
 *     FsRtlUninitializeLargeMcb @ 0x14032CF50 (FsRtlUninitializeLargeMcb.c)
 *     FsRtlUninitializeBaseMcb @ 0x14032CF90 (FsRtlUninitializeBaseMcb.c)
 *     FsRtlUninitializeFileLock @ 0x14032CFE0 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140330124 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140330474 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlEmptyFreePoolList @ 0x1403305D4 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x14033062C (FsRtlFreeTunnelNode.c)
 *     CcExtendVacbArray @ 0x14034FAB0 (CcExtendVacbArray.c)
 *     CcFreeUnusedVacbLevels @ 0x14034FF3C (CcFreeUnusedVacbLevels.c)
 *     CcDeallocateVacbLevel @ 0x14035001C (CcDeallocateVacbLevel.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140355A50 (LZNT1DecompressChunkWorkItem.c)
 *     PopAllocateIrp @ 0x14036CD00 (PopAllocateIrp.c)
 *     WmipDeregisterRegEntry @ 0x14036EB54 (WmipDeregisterRegEntry.c)
 *     VfTargetDriversRemove @ 0x14037040C (VfTargetDriversRemove.c)
 *     PopFreeIrp @ 0x140378B4C (PopFreeIrp.c)
 *     IoSetOplockKeyContext @ 0x14038E484 (IoSetOplockKeyContext.c)
 *     PopIrpWorker @ 0x14039D0E0 (PopIrpWorker.c)
 *     PopCreateDynamicIrpWorker @ 0x1403A2440 (PopCreateDynamicIrpWorker.c)
 *     sub_1403DA850 @ 0x1403DA850 (sub_1403DA850.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EA940 (FsRtlPrivateCancelFileLockIrp.c)
 *     MiFreeMdlTracker @ 0x14052B660 (MiFreeMdlTracker.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x14059BBF8 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     AlpcAddHandleTableEntry @ 0x14060DB98 (AlpcAddHandleTableEntry.c)
 *     IopCreateFile @ 0x140615C80 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140616D60 (FsRtlFreeExtraCreateParameter.c)
 *     WmipUnreferenceEntry @ 0x140646688 (WmipUnreferenceEntry.c)
 *     AlpcpDestroyPort @ 0x1406568AC (AlpcpDestroyPort.c)
 *     ObWaitForMultipleObjects @ 0x14066F900 (ObWaitForMultipleObjects.c)
 *     AlpcpDereferenceBlobEx @ 0x140688570 (AlpcpDereferenceBlobEx.c)
 *     AlpcConnectionDestroyProcedure @ 0x1406D7EF0 (AlpcConnectionDestroyProcedure.c)
 *     AlpcpDestroyBlob @ 0x1406D800C (AlpcpDestroyBlob.c)
 *     RtlpFreeRangeListEntry @ 0x14074E3F8 (RtlpFreeRangeListEntry.c)
 *     FsRtlDeleteTunnelCache @ 0x14075C270 (FsRtlDeleteTunnelCache.c)
 *     IovCallDriver @ 0x1409C1CA4 (IovCallDriver.c)
 *     ViFreeContextTable @ 0x1409C54A4 (ViFreeContextTable.c)
 *     VfFastIoCheckState @ 0x1409C69A4 (VfFastIoCheckState.c)
 *     VfIoCompletionCheckState @ 0x1409C6ACC (VfIoCompletionCheckState.c)
 *     VfAllocateAdapterChannel @ 0x1409C75B0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409C7800 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x1409C7FF0 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x1409C8580 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1409C8940 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409C89F0 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x1409C8CE0 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x1409C90E0 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x1409C9F20 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1409CA190 (ViAdapterCallback.c)
 *     ViDevObjRemove @ 0x1409D333C (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D37F4 (ViRemLockDeleteFirstTreeNode.c)
 *     ViDeadlockFree @ 0x1409DC598 (ViDeadlockFree.c)
 *     ViDeadlockPopulateLookasideCache @ 0x1409DC7A0 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x1409DDEBC (ViWdIrpBeforeCompletionRoutine.c)
 *     ViLookasideAdd @ 0x1409DE5A4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409DE6CC (ViLookasideDelete.c)
 *     IovpSessionDataDereference @ 0x1409DE920 (IovpSessionDataDereference.c)
 *     ViPacketNotificationCallback @ 0x1409DEA70 (ViPacketNotificationCallback.c)
 *     VerifierExDeleteResourceLite @ 0x1409DEE10 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409DF1F0 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409DF47C (VfCheckForResource.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
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
