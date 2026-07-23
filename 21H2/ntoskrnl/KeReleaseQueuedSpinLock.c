/*
 * XREFs of KeReleaseQueuedSpinLock @ 0x14031B920
 * Callers:
 *     IopQueryVpbFlagsSafe @ 0x14020DC38 (IopQueryVpbFlagsSafe.c)
 *     IopMountInitializeVpb @ 0x14020DC90 (IopMountInitializeVpb.c)
 *     CcExtendVacbArray @ 0x140212CB4 (CcExtendVacbArray.c)
 *     FsRtlUninitializeFileLock @ 0x14021A970 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14021CFE4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14021D334 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlNotifySetCancelRoutine @ 0x140228778 (FsRtlNotifySetCancelRoutine.c)
 *     FsRtlCancelNotify @ 0x140228890 (FsRtlCancelNotify.c)
 *     FsRtlpOplockCleanup @ 0x14022B930 (FsRtlpOplockCleanup.c)
 *     FsRtlpCancelOplockRHIrp @ 0x14022BD50 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlUninitializeOplock @ 0x14022D260 (FsRtlUninitializeOplock.c)
 *     IopVerifyDeviceObjectOnStack @ 0x140230FA4 (IopVerifyDeviceObjectOnStack.c)
 *     IoCancelIrp @ 0x1402394D0 (IoCancelIrp.c)
 *     FsRtlpOplockBreakToII @ 0x14024302C (FsRtlpOplockBreakToII.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14024B44C (IoGetLowerDeviceObjectWithTag.c)
 *     IoGetDriverObjectExtension @ 0x14024D2F0 (IoGetDriverObjectExtension.c)
 *     WmipNotificationIrpCancel @ 0x140250150 (WmipNotificationIrpCancel.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140271504 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027171C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopGetDevicePDO @ 0x1402717B8 (IopGetDevicePDO.c)
 *     IoReleaseVpbSpinLock @ 0x1402A5BB0 (IoReleaseVpbSpinLock.c)
 *     IoDetachDevice @ 0x1402A5D60 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x1402A5DF0 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x1402A6030 (IopCompleteUnloadOrDelete.c)
 *     IopInsertRemoveDevice @ 0x1402A61EC (IopInsertRemoveDevice.c)
 *     FsRtlpRequestShareableOplock @ 0x1402AA120 (FsRtlpRequestShareableOplock.c)
 *     IopfCompleteRequest @ 0x1402E7D10 (IopfCompleteRequest.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402F76F0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     PnpGetRelatedTargetDevice @ 0x1402F7DC0 (PnpGetRelatedTargetDevice.c)
 *     IopInterlockedIncrementUlong @ 0x140319E3C (IopInterlockedIncrementUlong.c)
 *     CcGetVacbMiss @ 0x14031B710 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14031DBC0 (CcUnmapVacbArray.c)
 *     CcGetVirtualAddress @ 0x14032BC60 (CcGetVirtualAddress.c)
 *     IopCheckVpbMounted @ 0x14035E670 (IopCheckVpbMounted.c)
 *     IoBoostThreadIoPriority @ 0x140363380 (IoBoostThreadIoPriority.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14036CDF0 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x14036D578 (FsRtlpOplockBreakToNone.c)
 *     PnpIsChainDereferenced @ 0x14036DCE0 (PnpIsChainDereferenced.c)
 *     PnpRemoveLockedDeviceNode @ 0x14036E778 (PnpRemoveLockedDeviceNode.c)
 *     PnpFindMountableDevice @ 0x14036EB00 (PnpFindMountableDevice.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x14036F394 (PpMarkDeviceStackExtensionFlag.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140374620 (FsRtlpRequestExclusiveOplock.c)
 *     CcAllocateInitializeVacbArray @ 0x14037A98C (CcAllocateInitializeVacbArray.c)
 *     IopCheckUnloadDriver @ 0x14037C03C (IopCheckUnloadDriver.c)
 *     IoAllocateDriverObjectExtension @ 0x14037F510 (IoAllocateDriverObjectExtension.c)
 *     IopInterlockedRemoveHeadList @ 0x14037F634 (IopInterlockedRemoveHeadList.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14039321C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     PnpMarkDeviceForRemove @ 0x140393D14 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x140393F0C (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x140393F68 (PnpUnlockMountableDevice.c)
 *     IoGetDiskDeviceObject @ 0x140394B80 (IoGetDiskDeviceObject.c)
 *     IopCheckStackForTransactionSupport @ 0x140394E84 (IopCheckStackForTransactionSupport.c)
 *     RawCheckForDeleteVolume @ 0x140395394 (RawCheckForDeleteVolume.c)
 *     IopInterlockedDecrementUlong @ 0x14039562C (IopInterlockedDecrementUlong.c)
 *     PopQueueQuerySetIrp @ 0x140398494 (PopQueueQuerySetIrp.c)
 *     IopSetFsRegistrationInProgress @ 0x14039A1B4 (IopSetFsRegistrationInProgress.c)
 *     IoEnumerateDeviceObjectList @ 0x14039AD70 (IoEnumerateDeviceObjectList.c)
 *     IopCsqCancelRoutine @ 0x1403A5460 (IopCsqCancelRoutine.c)
 *     IopResurrectDriver @ 0x1403A7380 (IopResurrectDriver.c)
 *     CcInitializePartitionVacbs @ 0x1403C3758 (CcInitializePartitionVacbs.c)
 *     IopInterlockedInsertHeadList @ 0x1403C5388 (IopInterlockedInsertHeadList.c)
 *     IopInterlockedInsertTailList @ 0x1403C9630 (IopInterlockedInsertTailList.c)
 *     IopCopyCompleteReadIrp @ 0x1403F1580 (IopCopyCompleteReadIrp.c)
 *     CcDereferenceVacbArray @ 0x1404EB2E0 (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1404EB388 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB784 (CcUnmapInactiveViewsInternal.c)
 *     CcUninitializePartitionVacbs @ 0x1404EC664 (CcUninitializePartitionVacbs.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EFCF0 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404F0444 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1404F0678 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1404F0758 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1404F0820 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404F0ACC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404F0BCC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1404F0C70 (FsRtlpWaitOnIrp.c)
 *     IopDisassociateThreadIrp @ 0x1405006AC (IopDisassociateThreadIrp.c)
 *     IopGetDriverPathInformation @ 0x140500B1C (IopGetDriverPathInformation.c)
 *     IopReferenceVerifyVpb @ 0x140500F54 (IopReferenceVerifyVpb.c)
 *     IoAdjustStackSizeForRedirection @ 0x140505690 (IoAdjustStackSizeForRedirection.c)
 *     IoStartPacket @ 0x1405063C0 (IoStartPacket.c)
 *     IopGetFsRegistrationInProgress @ 0x140506770 (IopGetFsRegistrationInProgress.c)
 *     IopStartNextPacket @ 0x140506B04 (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x140506BC4 (IopStartNextPacketByKey.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14050D160 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IopSetLegacyResourcesFlag @ 0x14050DEAC (IopSetLegacyResourcesFlag.c)
 *     PiDqIrpCancel @ 0x14050E100 (PiDqIrpCancel.c)
 *     PiSwIrpCancelStartCreate @ 0x14050FFB0 (PiSwIrpCancelStartCreate.c)
 *     IopEliminateBogusConflict @ 0x1405108C0 (IopEliminateBogusConflict.c)
 *     RawVerifyVolume @ 0x140585074 (RawVerifyVolume.c)
 *     IoUnregisterShutdownNotification @ 0x1409ABF40 (IoUnregisterShutdownNotification.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x1409D7938 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x1409D799C (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x1409D79F8 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsInFdoStack @ 0x1409D7AA0 (IovUtilIsInFdoStack.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x1409D7B08 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilMultipleDevicesSameDriver @ 0x1409D7C20 (IovUtilMultipleDevicesSameDriver.c)
 *     IovUtilRelateDeviceObjects @ 0x1409D7C84 (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __stdcall KeReleaseQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number, KIRQL OldIrql)
{
  volatile signed __int64 **v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v7; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v9; // r10
  _DWORD *v10; // r9
  int v11; // eax
  bool v12; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * Number);
  v3 = OldIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v2, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(v2);
  v4 = (__int64)*v2;
  if ( *v2 )
    goto LABEL_8;
  if ( v2 != (volatile signed __int64 **)_InterlockedCompareExchange64(v2[1], 0LL, (signed __int64)v2) )
  {
    v4 = KxWaitForLockChainValid((__int64 *)v2);
LABEL_8:
    *v2 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v4 + 8), 1uLL);
  }
LABEL_4:
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v7 = SchedulerAssist[6] - 1;
      SchedulerAssist[6] = v7;
      if ( !v7 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = v9->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v9);
      }
    }
  }
  __writecr8(v3);
}
