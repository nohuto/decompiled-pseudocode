/*
 * XREFs of ExAcquireResourceSharedLite @ 0x140222030
 * Callers:
 *     SepAcquireOrderedReadLocks @ 0x140204DAC (SepAcquireOrderedReadLocks.c)
 *     SepFilterCheck @ 0x140224E20 (SepFilterCheck.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140229080 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepTrustLevelCheck @ 0x14022AA60 (SepTrustLevelCheck.c)
 *     SepCanTokenMatchAllPackageSid @ 0x14022B2D4 (SepCanTokenMatchAllPackageSid.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x1402E2248 (SeTokenGetNoChildProcessRestricted.c)
 *     LdrpKrnGetDataTableEntry @ 0x1402FE240 (LdrpKrnGetDataTableEntry.c)
 *     MiLookupDataTableEntry @ 0x14030CDEC (MiLookupDataTableEntry.c)
 *     IopCreateSecurityCheck @ 0x140323A1C (IopCreateSecurityCheck.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403ADF80 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiDeleteBootRange @ 0x1403B3AF8 (MiDeleteBootRange.c)
 *     McGenControlCallbackV2 @ 0x1403C59B0 (McGenControlCallbackV2.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x1403F724C (SeTokenGetRedirectionTrustPolicy.c)
 *     IoFillTriageDumpBuffer @ 0x140500240 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x1405034C0 (KeCapturePersistentThreadState.c)
 *     SepExamineGlobalSaclEx @ 0x1405954F8 (SepExamineGlobalSaclEx.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x140595828 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x140595DB0 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SepFilterToken @ 0x1405D7198 (SepFilterToken.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E3AB0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtDuplicateToken @ 0x1405E7D20 (NtDuplicateToken.c)
 *     AlpcpExposeTokenAttribute @ 0x1405EFE90 (AlpcpExposeTokenAttribute.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405F3F40 (CmpCheckOpenAccessOnKeyBody.c)
 *     IopGetSetSecurityObject @ 0x1405F9B20 (IopGetSetSecurityObject.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     SepDuplicateToken @ 0x140601150 (SepDuplicateToken.c)
 *     RtlpNewSecurityObject @ 0x140602BE0 (RtlpNewSecurityObject.c)
 *     SeQueryInformationToken @ 0x14060D9F0 (SeQueryInformationToken.c)
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 *     SeLockSubjectContext @ 0x1406168B0 (SeLockSubjectContext.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     ObpCreateHandle @ 0x140616FD0 (ObpCreateHandle.c)
 *     NtQueryInformationToken @ 0x14061D520 (NtQueryInformationToken.c)
 *     NtQuerySecurityAttributesToken @ 0x14061FC20 (NtQuerySecurityAttributesToken.c)
 *     PspValidateJobAffinityState @ 0x14062D4B4 (PspValidateJobAffinityState.c)
 *     SepValidLabelSubjectContext @ 0x1406305E4 (SepValidLabelSubjectContext.c)
 *     SeQuerySessionIdTokenEx @ 0x14063BB10 (SeQuerySessionIdTokenEx.c)
 *     PiDmEnumObjectsWithCallback @ 0x14063D318 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x14063EC9C (PiDmGetObject.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x14063F49C (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlGetCurrentOperation @ 0x14063F5AC (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlEndOperation @ 0x14064120C (PiPnpRtlEndOperation.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140646A00 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     SeQueryUserSidToken @ 0x140656B0C (SeQueryUserSidToken.c)
 *     WmipGetSMBiosTableData @ 0x14065C898 (WmipGetSMBiosTableData.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140664CEC (PspQueryJobHierarchyAccountingInformation.c)
 *     PspChargeJobWakeCounter @ 0x140665398 (PspChargeJobWakeCounter.c)
 *     PspLockJobShared @ 0x140665D1C (PspLockJobShared.c)
 *     PspLockRootJobShared @ 0x140665DF4 (PspLockRootJobShared.c)
 *     CmEnumerateValueKey @ 0x140677BB0 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x14067A400 (CmQueryValueKey.c)
 *     PspInsertThread @ 0x1406867E0 (PspInsertThread.c)
 *     SeQuerySecurityAttributesToken @ 0x140690210 (SeQuerySecurityAttributesToken.c)
 *     NtSetInformationToken @ 0x1406AB220 (NtSetInformationToken.c)
 *     SeQuerySessionIdToken @ 0x1406B9DE0 (SeQuerySessionIdToken.c)
 *     SepValidOwnerSubjectContext @ 0x1406C1D3C (SepValidOwnerSubjectContext.c)
 *     IopMountVolume @ 0x1406CC9E8 (IopMountVolume.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406CF14C (ExpGetSystemFirmwareTableInformation.c)
 *     SeIsTokenAssignableToProcess @ 0x1406D0B80 (SeIsTokenAssignableToProcess.c)
 *     SeQueryServerSiloToken @ 0x1406D1C50 (SeQueryServerSiloToken.c)
 *     PspSetProcessPriorityClass @ 0x1406D5AB4 (PspSetProcessPriorityClass.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14070828C (FsRtlAcquireFileForCcFlushEx.c)
 *     PnpGetDevicePropertyData @ 0x14070F9B8 (PnpGetDevicePropertyData.c)
 *     PiGetRelatedDevice @ 0x14071F384 (PiGetRelatedDevice.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14071FAB4 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x14071FAEC (PpDevNodeLockTree.c)
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x140739750 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x140739E1C (PiUpdateDevicePanel.c)
 *     IopReleaseDeviceResources @ 0x14074164C (IopReleaseDeviceResources.c)
 *     PiCreateDeviceInstanceKey @ 0x140742C58 (PiCreateDeviceInstanceKey.c)
 *     PiPnpRtlObjectEventWorker @ 0x140745470 (PiPnpRtlObjectEventWorker.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140748A8C (IopWriteAllocatedResourcesToRegistry.c)
 *     PiQueryAndAllocateBootResources @ 0x1407496CC (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140749FD4 (PiQueryResourceRequirements.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1407670DC (IopSetDeviceSecurityDescriptor.c)
 *     PipMakeGloballyUniqueId @ 0x140767F84 (PipMakeGloballyUniqueId.c)
 *     PipGenerateContainerID @ 0x14076A248 (PipGenerateContainerID.c)
 *     IopInvalidateVolumesForDevice @ 0x140777870 (IopInvalidateVolumesForDevice.c)
 *     MmEnumerateSystemImages @ 0x14078DA30 (MmEnumerateSystemImages.c)
 *     IoCreateDriver @ 0x14079A9E0 (IoCreateDriver.c)
 *     MiLogPinDriverAddress @ 0x1407B1614 (MiLogPinDriverAddress.c)
 *     SepGetLogonSessionAccountInfo @ 0x1407B4198 (SepGetLogonSessionAccountInfo.c)
 *     MmIsDriverVerifyingByAddress @ 0x1407CE7E0 (MmIsDriverVerifyingByAddress.c)
 *     PnpDriverLoadingFailed @ 0x1407CE860 (PnpDriverLoadingFailed.c)
 *     FsRtlCopyRead @ 0x14088D070 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14088D2F0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14088DAB0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088DD10 (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x140894150 (IopInitializeBootLogging.c)
 *     PnpShutdownDevices @ 0x14089E37C (PnpShutdownDevices.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1408A3760 (PnpGetDeviceInstancePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408A5390 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A5BAC (PiPnpRtlEnsureObjectCached.c)
 *     PiDmGetObjectCount @ 0x1408A5EBC (PiDmGetObjectCount.c)
 *     KiTraceLogNmiCallback @ 0x1408BDD9C (KiTraceLogNmiCallback.c)
 *     MmGetSectionRange @ 0x1408CAA28 (MmGetSectionRange.c)
 *     PsSwapProcessWorkingSet @ 0x14090A230 (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x14090AE14 (PspSetProcessAffinitySafe.c)
 *     RtlPcToFilePath @ 0x14091BA40 (RtlPcToFilePath.c)
 *     SeSetSessionIdTokenWithLinked @ 0x14091F180 (SeSetSessionIdTokenWithLinked.c)
 *     SepIdAssignableAsGroup @ 0x140923900 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x140925314 (SeGetTokenControlInformation.c)
 *     SeExamineGlobalSacl @ 0x140927248 (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140927368 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x140927420 (SepRmGlobalSaclFind.c)
 *     WmipFindSMBiosStructure @ 0x140934028 (WmipFindSMBiosStructure.c)
 *     NtMapCMFModule @ 0x14095C2A0 (NtMapCMFModule.c)
 *     VfDriverEnableVerifier @ 0x1409CB630 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1409CB7C8 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x140222130 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x14038EE40 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14038F66C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall ExAcquireResourceSharedLite(PERESOURCE Resource, BOOLEAN Wait)
{
  PERESOURCE v2; // rbx
  __int16 v4; // ax
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *CurrentThread; // r8
  void *OwnerEntryForLegacyShim; // rsi
  BOOLEAN v9; // bl

  v2 = Resource;
  LOBYTE(Resource) = (Wait == 0) + 1;
  if ( (v2->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v2, 0LL, 0LL);
  v4 = v2->Flag & 1;
  if ( v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > (unsigned __int8)Resource )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, (unsigned __int8)Resource, 0LL);
    if ( CurrentIrql >= 2u )
    {
      LODWORD(Resource) = KeGetPcr()->Prcb.DpcRequestSummary;
      if ( ((unsigned int)Resource & 0x10001) != 0 )
        KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    }
    if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( !v4 )
    return ExpAcquireResourceSharedLite(v2, Wait);
  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(Resource);
  v9 = ExAcquireFastResourceShared((ULONG_PTR)v2, (ULONG_PTR)OwnerEntryForLegacyShim);
  if ( !v9 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v9;
}
