/*
 * XREFs of KeAcquireQueuedSpinLock @ 0x140310C70
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1402057F0 (FsRtlpRequestShareableOplock.c)
 *     IopfCompleteRequest @ 0x1402434C0 (IopfCompleteRequest.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1402832F4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14028350C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopGetDevicePDO @ 0x1402835A8 (IopGetDevicePDO.c)
 *     CcExtendVacbArray @ 0x14029B324 (CcExtendVacbArray.c)
 *     FsRtlUninitializeFileLock @ 0x14029DDF0 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14029FA64 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14029FDB4 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1402AA638 (FsRtlNotifySetCancelRoutine.c)
 *     FsRtlpOplockCleanup @ 0x1402AD5D0 (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x1402AEF00 (FsRtlUninitializeOplock.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1402B2DF4 (IopVerifyDeviceObjectOnStack.c)
 *     IoCancelIrp @ 0x1402BB2C0 (IoCancelIrp.c)
 *     FsRtlpOplockBreakToII @ 0x1402C4AAC (FsRtlpOplockBreakToII.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x1402CCF4C (IoGetLowerDeviceObjectWithTag.c)
 *     IoGetDriverObjectExtension @ 0x1402CEDF0 (IoGetDriverObjectExtension.c)
 *     IopQueryVpbFlagsSafe @ 0x1402EE268 (IopQueryVpbFlagsSafe.c)
 *     IopMountInitializeVpb @ 0x1402EE2C0 (IopMountInitializeVpb.c)
 *     IopInterlockedIncrementUlong @ 0x14030F0EC (IopInterlockedIncrementUlong.c)
 *     CcGetVacbMiss @ 0x1403109C0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x140312E70 (CcUnmapVacbArray.c)
 *     CcGetVirtualAddress @ 0x140320F10 (CcGetVirtualAddress.c)
 *     IopCheckVpbMounted @ 0x140353920 (IopCheckVpbMounted.c)
 *     IoBoostThreadIoPriority @ 0x140358630 (IoBoostThreadIoPriority.c)
 *     IoAcquireVpbSpinLock @ 0x140360CD0 (IoAcquireVpbSpinLock.c)
 *     IoDetachDevice @ 0x140360D00 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x140360D90 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x140360FD0 (IopCompleteUnloadOrDelete.c)
 *     IopInsertRemoveDevice @ 0x14036118C (IopInsertRemoveDevice.c)
 *     PnpGetRelatedTargetDevice @ 0x14036185C (PnpGetRelatedTargetDevice.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140362020 (IoGetAttachedDeviceReferenceWithTag.c)
 *     FsRtlpOplockBreakToNone @ 0x14036D3C8 (FsRtlpOplockBreakToNone.c)
 *     PnpIsChainDereferenced @ 0x14036DB30 (PnpIsChainDereferenced.c)
 *     PnpRemoveLockedDeviceNode @ 0x14036E5C8 (PnpRemoveLockedDeviceNode.c)
 *     PnpFindMountableDevice @ 0x14036E950 (PnpFindMountableDevice.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x14036F1E4 (PpMarkDeviceStackExtensionFlag.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140374AD0 (FsRtlpRequestExclusiveOplock.c)
 *     CcAllocateInitializeVacbArray @ 0x14037AE3C (CcAllocateInitializeVacbArray.c)
 *     IopCheckUnloadDriver @ 0x14037C4EC (IopCheckUnloadDriver.c)
 *     IoAllocateDriverObjectExtension @ 0x14037F9C0 (IoAllocateDriverObjectExtension.c)
 *     IopInterlockedRemoveHeadList @ 0x14037FAE4 (IopInterlockedRemoveHeadList.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403930CC (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     PnpMarkDeviceForRemove @ 0x140393BC4 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x140393DBC (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x140393E18 (PnpUnlockMountableDevice.c)
 *     IoGetDiskDeviceObject @ 0x140394A30 (IoGetDiskDeviceObject.c)
 *     IopCheckStackForTransactionSupport @ 0x140394D34 (IopCheckStackForTransactionSupport.c)
 *     RawCheckForDeleteVolume @ 0x140395244 (RawCheckForDeleteVolume.c)
 *     IopInterlockedDecrementUlong @ 0x1403954DC (IopInterlockedDecrementUlong.c)
 *     PopQueueQuerySetIrp @ 0x140398344 (PopQueueQuerySetIrp.c)
 *     IopSetFsRegistrationInProgress @ 0x14039A064 (IopSetFsRegistrationInProgress.c)
 *     IoEnumerateDeviceObjectList @ 0x14039AC20 (IoEnumerateDeviceObjectList.c)
 *     IopResurrectDriver @ 0x1403A7230 (IopResurrectDriver.c)
 *     CcInitializePartitionVacbs @ 0x1403C3328 (CcInitializePartitionVacbs.c)
 *     IopInterlockedInsertHeadList @ 0x1403C4F58 (IopInterlockedInsertHeadList.c)
 *     IopInterlockedInsertTailList @ 0x1403C9490 (IopInterlockedInsertTailList.c)
 *     IopCopyCompleteReadIrp @ 0x1403F16B0 (IopCopyCompleteReadIrp.c)
 *     CcDereferenceVacbArray @ 0x1404EB0A0 (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1404EB148 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB544 (CcUnmapInactiveViewsInternal.c)
 *     CcUninitializePartitionVacbs @ 0x1404EC424 (CcUninitializePartitionVacbs.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404F04C4 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1404F08A0 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404F0B4C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404F0C4C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1404F0CF0 (FsRtlpWaitOnIrp.c)
 *     IopDisassociateThreadIrp @ 0x14050072C (IopDisassociateThreadIrp.c)
 *     IopGetDriverPathInformation @ 0x140500B9C (IopGetDriverPathInformation.c)
 *     IopReferenceVerifyVpb @ 0x140500FD4 (IopReferenceVerifyVpb.c)
 *     IoAdjustStackSizeForRedirection @ 0x140505710 (IoAdjustStackSizeForRedirection.c)
 *     IoStartPacket @ 0x140506440 (IoStartPacket.c)
 *     IopGetFsRegistrationInProgress @ 0x1405067F0 (IopGetFsRegistrationInProgress.c)
 *     IopStartNextPacket @ 0x140506B84 (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x140506C44 (IopStartNextPacketByKey.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14050CF20 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IopSetLegacyResourcesFlag @ 0x14050DC6C (IopSetLegacyResourcesFlag.c)
 *     IopEliminateBogusConflict @ 0x140510680 (IopEliminateBogusConflict.c)
 *     RawVerifyVolume @ 0x140584E44 (RawVerifyVolume.c)
 *     IoUnregisterShutdownNotification @ 0x1409AB010 (IoUnregisterShutdownNotification.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x1409D6938 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x1409D699C (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x1409D69F8 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsInFdoStack @ 0x1409D6AA0 (IovUtilIsInFdoStack.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x1409D6B08 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilMultipleDevicesSameDriver @ 0x1409D6C20 (IovUtilMultipleDevicesSameDriver.c)
 *     IovUtilRelateDeviceObjects @ 0x1409D6C84 (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 */

KIRQL __stdcall KeAcquireQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number)
{
  KIRQL CurrentIrql; // si
  char *v2; // rbx
  volatile __int64 *v3; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v5; // rax
  _QWORD *v6; // rdx
  _DWORD *SchedulerAssist; // r9
  int v9; // r8d

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v2 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * Number;
  v3 = (volatile __int64 *)*((_QWORD *)v2 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = CurrentPrcb->SchedulerAssist;
  if ( v5 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v9 = v5[6];
      v5[6] = v9 + 1;
      if ( v9 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v2, v3);
    return CurrentIrql;
  }
  else
  {
    v6 = (_QWORD *)_InterlockedExchange64(v3, (__int64)v2);
    if ( v6 )
      KxWaitForLockOwnerShip((__int64)v2, v6);
    return CurrentIrql;
  }
}
