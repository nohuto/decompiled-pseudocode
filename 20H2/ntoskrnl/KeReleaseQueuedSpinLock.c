/*
 * XREFs of KeReleaseQueuedSpinLock @ 0x1402981B0
 * Callers:
 *     IoReleaseVpbSpinLock @ 0x140203270 (IoReleaseVpbSpinLock.c)
 *     IoDetachDevice @ 0x1402032C0 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x140203350 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x140203590 (IopCompleteUnloadOrDelete.c)
 *     IopInsertRemoveDevice @ 0x14020374C (IopInsertRemoveDevice.c)
 *     PnpGetRelatedTargetDevice @ 0x140203CEC (PnpGetRelatedTargetDevice.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402047B0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     FsRtlpRequestShareableOplock @ 0x140208D40 (FsRtlpRequestShareableOplock.c)
 *     IopInterlockedIncrementUlong @ 0x14020B0C0 (IopInterlockedIncrementUlong.c)
 *     FsRtlpOplockCleanup @ 0x14020B158 (FsRtlpOplockCleanup.c)
 *     IopCheckVpbMounted @ 0x14020D990 (IopCheckVpbMounted.c)
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 *     CcGetVacbMiss @ 0x140297FA0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14029A450 (CcUnmapVacbArray.c)
 *     CcGetVirtualAddress @ 0x1402A4660 (CcGetVirtualAddress.c)
 *     IoBoostThreadIoPriority @ 0x1402EB1D4 (IoBoostThreadIoPriority.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1402F8214 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402F9DC8 (FsRtlPrivateCheckWaitingLocks.c)
 *     CcExtendVacbArray @ 0x1402F9F78 (CcExtendVacbArray.c)
 *     FsRtlNotifySetCancelRoutine @ 0x14030C0D4 (FsRtlNotifySetCancelRoutine.c)
 *     FsRtlCancelNotify @ 0x14030C1F0 (FsRtlCancelNotify.c)
 *     FsRtlUninitializeOplock @ 0x14030EBE0 (FsRtlUninitializeOplock.c)
 *     IopVerifyDeviceObjectOnStack @ 0x140311BB4 (IopVerifyDeviceObjectOnStack.c)
 *     IoCancelIrp @ 0x140318CD0 (IoCancelIrp.c)
 *     IopQueryVpbFlagsSafe @ 0x14031F310 (IopQueryVpbFlagsSafe.c)
 *     IopMountInitializeVpb @ 0x14031F370 (IopMountInitializeVpb.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140322450 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpOplockBreakToII @ 0x140323E3C (FsRtlpOplockBreakToII.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14032B97C (IoGetLowerDeviceObjectWithTag.c)
 *     IoGetDriverObjectExtension @ 0x14032D2E0 (IoGetDriverObjectExtension.c)
 *     FsRtlUninitializeFileLock @ 0x14032FC10 (FsRtlUninitializeFileLock.c)
 *     WmipNotificationIrpCancel @ 0x14032FD10 (WmipNotificationIrpCancel.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140361624 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14036183C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopGetDevicePDO @ 0x1403618D8 (IopGetDevicePDO.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14036C610 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x14036CD98 (FsRtlpOplockBreakToNone.c)
 *     PnpRemoveLockedDeviceNode @ 0x14036F2E0 (PnpRemoveLockedDeviceNode.c)
 *     PnpFindMountableDevice @ 0x14036F668 (PnpFindMountableDevice.c)
 *     PnpIsChainDereferenced @ 0x14036FF88 (PnpIsChainDereferenced.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1403703B8 (PpMarkDeviceStackExtensionFlag.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140374940 (FsRtlpRequestExclusiveOplock.c)
 *     CcAllocateInitializeVacbArray @ 0x14037ABF4 (CcAllocateInitializeVacbArray.c)
 *     IopCheckUnloadDriver @ 0x14037C384 (IopCheckUnloadDriver.c)
 *     IoAllocateDriverObjectExtension @ 0x14037F180 (IoAllocateDriverObjectExtension.c)
 *     IopInterlockedRemoveHeadList @ 0x14037F2A4 (IopInterlockedRemoveHeadList.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140392C5C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     PnpMarkDeviceForRemove @ 0x140393754 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x14039394C (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x1403939A8 (PnpUnlockMountableDevice.c)
 *     IoGetDiskDeviceObject @ 0x1403945C0 (IoGetDiskDeviceObject.c)
 *     IopCheckStackForTransactionSupport @ 0x1403948C4 (IopCheckStackForTransactionSupport.c)
 *     RawCheckForDeleteVolume @ 0x140394DD4 (RawCheckForDeleteVolume.c)
 *     IopInterlockedDecrementUlong @ 0x14039506C (IopInterlockedDecrementUlong.c)
 *     PopQueueQuerySetIrp @ 0x140397ED4 (PopQueueQuerySetIrp.c)
 *     IopSetFsRegistrationInProgress @ 0x140399BF4 (IopSetFsRegistrationInProgress.c)
 *     IoEnumerateDeviceObjectList @ 0x14039A7B0 (IoEnumerateDeviceObjectList.c)
 *     IopCsqCancelRoutine @ 0x1403A4A50 (IopCsqCancelRoutine.c)
 *     IopResurrectDriver @ 0x1403A6970 (IopResurrectDriver.c)
 *     CcInitializePartitionVacbs @ 0x1403C2AD8 (CcInitializePartitionVacbs.c)
 *     IopInterlockedInsertHeadList @ 0x1403C47F8 (IopInterlockedInsertHeadList.c)
 *     IopInterlockedInsertTailList @ 0x1403C88F0 (IopInterlockedInsertTailList.c)
 *     IopCopyCompleteReadIrp @ 0x1403F0900 (IopCopyCompleteReadIrp.c)
 *     CcDereferenceVacbArray @ 0x1404E9510 (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1404E95B8 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E99B4 (CcUnmapInactiveViewsInternal.c)
 *     CcUninitializePartitionVacbs @ 0x1404EA894 (CcUninitializePartitionVacbs.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EE1D0 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404EE924 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1404EEB58 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1404EEC38 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1404EED00 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404EEFAC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404EF0AC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1404EF150 (FsRtlpWaitOnIrp.c)
 *     IopDisassociateThreadIrp @ 0x1404FEBA8 (IopDisassociateThreadIrp.c)
 *     IopGetDriverPathInformation @ 0x1404FF018 (IopGetDriverPathInformation.c)
 *     IopReferenceVerifyVpb @ 0x1404FF450 (IopReferenceVerifyVpb.c)
 *     IoAdjustStackSizeForRedirection @ 0x140503B90 (IoAdjustStackSizeForRedirection.c)
 *     IoStartPacket @ 0x1405048C0 (IoStartPacket.c)
 *     IopGetFsRegistrationInProgress @ 0x140504C70 (IopGetFsRegistrationInProgress.c)
 *     IopStartNextPacket @ 0x140505004 (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x1405050C4 (IopStartNextPacketByKey.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14050B3F0 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IopSetLegacyResourcesFlag @ 0x14050C13C (IopSetLegacyResourcesFlag.c)
 *     PiDqIrpCancel @ 0x14050C390 (PiDqIrpCancel.c)
 *     PiSwIrpCancelStartCreate @ 0x14050E240 (PiSwIrpCancelStartCreate.c)
 *     IopEliminateBogusConflict @ 0x14050EB50 (IopEliminateBogusConflict.c)
 *     RawVerifyVolume @ 0x140583434 (RawVerifyVolume.c)
 *     IoUnregisterShutdownNotification @ 0x1409AE110 (IoUnregisterShutdownNotification.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x1409D9948 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x1409D99AC (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x1409D9A08 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsInFdoStack @ 0x1409D9AB0 (IovUtilIsInFdoStack.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x1409D9B18 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilMultipleDevicesSameDriver @ 0x1409D9C30 (IovUtilMultipleDevicesSameDriver.c)
 *     IovUtilRelateDeviceObjects @ 0x1409D9C94 (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
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
    v4 = KxWaitForLockChainValid(v2);
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
