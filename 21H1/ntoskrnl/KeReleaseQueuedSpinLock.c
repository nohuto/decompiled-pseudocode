/*
 * XREFs of KeReleaseQueuedSpinLock @ 0x14022B8C0
 * Callers:
 *     CcGetVacbMiss @ 0x14022B6B0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14022BDD0 (CcUnmapVacbArray.c)
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     IopCheckVpbMounted @ 0x140254590 (IopCheckVpbMounted.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140255A70 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRequestShareableOplock @ 0x14025A570 (FsRtlpRequestShareableOplock.c)
 *     CcGetVirtualAddress @ 0x140288400 (CcGetVirtualAddress.c)
 *     IoReleaseVpbSpinLock @ 0x1402C2A30 (IoReleaseVpbSpinLock.c)
 *     PnpGetRelatedTargetDevice @ 0x1402E0900 (PnpGetRelatedTargetDevice.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402E0EE0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IoBoostThreadIoPriority @ 0x1402E33DC (IoBoostThreadIoPriority.c)
 *     CcExtendVacbArray @ 0x1402EEC04 (CcExtendVacbArray.c)
 *     FsRtlUninitializeFileLock @ 0x1402F1240 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1402F3524 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402F3874 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1402F5590 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1402F56F8 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockCleanup @ 0x1402F5884 (FsRtlpOplockCleanup.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1402FC574 (FsRtlNotifySetCancelRoutine.c)
 *     FsRtlCancelNotify @ 0x1402FC690 (FsRtlCancelNotify.c)
 *     FsRtlUninitializeOplock @ 0x1402FF660 (FsRtlUninitializeOplock.c)
 *     IopVerifyDeviceObjectOnStack @ 0x140303F74 (IopVerifyDeviceObjectOnStack.c)
 *     IoCancelIrp @ 0x14030AD00 (IoCancelIrp.c)
 *     FsRtlpOplockBreakToII @ 0x1403155DC (FsRtlpOplockBreakToII.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14031D3DC (IoGetLowerDeviceObjectWithTag.c)
 *     IoGetDriverObjectExtension @ 0x14031EC90 (IoGetDriverObjectExtension.c)
 *     WmipNotificationIrpCancel @ 0x140321560 (WmipNotificationIrpCancel.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14033DC04 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14033DE1C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopGetDevicePDO @ 0x14033DEB8 (IopGetDevicePDO.c)
 *     IopQueryVpbFlagsSafe @ 0x14033F4FC (IopQueryVpbFlagsSafe.c)
 *     IopMountInitializeVpb @ 0x14033F560 (IopMountInitializeVpb.c)
 *     IopInterlockedIncrementUlong @ 0x14033F658 (IopInterlockedIncrementUlong.c)
 *     IoDetachDevice @ 0x14033F800 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x14033F890 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x14033FAD0 (IopCompleteUnloadOrDelete.c)
 *     IopInsertRemoveDevice @ 0x14033FC8C (IopInsertRemoveDevice.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140369C70 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x14036A3F8 (FsRtlpOplockBreakToNone.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x14036AB14 (PpMarkDeviceStackExtensionFlag.c)
 *     PnpRemoveLockedDeviceNode @ 0x14036C538 (PnpRemoveLockedDeviceNode.c)
 *     PnpFindMountableDevice @ 0x14036C8C0 (PnpFindMountableDevice.c)
 *     PnpIsChainDereferenced @ 0x14036D7FC (PnpIsChainDereferenced.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140373290 (FsRtlpRequestExclusiveOplock.c)
 *     CcAllocateInitializeVacbArray @ 0x1403780FC (CcAllocateInitializeVacbArray.c)
 *     IopCheckUnloadDriver @ 0x1403797AC (IopCheckUnloadDriver.c)
 *     IoAllocateDriverObjectExtension @ 0x14037C990 (IoAllocateDriverObjectExtension.c)
 *     IopInterlockedRemoveHeadList @ 0x14037CAB4 (IopInterlockedRemoveHeadList.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14038FC2C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     PnpMarkDeviceForRemove @ 0x140390724 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x14039091C (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x140390978 (PnpUnlockMountableDevice.c)
 *     IoGetDiskDeviceObject @ 0x140391690 (IoGetDiskDeviceObject.c)
 *     IopCheckStackForTransactionSupport @ 0x14039184C (IopCheckStackForTransactionSupport.c)
 *     RawCheckForDeleteVolume @ 0x140391D64 (RawCheckForDeleteVolume.c)
 *     IopInterlockedDecrementUlong @ 0x140391FFC (IopInterlockedDecrementUlong.c)
 *     PopQueueQuerySetIrp @ 0x140394E44 (PopQueueQuerySetIrp.c)
 *     IopSetFsRegistrationInProgress @ 0x140396B64 (IopSetFsRegistrationInProgress.c)
 *     IoEnumerateDeviceObjectList @ 0x1403976C0 (IoEnumerateDeviceObjectList.c)
 *     IopCsqCancelRoutine @ 0x1403A1DF0 (IopCsqCancelRoutine.c)
 *     IopResurrectDriver @ 0x1403A3DF0 (IopResurrectDriver.c)
 *     CcInitializePartitionVacbs @ 0x1403BE2D0 (CcInitializePartitionVacbs.c)
 *     IopInterlockedInsertHeadList @ 0x1403C11C8 (IopInterlockedInsertHeadList.c)
 *     IopInterlockedInsertTailList @ 0x1403C4EF0 (IopInterlockedInsertTailList.c)
 *     CcDereferenceVacbArray @ 0x1404E59D0 (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1404E5A78 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E5E74 (CcUnmapInactiveViewsInternal.c)
 *     CcUninitializePartitionVacbs @ 0x1404E6D54 (CcUninitializePartitionVacbs.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EA310 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404EAA64 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1404EAC98 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1404EAD78 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1404EAE40 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404EB0EC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404EB1EC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1404EB290 (FsRtlpWaitOnIrp.c)
 *     IopDisassociateThreadIrp @ 0x1404FAC84 (IopDisassociateThreadIrp.c)
 *     IopGetDriverPathInformation @ 0x1404FB0F4 (IopGetDriverPathInformation.c)
 *     IopReferenceVerifyVpb @ 0x1404FB52C (IopReferenceVerifyVpb.c)
 *     IoAdjustStackSizeForRedirection @ 0x1404FFC70 (IoAdjustStackSizeForRedirection.c)
 *     IoStartPacket @ 0x1405009A0 (IoStartPacket.c)
 *     IopGetFsRegistrationInProgress @ 0x140500D48 (IopGetFsRegistrationInProgress.c)
 *     IopStartNextPacket @ 0x1405010DC (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x14050119C (IopStartNextPacketByKey.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x140507470 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IopSetLegacyResourcesFlag @ 0x1405081BC (IopSetLegacyResourcesFlag.c)
 *     PiDqIrpCancel @ 0x140508410 (PiDqIrpCancel.c)
 *     PiSwIrpCancelStartCreate @ 0x14050A2C0 (PiSwIrpCancelStartCreate.c)
 *     IopEliminateBogusConflict @ 0x14050ABD0 (IopEliminateBogusConflict.c)
 *     RawVerifyVolume @ 0x14057F3C4 (RawVerifyVolume.c)
 *     IoUnregisterShutdownNotification @ 0x1409A7340 (IoUnregisterShutdownNotification.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x1409D38C8 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x1409D392C (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x1409D3988 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsInFdoStack @ 0x1409D3A30 (IovUtilIsInFdoStack.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x1409D3A98 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilMultipleDevicesSameDriver @ 0x1409D3BB0 (IovUtilMultipleDevicesSameDriver.c)
 *     IovUtilRelateDeviceObjects @ 0x1409D3C14 (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
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
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

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
    v4 = KxWaitForLockChainValid(v2, OldIrql);
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
