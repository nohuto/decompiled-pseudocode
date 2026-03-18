/*
 * XREFs of KeReleaseQueuedSpinLock @ 0x1402A3F30
 * Callers:
 *     IopQueryVpbFlagsSafe @ 0x14020C4D4 (IopQueryVpbFlagsSafe.c)
 *     IopMountInitializeVpb @ 0x14020C530 (IopMountInitializeVpb.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14021D404 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14021F280 (FsRtlPrivateCheckWaitingLocks.c)
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     FsRtlNotifySetCancelRoutine @ 0x140233104 (FsRtlNotifySetCancelRoutine.c)
 *     FsRtlUninitializeOplock @ 0x14023A260 (FsRtlUninitializeOplock.c)
 *     CcExtendVacbArray @ 0x140247300 (CcExtendVacbArray.c)
 *     FsRtlpWaitOnIrp @ 0x140249470 (FsRtlpWaitOnIrp.c)
 *     FsRtlpOplockBreakToII @ 0x14024A5B4 (FsRtlpOplockBreakToII.c)
 *     IopGetMountFlag @ 0x14024B024 (IopGetMountFlag.c)
 *     FsRtlCancelNotify @ 0x14024CCD0 (FsRtlCancelNotify.c)
 *     FsRtlpCancelOplockRHIrp @ 0x14024E6F0 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14024E884 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14024FC04 (IopAttachDeviceToDeviceStackSafe.c)
 *     WmipNotificationIrpCancel @ 0x140252E20 (WmipNotificationIrpCancel.c)
 *     IoReleaseVpbSpinLock @ 0x140253010 (IoReleaseVpbSpinLock.c)
 *     IopInterlockedRemoveHeadList @ 0x140255C70 (IopInterlockedRemoveHeadList.c)
 *     IoDetachDevice @ 0x140256080 (IoDetachDevice.c)
 *     IoGetDriverObjectExtension @ 0x140256300 (IoGetDriverObjectExtension.c)
 *     FsRtlpOplockBreakToNone @ 0x140256F58 (FsRtlpOplockBreakToNone.c)
 *     IoStartPacket @ 0x1402576D0 (IoStartPacket.c)
 *     IopStartNextPacket @ 0x140257964 (IopStartNextPacket.c)
 *     FsRtlUninitializeFileLock @ 0x140259FA0 (FsRtlUninitializeFileLock.c)
 *     IoAllocateDriverObjectExtension @ 0x14025B7E0 (IoAllocateDriverObjectExtension.c)
 *     IopCsqCancelRoutine @ 0x14025BB20 (IopCsqCancelRoutine.c)
 *     IopResurrectDriver @ 0x14025DD20 (IopResurrectDriver.c)
 *     IoBoostThreadIoPriority @ 0x140280754 (IoBoostThreadIoPriority.c)
 *     CcGetVacbMiss @ 0x1402858A0 (CcGetVacbMiss.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1402A2260 (IopVerifyDeviceObjectOnStack.c)
 *     FsRtlpRequestShareableOplock @ 0x1402A2490 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockCleanup @ 0x1402A30D0 (FsRtlpOplockCleanup.c)
 *     IopInterlockedIncrementUlong @ 0x1402A3EF0 (IopInterlockedIncrementUlong.c)
 *     IopGetDevicePDO @ 0x1402A4000 (IopGetDevicePDO.c)
 *     IopCheckVpbMounted @ 0x1402A7910 (IopCheckVpbMounted.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     RawInitiateDeleteVolume @ 0x1402D2BD8 (RawInitiateDeleteVolume.c)
 *     PnpGetRelatedTargetDevice @ 0x1402D2E74 (PnpGetRelatedTargetDevice.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402D30A0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     IopInsertRemoveDevice @ 0x1402D5A04 (IopInsertRemoveDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x1402D5CA8 (IopCompleteUnloadOrDelete.c)
 *     PnpRemoveLockedDeviceNode @ 0x1402DDAE4 (PnpRemoveLockedDeviceNode.c)
 *     PnpFindMountableDevice @ 0x1402DDE58 (PnpFindMountableDevice.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1402DE33C (PpMarkDeviceStackExtensionFlag.c)
 *     CcGetVirtualAddress @ 0x140328180 (CcGetVirtualAddress.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14036B86C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14036CCBC (IoGetLowerDeviceObjectWithTag.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140376950 (FsRtlpCancelExclusiveIrp.c)
 *     RawCheckForDeleteVolume @ 0x1403770A8 (RawCheckForDeleteVolume.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403857EC (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14039F3B0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     PnpMarkDeviceForRemove @ 0x1403A0064 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x1403A0154 (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x1403A01B0 (PnpUnlockMountableDevice.c)
 *     IopCheckStackForTransactionSupport @ 0x1403A0B00 (IopCheckStackForTransactionSupport.c)
 *     IopInterlockedDecrementUlong @ 0x1403A156C (IopInterlockedDecrementUlong.c)
 *     PopQueueQuerySetIrp @ 0x1403A4264 (PopQueueQuerySetIrp.c)
 *     CcAllocateInitializeVacbArray @ 0x1403A5298 (CcAllocateInitializeVacbArray.c)
 *     PnpIsChainDereferenced @ 0x1403A55B8 (PnpIsChainDereferenced.c)
 *     IopSetFsRegistrationInProgress @ 0x1403A5A30 (IopSetFsRegistrationInProgress.c)
 *     IoGetDiskDeviceObject @ 0x1403A6F80 (IoGetDiskDeviceObject.c)
 *     IoEnumerateDeviceObjectList @ 0x1403A7030 (IoEnumerateDeviceObjectList.c)
 *     CcInitializePartitionVacbs @ 0x1403D1490 (CcInitializePartitionVacbs.c)
 *     IopInterlockedInsertHeadList @ 0x1403D23B8 (IopInterlockedInsertHeadList.c)
 *     IopInterlockedInsertTailList @ 0x1403D7D9C (IopInterlockedInsertTailList.c)
 *     IopCheckUnloadDriver @ 0x1403D8834 (IopCheckUnloadDriver.c)
 *     IopCopyCompleteReadIrp @ 0x140417DE0 (IopCopyCompleteReadIrp.c)
 *     CcDereferenceVacbArray @ 0x14053B0B8 (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x14053B160 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x14053B55C (CcUnmapInactiveViewsInternal.c)
 *     CcUninitializePartitionVacbs @ 0x14053E3AC (CcUninitializePartitionVacbs.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x140541E40 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140542458 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14054268C (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x14054276C (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x140542834 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140542AEC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     IopDisassociateThreadIrp @ 0x1405566C0 (IopDisassociateThreadIrp.c)
 *     IopGetDriverPathInformation @ 0x140556AEC (IopGetDriverPathInformation.c)
 *     IopReferenceVerifyVpb @ 0x140556F1C (IopReferenceVerifyVpb.c)
 *     IoAdjustStackSizeForRedirection @ 0x1405572B0 (IoAdjustStackSizeForRedirection.c)
 *     IopGetFsRegistrationInProgress @ 0x140557FF8 (IopGetFsRegistrationInProgress.c)
 *     IopStartNextPacketByKey @ 0x14055838C (IopStartNextPacketByKey.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x140560680 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IopSetLegacyResourcesFlag @ 0x14056117C (IopSetLegacyResourcesFlag.c)
 *     PiDqIrpCancel @ 0x1405616A0 (PiDqIrpCancel.c)
 *     PiSwIrpCancelStartCreate @ 0x140564310 (PiSwIrpCancelStartCreate.c)
 *     IopEliminateBogusConflict @ 0x140564E78 (IopEliminateBogusConflict.c)
 *     RawVerifyVolume @ 0x1405E364C (RawVerifyVolume.c)
 *     DifKeReleaseQueuedSpinLockWrapper @ 0x140614B20 (DifKeReleaseQueuedSpinLockWrapper.c)
 *     IoUnregisterShutdownNotification @ 0x140A65430 (IoUnregisterShutdownNotification.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140A92010 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140A92074 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x140A920D0 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsInFdoStack @ 0x140A92178 (IovUtilIsInFdoStack.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140A921E0 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilMultipleDevicesSameDriver @ 0x140A922F8 (IovUtilMultipleDevicesSameDriver.c)
 *     IovUtilRelateDeviceObjects @ 0x140A9235C (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall KeReleaseQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number, KIRQL OldIrql)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf

  v2 = OldIrql;
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer
                                                                 + 16 * Number));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = (v6 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v6;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
}
