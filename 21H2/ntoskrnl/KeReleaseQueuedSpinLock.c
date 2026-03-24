/*
 * XREFs of KeReleaseQueuedSpinLock @ 0x140310BD0
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
 *     FsRtlCancelNotify @ 0x1402AA750 (FsRtlCancelNotify.c)
 *     FsRtlpOplockCleanup @ 0x1402AD5D0 (FsRtlpOplockCleanup.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1402AD9F0 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlUninitializeOplock @ 0x1402AEF00 (FsRtlUninitializeOplock.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1402B2DF4 (IopVerifyDeviceObjectOnStack.c)
 *     IoCancelIrp @ 0x1402BB2C0 (IoCancelIrp.c)
 *     FsRtlpOplockBreakToII @ 0x1402C4AAC (FsRtlpOplockBreakToII.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x1402CCF4C (IoGetLowerDeviceObjectWithTag.c)
 *     IoGetDriverObjectExtension @ 0x1402CEDF0 (IoGetDriverObjectExtension.c)
 *     WmipNotificationIrpCancel @ 0x1402D1D80 (WmipNotificationIrpCancel.c)
 *     IopQueryVpbFlagsSafe @ 0x1402EE268 (IopQueryVpbFlagsSafe.c)
 *     IopMountInitializeVpb @ 0x1402EE2C0 (IopMountInitializeVpb.c)
 *     IopInterlockedIncrementUlong @ 0x14030F0EC (IopInterlockedIncrementUlong.c)
 *     CcGetVacbMiss @ 0x1403109C0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x140312E70 (CcUnmapVacbArray.c)
 *     CcGetVirtualAddress @ 0x140320F10 (CcGetVirtualAddress.c)
 *     IopCheckVpbMounted @ 0x140353920 (IopCheckVpbMounted.c)
 *     IoBoostThreadIoPriority @ 0x140358630 (IoBoostThreadIoPriority.c)
 *     IoReleaseVpbSpinLock @ 0x140360CB0 (IoReleaseVpbSpinLock.c)
 *     IoDetachDevice @ 0x140360D00 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x140360D90 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x140360FD0 (IopCompleteUnloadOrDelete.c)
 *     IopInsertRemoveDevice @ 0x14036118C (IopInsertRemoveDevice.c)
 *     PnpGetRelatedTargetDevice @ 0x14036185C (PnpGetRelatedTargetDevice.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140362020 (IoGetAttachedDeviceReferenceWithTag.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14036CC40 (FsRtlpCancelExclusiveIrp.c)
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
 *     IopCsqCancelRoutine @ 0x1403A5310 (IopCsqCancelRoutine.c)
 *     IopResurrectDriver @ 0x1403A7230 (IopResurrectDriver.c)
 *     CcInitializePartitionVacbs @ 0x1403C3328 (CcInitializePartitionVacbs.c)
 *     IopInterlockedInsertHeadList @ 0x1403C4F58 (IopInterlockedInsertHeadList.c)
 *     IopInterlockedInsertTailList @ 0x1403C9490 (IopInterlockedInsertTailList.c)
 *     IopCopyCompleteReadIrp @ 0x1403F16B0 (IopCopyCompleteReadIrp.c)
 *     CcDereferenceVacbArray @ 0x1404EB0A0 (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1404EB148 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB544 (CcUnmapInactiveViewsInternal.c)
 *     CcUninitializePartitionVacbs @ 0x1404EC424 (CcUninitializePartitionVacbs.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EFD70 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404F04C4 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1404F06F8 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1404F07D8 (FsRtlpCancelWaitingIrp.c)
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
 *     PiDqIrpCancel @ 0x14050DEC0 (PiDqIrpCancel.c)
 *     PiSwIrpCancelStartCreate @ 0x14050FD70 (PiSwIrpCancelStartCreate.c)
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
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall KeReleaseQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number, KIRQL OldIrql)
{
  __int64 v2; // r8
  __int64 v3; // r9
  volatile signed __int64 **v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v9; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * Number);
  v5 = OldIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v4, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(v4);
  v6 = (__int64)*v4;
  if ( *v4 )
    goto LABEL_8;
  if ( v4 != (volatile signed __int64 **)_InterlockedCompareExchange64(v4[1], 0LL, (signed __int64)v4) )
  {
    v6 = KxWaitForLockChainValid((__int64 *)v4, OldIrql, v2, v3);
LABEL_8:
    *v4 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v6 + 8), 1uLL);
  }
LABEL_4:
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v9 = SchedulerAssist[6] - 1;
      SchedulerAssist[6] = v9;
      if ( !v9 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
  }
  __writecr8(v5);
}
