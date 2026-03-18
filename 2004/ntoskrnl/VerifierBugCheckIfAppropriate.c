/*
 * XREFs of VerifierBugCheckIfAppropriate @ 0x1409CDD44
 * Callers:
 *     VfFailDeviceNode @ 0x1403A44F0 (VfFailDeviceNode.c)
 *     VfFailDriver @ 0x14059B310 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x14059B340 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x14059C0D4 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14059C2C8 (MdlInvariantPreProcessing1.c)
 *     VerifierFreeTrackedPool @ 0x14059C7D0 (VerifierFreeTrackedPool.c)
 *     VfReportIssueWithOptions @ 0x14059C924 (VfReportIssueWithOptions.c)
 *     IovCompleteRequest @ 0x1409C1F90 (IovCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x1409C21C0 (IovFreeIrpPrivate.c)
 *     IovInitializeTimer @ 0x1409C2270 (IovInitializeTimer.c)
 *     MmCheckMdlPages @ 0x1409C2D8C (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x1409C2E98 (MmCheckMapIoSpace.c)
 *     VfUtilCheckKernelAddress @ 0x1409C357C (VfUtilCheckKernelAddress.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C3AFC (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoAllocateIrp @ 0x1409C6340 (VerifierIoAllocateIrp.c)
 *     VerifierIoFreeMdl @ 0x1409C6610 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x1409C6670 (VerifierIoInitializeWorkItem.c)
 *     VerifierPortIoAllocateIrp @ 0x1409C6840 (VerifierPortIoAllocateIrp.c)
 *     VfFastIoCheckState @ 0x1409C69A4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A7C (VfFastIoSnapState.c)
 *     VfIoCompletionCheckState @ 0x1409C6ACC (VfIoCompletionCheckState.c)
 *     VfAllocateCommonBufferEx @ 0x1409C7B10 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x1409C7C90 (VfAllocateCommonBufferWithBounds.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1409CE878 (ViIrpCheckKernelAddressForIrp.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x1409D04C0 (VerifierKeReleaseQueuedSpinLock.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15C0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1409D1CF0 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1409D1E60 (VerifierExAllocatePoolWithQuotaTag.c)
 *     ViFreeTrackedPool @ 0x1409D2278 (ViFreeTrackedPool.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x1409D2F40 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x1409D333C (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1409D34B0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x1409D3794 (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x1409D37C4 (VfRemLockReportBadReleaseTag.c)
 *     VfTargetEtwUnregister @ 0x1409D4044 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1409D4570 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x1409D45EC (ViTargetRemovingCheckEtwWmi.c)
 *     ViErrorFinishReport @ 0x1409D524C (ViErrorFinishReport.c)
 *     VfCheckUserHandle @ 0x1409D7174 (VfCheckUserHandle.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409D7410 (ViShutdownWatchdogExecuteDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1409D7588 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeEnterCriticalRegion @ 0x1409D7B00 (VerifierKeEnterCriticalRegion.c)
 *     VerifierKeLeaveCriticalRegion @ 0x1409D7D80 (VerifierKeLeaveCriticalRegion.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1409D7FE0 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x1409D80A0 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x1409D8170 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1409D8430 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1409D84C0 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeSetEvent @ 0x1409D8600 (VerifierKeSetEvent.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1409D8EE0 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeLowerIrqlSanityChecks @ 0x1409D9128 (ViKeLowerIrqlSanityChecks.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1409D926C (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeReleaseSpinLockCommon @ 0x1409D9350 (ViKeReleaseSpinLockCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409D93C0 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeWaitSanityChecks @ 0x1409D95FC (ViKeWaitSanityChecks.c)
 *     VfPoolCheckForLeaks @ 0x1409DD110 (VfPoolCheckForLeaks.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x1409DD6FC (VfIrpDatabaseCheckExFreePool.c)
 *     ViWdIrpTimedOut @ 0x1409DDF50 (ViWdIrpTimedOut.c)
 *     VerifierExInitializeLookasideListEx @ 0x1409DE190 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1409DE2E0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1409DE400 (VerifierExInitializePagedLookasideList.c)
 *     VfCheckForLookaside @ 0x1409DE508 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x1409DE5A4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409DE6CC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1409DEE10 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409DF1F0 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409DF47C (VfCheckForResource.c)
 *     ViResourceAcquireSanityChecks @ 0x1409DF5C0 (ViResourceAcquireSanityChecks.c)
 *     ViResourceReleaseSanityChecks @ 0x1409DF688 (ViResourceReleaseSanityChecks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x1409E1C20 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1409E1D74 (ViExCheckAPCLevelOrBelow.c)
 *     ViExCheckAPCsDisabled @ 0x1409E1DB4 (ViExCheckAPCsDisabled.c)
 *     VerifierMmAllocateContiguousMemory @ 0x1409E2DD0 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1409E2EC0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1409E2FE0 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1409E3100 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1409E3260 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x1409E3400 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x1409E34F0 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x1409E3610 (VerifierMmBuildMdlForNonPagedPool.c)
 *     VerifierMmMapIoSpace @ 0x1409E3980 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x1409E3AF0 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E3BD0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x1409E3DB0 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x1409E3EA0 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x1409E3FE0 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x1409E4120 (VerifierMmUnmapIoSpace.c)
 *     VerifierMmUnmapLockedPages @ 0x1409E41B0 (VerifierMmUnmapLockedPages.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x1409E4568 (ViMmMapLockedPagesSanityChecks.c)
 *     ViMmValidateIrql @ 0x1409E4660 (ViMmValidateIrql.c)
 *     VerifierObReferenceObjectByHandle @ 0x1409E4B20 (VerifierObReferenceObjectByHandle.c)
 *     VerifierObReferenceObjectByPointer @ 0x1409E4C40 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObfReferenceObject @ 0x1409E4DD0 (VerifierObfReferenceObject.c)
 *     VfZwNotifyChangeKey @ 0x1409E6E50 (VfZwNotifyChangeKey.c)
 *     ViZwCheckApcRequirement @ 0x1409E97D4 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x1409E988C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1409E9924 (ViZwCheckVirtualAddress.c)
 *     ExAllocatePoolSanityChecks @ 0x1409E9DC4 (ExAllocatePoolSanityChecks.c)
 *     ExFreePoolSanityChecks @ 0x1409E9F30 (ExFreePoolSanityChecks.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
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
