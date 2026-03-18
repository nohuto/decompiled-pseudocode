/*
 * XREFs of VerifierBugCheckIfAppropriate @ 0x1409CDD34
 * Callers:
 *     VfFailDeviceNode @ 0x1403A3D90 (VfFailDeviceNode.c)
 *     VfFailDriver @ 0x14059AC20 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x14059AC50 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x14059B9E4 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14059BBD8 (MdlInvariantPreProcessing1.c)
 *     VerifierFreeTrackedPool @ 0x14059C0E0 (VerifierFreeTrackedPool.c)
 *     VfReportIssueWithOptions @ 0x14059C234 (VfReportIssueWithOptions.c)
 *     IovCompleteRequest @ 0x1409C1F80 (IovCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x1409C21B0 (IovFreeIrpPrivate.c)
 *     IovInitializeTimer @ 0x1409C2260 (IovInitializeTimer.c)
 *     MmCheckMdlPages @ 0x1409C2D7C (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x1409C2E88 (MmCheckMapIoSpace.c)
 *     VfUtilCheckKernelAddress @ 0x1409C356C (VfUtilCheckKernelAddress.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C3AEC (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoAllocateIrp @ 0x1409C6330 (VerifierIoAllocateIrp.c)
 *     VerifierIoFreeMdl @ 0x1409C6600 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x1409C6660 (VerifierIoInitializeWorkItem.c)
 *     VerifierPortIoAllocateIrp @ 0x1409C6830 (VerifierPortIoAllocateIrp.c)
 *     VfFastIoCheckState @ 0x1409C6994 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A6C (VfFastIoSnapState.c)
 *     VfIoCompletionCheckState @ 0x1409C6ABC (VfIoCompletionCheckState.c)
 *     VfAllocateCommonBufferEx @ 0x1409C7B00 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x1409C7C80 (VfAllocateCommonBufferWithBounds.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1409CE868 (ViIrpCheckKernelAddressForIrp.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x1409D04B0 (VerifierKeReleaseQueuedSpinLock.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15B0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1409D1C90 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1409D1E00 (VerifierExAllocatePoolWithQuotaTag.c)
 *     ViFreeTrackedPool @ 0x1409D2218 (ViFreeTrackedPool.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x1409D2EE0 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x1409D32DC (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1409D3450 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x1409D3734 (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x1409D3764 (VfRemLockReportBadReleaseTag.c)
 *     VfTargetEtwUnregister @ 0x1409D3FE4 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1409D4510 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x1409D458C (ViTargetRemovingCheckEtwWmi.c)
 *     ViErrorFinishReport @ 0x1409D51EC (ViErrorFinishReport.c)
 *     VfCheckUserHandle @ 0x1409D7114 (VfCheckUserHandle.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409D73B0 (ViShutdownWatchdogExecuteDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1409D7528 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeEnterCriticalRegion @ 0x1409D7AA0 (VerifierKeEnterCriticalRegion.c)
 *     VerifierKeLeaveCriticalRegion @ 0x1409D7D20 (VerifierKeLeaveCriticalRegion.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1409D7F80 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x1409D8040 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x1409D8110 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1409D83D0 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1409D8460 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeSetEvent @ 0x1409D85A0 (VerifierKeSetEvent.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1409D8E80 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeLowerIrqlSanityChecks @ 0x1409D90C8 (ViKeLowerIrqlSanityChecks.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1409D920C (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeReleaseSpinLockCommon @ 0x1409D92F0 (ViKeReleaseSpinLockCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409D9360 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeWaitSanityChecks @ 0x1409D959C (ViKeWaitSanityChecks.c)
 *     VfPoolCheckForLeaks @ 0x1409DD0B0 (VfPoolCheckForLeaks.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x1409DD69C (VfIrpDatabaseCheckExFreePool.c)
 *     ViWdIrpTimedOut @ 0x1409DDEF0 (ViWdIrpTimedOut.c)
 *     VerifierExInitializeLookasideListEx @ 0x1409DE130 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1409DE280 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1409DE3A0 (VerifierExInitializePagedLookasideList.c)
 *     VfCheckForLookaside @ 0x1409DE4A8 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x1409DE544 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409DE66C (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1409DEDB0 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409DF190 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409DF41C (VfCheckForResource.c)
 *     ViResourceAcquireSanityChecks @ 0x1409DF560 (ViResourceAcquireSanityChecks.c)
 *     ViResourceReleaseSanityChecks @ 0x1409DF628 (ViResourceReleaseSanityChecks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x1409E1BC0 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1409E1D14 (ViExCheckAPCLevelOrBelow.c)
 *     ViExCheckAPCsDisabled @ 0x1409E1D54 (ViExCheckAPCsDisabled.c)
 *     VerifierMmAllocateContiguousMemory @ 0x1409E2D70 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1409E2E60 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1409E2F80 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1409E30A0 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1409E3200 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x1409E33A0 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x1409E3490 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x1409E35B0 (VerifierMmBuildMdlForNonPagedPool.c)
 *     VerifierMmMapIoSpace @ 0x1409E3920 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x1409E3A90 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E3B70 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x1409E3D50 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x1409E3E40 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x1409E3F80 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x1409E40C0 (VerifierMmUnmapIoSpace.c)
 *     VerifierMmUnmapLockedPages @ 0x1409E4150 (VerifierMmUnmapLockedPages.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x1409E4508 (ViMmMapLockedPagesSanityChecks.c)
 *     ViMmValidateIrql @ 0x1409E4600 (ViMmValidateIrql.c)
 *     VerifierObReferenceObjectByHandle @ 0x1409E4AC0 (VerifierObReferenceObjectByHandle.c)
 *     VerifierObReferenceObjectByPointer @ 0x1409E4BE0 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObfReferenceObject @ 0x1409E4D70 (VerifierObfReferenceObject.c)
 *     VfZwNotifyChangeKey @ 0x1409E6DF0 (VfZwNotifyChangeKey.c)
 *     ViZwCheckApcRequirement @ 0x1409E9774 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x1409E982C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1409E98C4 (ViZwCheckVirtualAddress.c)
 *     ExAllocatePoolSanityChecks @ 0x1409E9D64 (ExAllocatePoolSanityChecks.c)
 *     ExFreePoolSanityChecks @ 0x1409E9ED0 (ExFreePoolSanityChecks.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VerifierBugCheckIfAppropriate(
        ULONG BugCheckCode,
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 BugCheckParameter4)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  unsigned int v11; // ebx
  __int64 *v12; // rcx
  __int64 v13; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0;
  if ( (MmVerifierData & 0x400000) != 0 )
  {
    if ( CurrentIrql > 2u )
      return result;
    if ( ViXdvTipUtils )
    {
      if ( (VfFlightOptions & 1) == 0 || !(*(unsigned int (__fastcall **)(_QWORD))(ViXdvTipUtils + 16))(BugCheckCode) )
        return (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, ULONG_PTR, ULONG_PTR, __int64))(ViXdvTipUtils + 8))(
                 BugCheckCode,
                 BugCheckParameter1,
                 BugCheckParameter2,
                 BugCheckParameter3,
                 BugCheckParameter4);
    }
    else
    {
      result = VfFlightOptions & 1;
      if ( !(_BYTE)result )
        return result;
    }
  }
  v12 = ViVerifierBugcheckAttributes;
  while ( *(_DWORD *)v12 != BugCheckCode || *((_DWORD *)v12 + 1) != BugCheckParameter1 )
  {
    ++v11;
    v12 = (__int64 *)((char *)v12 + 12);
    if ( v11 >= 0xD )
      goto LABEL_13;
  }
  if ( VfVerifyMode >= *((_DWORD *)v12 + 2) )
LABEL_13:
    KeBugCheckEx(BugCheckCode, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  v13 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckLogIndex, 1u) + 1) & 0xF);
  result = BugCheckParameter4;
  *((_QWORD *)&ViBugcheckLog + v13 + 4) = BugCheckParameter4;
  *((_DWORD *)&ViBugcheckLog + 2 * v13) = BugCheckCode;
  *((_QWORD *)&ViBugcheckLog + v13 + 1) = BugCheckParameter1;
  *((_QWORD *)&ViBugcheckLog + v13 + 2) = BugCheckParameter2;
  *((_QWORD *)&ViBugcheckLog + v13 + 3) = BugCheckParameter3;
  return result;
}
