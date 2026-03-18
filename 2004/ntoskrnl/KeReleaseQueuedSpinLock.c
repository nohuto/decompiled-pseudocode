/*
 * XREFs of KeReleaseQueuedSpinLock @ 0x1402BE540
 * Callers:
 *     CcGetVirtualAddress @ 0x14022F3B0 (CcGetVirtualAddress.c)
 *     IoDetachDevice @ 0x14026F670 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x14026F700 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x14026F940 (IopCompleteUnloadOrDelete.c)
 *     IopInsertRemoveDevice @ 0x14026FAFC (IopInsertRemoveDevice.c)
 *     IopQueryVpbFlagsSafe @ 0x14026FEC0 (IopQueryVpbFlagsSafe.c)
 *     IopMountInitializeVpb @ 0x14026FF20 (IopMountInitializeVpb.c)
 *     IopInterlockedIncrementUlong @ 0x140270018 (IopInterlockedIncrementUlong.c)
 *     PnpGetRelatedTargetDevice @ 0x140271278 (PnpGetRelatedTargetDevice.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140271850 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140277254 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027746C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopGetDevicePDO @ 0x140277508 (IopGetDevicePDO.c)
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     IopCheckVpbMounted @ 0x140290E10 (IopCheckVpbMounted.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1402922F0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRequestShareableOplock @ 0x140296DF0 (FsRtlpRequestShareableOplock.c)
 *     CcGetVacbMiss @ 0x1402BE330 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x1402BEA50 (CcUnmapVacbArray.c)
 *     IoBoostThreadIoPriority @ 0x1402D668C (IoBoostThreadIoPriority.c)
 *     IoReleaseVpbSpinLock @ 0x1402FF290 (IoReleaseVpbSpinLock.c)
 *     FsRtlUninitializeFileLock @ 0x14032CFE0 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140330124 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140330474 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1403322C0 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140332428 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockCleanup @ 0x1403325B4 (FsRtlpOplockCleanup.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1403398B4 (FsRtlNotifySetCancelRoutine.c)
 *     FsRtlCancelNotify @ 0x1403399D0 (FsRtlCancelNotify.c)
 *     FsRtlUninitializeOplock @ 0x14033BF60 (FsRtlUninitializeOplock.c)
 *     IopVerifyDeviceObjectOnStack @ 0x140340D44 (IopVerifyDeviceObjectOnStack.c)
 *     IoCancelIrp @ 0x140347600 (IoCancelIrp.c)
 *     CcExtendVacbArray @ 0x14034FAB0 (CcExtendVacbArray.c)
 *     FsRtlpOplockBreakToII @ 0x14035345C (FsRtlpOplockBreakToII.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14035AF1C (IoGetLowerDeviceObjectWithTag.c)
 *     IoGetDriverObjectExtension @ 0x14035C7A0 (IoGetDriverObjectExtension.c)
 *     WmipNotificationIrpCancel @ 0x14035EF10 (WmipNotificationIrpCancel.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14036A630 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x14036ADB8 (FsRtlpOplockBreakToNone.c)
 *     PnpRemoveLockedDeviceNode @ 0x14036C6D8 (PnpRemoveLockedDeviceNode.c)
 *     PnpFindMountableDevice @ 0x14036CA60 (PnpFindMountableDevice.c)
 *     PnpIsChainDereferenced @ 0x14036D388 (PnpIsChainDereferenced.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x14036D7B8 (PpMarkDeviceStackExtensionFlag.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403740A0 (FsRtlpRequestExclusiveOplock.c)
 *     CcAllocateInitializeVacbArray @ 0x140378EC4 (CcAllocateInitializeVacbArray.c)
 *     IopCheckUnloadDriver @ 0x14037A654 (IopCheckUnloadDriver.c)
 *     IoAllocateDriverObjectExtension @ 0x14037D450 (IoAllocateDriverObjectExtension.c)
 *     IopInterlockedRemoveHeadList @ 0x14037D574 (IopInterlockedRemoveHeadList.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14039079C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     PnpMarkDeviceForRemove @ 0x140391294 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x14039148C (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x1403914E8 (PnpUnlockMountableDevice.c)
 *     IoGetDiskDeviceObject @ 0x140392100 (IoGetDiskDeviceObject.c)
 *     IopCheckStackForTransactionSupport @ 0x140392404 (IopCheckStackForTransactionSupport.c)
 *     RawCheckForDeleteVolume @ 0x140392914 (RawCheckForDeleteVolume.c)
 *     IopInterlockedDecrementUlong @ 0x140392BAC (IopInterlockedDecrementUlong.c)
 *     PopQueueQuerySetIrp @ 0x140395A14 (PopQueueQuerySetIrp.c)
 *     IopSetFsRegistrationInProgress @ 0x140397774 (IopSetFsRegistrationInProgress.c)
 *     IoEnumerateDeviceObjectList @ 0x1403982F0 (IoEnumerateDeviceObjectList.c)
 *     IopCsqCancelRoutine @ 0x1403A2580 (IopCsqCancelRoutine.c)
 *     IopResurrectDriver @ 0x1403A4550 (IopResurrectDriver.c)
 *     CcInitializePartitionVacbs @ 0x1403BF260 (CcInitializePartitionVacbs.c)
 *     IopInterlockedInsertHeadList @ 0x1403C2088 (IopInterlockedInsertHeadList.c)
 *     IopInterlockedInsertTailList @ 0x1403C5E60 (IopInterlockedInsertTailList.c)
 *     CcDereferenceVacbArray @ 0x1404E5F80 (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1404E6028 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E6424 (CcUnmapInactiveViewsInternal.c)
 *     CcUninitializePartitionVacbs @ 0x1404E7304 (CcUninitializePartitionVacbs.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EA940 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404EB094 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1404EB2C8 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1404EB3A8 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1404EB470 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404EB71C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404EB81C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1404EB8C0 (FsRtlpWaitOnIrp.c)
 *     IopDisassociateThreadIrp @ 0x1404FB2D4 (IopDisassociateThreadIrp.c)
 *     IopGetDriverPathInformation @ 0x1404FB744 (IopGetDriverPathInformation.c)
 *     IopReferenceVerifyVpb @ 0x1404FBB7C (IopReferenceVerifyVpb.c)
 *     IoAdjustStackSizeForRedirection @ 0x1405002C0 (IoAdjustStackSizeForRedirection.c)
 *     IoStartPacket @ 0x140500FF0 (IoStartPacket.c)
 *     IopGetFsRegistrationInProgress @ 0x140501398 (IopGetFsRegistrationInProgress.c)
 *     IopStartNextPacket @ 0x14050172C (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x1405017EC (IopStartNextPacketByKey.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x140507AC0 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IopSetLegacyResourcesFlag @ 0x14050880C (IopSetLegacyResourcesFlag.c)
 *     PiDqIrpCancel @ 0x140508A60 (PiDqIrpCancel.c)
 *     PiSwIrpCancelStartCreate @ 0x14050A910 (PiSwIrpCancelStartCreate.c)
 *     IopEliminateBogusConflict @ 0x14050B220 (IopEliminateBogusConflict.c)
 *     RawVerifyVolume @ 0x14057FA04 (RawVerifyVolume.c)
 *     IoUnregisterShutdownNotification @ 0x1409A81A0 (IoUnregisterShutdownNotification.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x1409D3928 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x1409D398C (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x1409D39E8 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsInFdoStack @ 0x1409D3A90 (IovUtilIsInFdoStack.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x1409D3AF8 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilMultipleDevicesSameDriver @ 0x1409D3C10 (IovUtilMultipleDevicesSameDriver.c)
 *     IovUtilRelateDeviceObjects @ 0x1409D3C74 (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
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
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

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
