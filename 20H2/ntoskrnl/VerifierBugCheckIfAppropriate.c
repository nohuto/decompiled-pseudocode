/*
 * XREFs of VerifierBugCheckIfAppropriate @ 0x1409D3D64
 * Callers:
 *     VfFailDeviceNode @ 0x1403A6910 (VfFailDeviceNode.c)
 *     VfFailDriver @ 0x14059EDB0 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x14059EDE0 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x14059FB74 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14059FD68 (MdlInvariantPreProcessing1.c)
 *     VerifierFreeTrackedPool @ 0x1405A0270 (VerifierFreeTrackedPool.c)
 *     VfReportIssueWithOptions @ 0x1405A03C4 (VfReportIssueWithOptions.c)
 *     IovCompleteRequest @ 0x1409C7FB0 (IovCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x1409C81E0 (IovFreeIrpPrivate.c)
 *     IovInitializeTimer @ 0x1409C8290 (IovInitializeTimer.c)
 *     MmCheckMdlPages @ 0x1409C8DAC (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x1409C8EB8 (MmCheckMapIoSpace.c)
 *     VfUtilCheckKernelAddress @ 0x1409C959C (VfUtilCheckKernelAddress.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C9B1C (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoAllocateIrp @ 0x1409CC360 (VerifierIoAllocateIrp.c)
 *     VerifierIoFreeMdl @ 0x1409CC630 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x1409CC690 (VerifierIoInitializeWorkItem.c)
 *     VerifierPortIoAllocateIrp @ 0x1409CC860 (VerifierPortIoAllocateIrp.c)
 *     VfFastIoCheckState @ 0x1409CC9C4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409CCA9C (VfFastIoSnapState.c)
 *     VfIoCompletionCheckState @ 0x1409CCAEC (VfIoCompletionCheckState.c)
 *     VfAllocateCommonBufferEx @ 0x1409CDB30 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x1409CDCB0 (VfAllocateCommonBufferWithBounds.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1409D4898 (ViIrpCheckKernelAddressForIrp.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x1409D64E0 (VerifierKeReleaseQueuedSpinLock.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D75E0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1409D7D10 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1409D7E80 (VerifierExAllocatePoolWithQuotaTag.c)
 *     ViFreeTrackedPool @ 0x1409D8298 (ViFreeTrackedPool.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x1409D8F60 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x1409D935C (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1409D94D0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x1409D97B4 (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x1409D97E4 (VfRemLockReportBadReleaseTag.c)
 *     VfTargetEtwUnregister @ 0x1409DA064 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1409DA590 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x1409DA60C (ViTargetRemovingCheckEtwWmi.c)
 *     ViErrorFinishReport @ 0x1409DB26C (ViErrorFinishReport.c)
 *     VfCheckUserHandle @ 0x1409DD194 (VfCheckUserHandle.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409DD430 (ViShutdownWatchdogExecuteDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1409DD5A8 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeEnterCriticalRegion @ 0x1409DDB20 (VerifierKeEnterCriticalRegion.c)
 *     VerifierKeLeaveCriticalRegion @ 0x1409DDDA0 (VerifierKeLeaveCriticalRegion.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1409DE000 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x1409DE0C0 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x1409DE190 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1409DE450 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1409DE4E0 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeSetEvent @ 0x1409DE620 (VerifierKeSetEvent.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1409DEF00 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeLowerIrqlSanityChecks @ 0x1409DF148 (ViKeLowerIrqlSanityChecks.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1409DF28C (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeReleaseSpinLockCommon @ 0x1409DF370 (ViKeReleaseSpinLockCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409DF3E0 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeWaitSanityChecks @ 0x1409DF61C (ViKeWaitSanityChecks.c)
 *     VfPoolCheckForLeaks @ 0x1409E3130 (VfPoolCheckForLeaks.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x1409E371C (VfIrpDatabaseCheckExFreePool.c)
 *     ViWdIrpTimedOut @ 0x1409E3F70 (ViWdIrpTimedOut.c)
 *     VerifierExInitializeLookasideListEx @ 0x1409E41B0 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1409E4300 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1409E4420 (VerifierExInitializePagedLookasideList.c)
 *     VfCheckForLookaside @ 0x1409E4528 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x1409E45C4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409E46EC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1409E4E30 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409E5210 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409E549C (VfCheckForResource.c)
 *     ViResourceAcquireSanityChecks @ 0x1409E55E0 (ViResourceAcquireSanityChecks.c)
 *     ViResourceReleaseSanityChecks @ 0x1409E56A8 (ViResourceReleaseSanityChecks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x1409E7C40 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1409E7D94 (ViExCheckAPCLevelOrBelow.c)
 *     ViExCheckAPCsDisabled @ 0x1409E7DD4 (ViExCheckAPCsDisabled.c)
 *     VerifierMmAllocateContiguousMemory @ 0x1409E8DF0 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1409E8EE0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1409E9000 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1409E9120 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1409E9280 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x1409E9420 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x1409E9510 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x1409E9630 (VerifierMmBuildMdlForNonPagedPool.c)
 *     VerifierMmMapIoSpace @ 0x1409E99A0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x1409E9B10 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E9BF0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x1409E9DD0 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x1409E9EC0 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x1409EA000 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x1409EA140 (VerifierMmUnmapIoSpace.c)
 *     VerifierMmUnmapLockedPages @ 0x1409EA1D0 (VerifierMmUnmapLockedPages.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x1409EA588 (ViMmMapLockedPagesSanityChecks.c)
 *     ViMmValidateIrql @ 0x1409EA680 (ViMmValidateIrql.c)
 *     VerifierObReferenceObjectByHandle @ 0x1409EAB40 (VerifierObReferenceObjectByHandle.c)
 *     VerifierObReferenceObjectByPointer @ 0x1409EAC60 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObfReferenceObject @ 0x1409EADF0 (VerifierObfReferenceObject.c)
 *     VfZwNotifyChangeKey @ 0x1409ECE70 (VfZwNotifyChangeKey.c)
 *     ViZwCheckApcRequirement @ 0x1409EF7F4 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x1409EF8AC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1409EF944 (ViZwCheckVirtualAddress.c)
 *     ExAllocatePoolSanityChecks @ 0x1409EFDE4 (ExAllocatePoolSanityChecks.c)
 *     ExFreePoolSanityChecks @ 0x1409EFF50 (ExFreePoolSanityChecks.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
