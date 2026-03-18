/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x14020B100
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140209778 (IoSetOplockPrivateFoExt.c)
 *     FsRtlUninitializeBaseMcb @ 0x14020A040 (FsRtlUninitializeBaseMcb.c)
 *     IopDeleteFileObjectExtension @ 0x14020B5C0 (IopDeleteFileObjectExtension.c)
 *     CcDeleteMbcb @ 0x1402482E0 (CcDeleteMbcb.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1402F8214 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateInsertLock @ 0x1402F8D50 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402F8E30 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1402F9074 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x1402F91FC (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402F9DC8 (FsRtlPrivateCheckWaitingLocks.c)
 *     CcExtendVacbArray @ 0x1402F9F78 (CcExtendVacbArray.c)
 *     CcFreeUnusedVacbLevels @ 0x1402FA84C (CcFreeUnusedVacbLevels.c)
 *     CcDeallocateVacbLevel @ 0x1402FAAA8 (CcDeallocateVacbLevel.c)
 *     FsRtlAddEntry @ 0x140302914 (FsRtlAddEntry.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140326710 (LZNT1DecompressChunkWorkItem.c)
 *     FsRtlUninitializeLargeMcb @ 0x14032B0C0 (FsRtlUninitializeLargeMcb.c)
 *     FsRtlUninitializeFileLock @ 0x14032FC10 (FsRtlUninitializeFileLock.c)
 *     PopAllocateIrp @ 0x14036F900 (PopAllocateIrp.c)
 *     WmipDeregisterRegEntry @ 0x140370AA4 (WmipDeregisterRegEntry.c)
 *     VfTargetDriversRemove @ 0x14037235C (VfTargetDriversRemove.c)
 *     PopFreeIrp @ 0x14037A87C (PopFreeIrp.c)
 *     IoSetOplockKeyContext @ 0x140390974 (IoSetOplockKeyContext.c)
 *     PopIrpWorker @ 0x14039C4D0 (PopIrpWorker.c)
 *     PopCreateDynamicIrpWorker @ 0x1403A4910 (PopCreateDynamicIrpWorker.c)
 *     sub_1403DD4E0 @ 0x1403DD4E0 (sub_1403DD4E0.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EE1D0 (FsRtlPrivateCancelFileLockIrp.c)
 *     MiFreeMdlTracker @ 0x14052F030 (MiFreeMdlTracker.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x14059F698 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     AlpcpDestroyPort @ 0x1405EA49C (AlpcpDestroyPort.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1405FD450 (FsRtlFreeExtraCreateParameter.c)
 *     ObWaitForMultipleObjects @ 0x140688460 (ObWaitForMultipleObjects.c)
 *     IovCallDriver @ 0x1409C7CC4 (IovCallDriver.c)
 *     ViFreeContextTable @ 0x1409CB4C4 (ViFreeContextTable.c)
 *     VfFastIoCheckState @ 0x1409CC9C4 (VfFastIoCheckState.c)
 *     VfIoCompletionCheckState @ 0x1409CCAEC (VfIoCompletionCheckState.c)
 *     VfAllocateAdapterChannel @ 0x1409CD5D0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CD820 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x1409CE010 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x1409CE5A0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1409CE960 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409CEA10 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x1409CED00 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x1409CF100 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x1409CFF40 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1409D01B0 (ViAdapterCallback.c)
 *     ViDevObjRemove @ 0x1409D935C (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D9814 (ViRemLockDeleteFirstTreeNode.c)
 *     ViDeadlockFree @ 0x1409E25B8 (ViDeadlockFree.c)
 *     ViDeadlockPopulateLookasideCache @ 0x1409E27C0 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x1409E3EDC (ViWdIrpBeforeCompletionRoutine.c)
 *     ViLookasideAdd @ 0x1409E45C4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409E46EC (ViLookasideDelete.c)
 *     IovpSessionDataDereference @ 0x1409E4940 (IovpSessionDataDereference.c)
 *     ViPacketNotificationCallback @ 0x1409E4A90 (ViPacketNotificationCallback.c)
 *     VerifierExDeleteResourceLite @ 0x1409E4E30 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409E5210 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409E549C (VfCheckForResource.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
