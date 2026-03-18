/*
 * XREFs of ExAcquireResourceSharedLite @ 0x1402090B0
 * Callers:
 *     SeTokenGetNoChildProcessRestricted @ 0x140268348 (SeTokenGetNoChildProcessRestricted.c)
 *     SepTrustLevelCheck @ 0x14026DC30 (SepTrustLevelCheck.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140294C80 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepFilterCheck @ 0x14029CDC0 (SepFilterCheck.c)
 *     MiLookupDataTableEntry @ 0x1402DFB98 (MiLookupDataTableEntry.c)
 *     SepCanTokenMatchAllPackageSid @ 0x140332C40 (SepCanTokenMatchAllPackageSid.c)
 *     IopCreateSecurityCheck @ 0x140333A14 (IopCreateSecurityCheck.c)
 *     SepAcquireOrderedReadLocks @ 0x140342B88 (SepAcquireOrderedReadLocks.c)
 *     LdrpKrnGetDataTableEntry @ 0x140362050 (LdrpKrnGetDataTableEntry.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403AB9B0 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiDeleteBootRange @ 0x1403B1188 (MiDeleteBootRange.c)
 *     McGenControlCallbackV2 @ 0x1403C3240 (McGenControlCallbackV2.c)
 *     IoFillTriageDumpBuffer @ 0x1404FC970 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x1404FFBF0 (KeCapturePersistentThreadState.c)
 *     SepExamineGlobalSaclEx @ 0x140591A58 (SepExamineGlobalSaclEx.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x140591D88 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x140592310 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405D1C7C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlEndOperation @ 0x1405D7864 (PiPnpRtlEndOperation.c)
 *     SeQuerySessionIdTokenEx @ 0x1405D7DD0 (SeQuerySessionIdTokenEx.c)
 *     PiDmEnumObjectsWithCallback @ 0x1405D8A38 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1405DA3BC (PiDmGetObject.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1405DABBC (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1405DACCC (PiPnpRtlGetCurrentOperation.c)
 *     CmEnumerateValueKey @ 0x1405E9400 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x1405EB260 (CmQueryValueKey.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405ECE00 (CmpCheckOpenAccessOnKeyBody.c)
 *     SeLockSubjectContext @ 0x1405F3C80 (SeLockSubjectContext.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     ObpCreateHandle @ 0x1405F6330 (ObpCreateHandle.c)
 *     SeQuerySecurityAttributesToken @ 0x1406179D0 (SeQuerySecurityAttributesToken.c)
 *     SepValidLabelSubjectContext @ 0x1406183C8 (SepValidLabelSubjectContext.c)
 *     SeQueryUserSidToken @ 0x1406259FC (SeQueryUserSidToken.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140627300 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtDuplicateToken @ 0x14062BB00 (NtDuplicateToken.c)
 *     SepFilterToken @ 0x140632E90 (SepFilterToken.c)
 *     IopMountVolume @ 0x140634C68 (IopMountVolume.c)
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     SepDuplicateToken @ 0x1406795C0 (SepDuplicateToken.c)
 *     RtlpNewSecurityObject @ 0x14067B050 (RtlpNewSecurityObject.c)
 *     NtQueryInformationToken @ 0x14067EC80 (NtQueryInformationToken.c)
 *     NtQuerySecurityAttributesToken @ 0x140681C30 (NtQuerySecurityAttributesToken.c)
 *     AlpcpExposeTokenAttribute @ 0x1406837B0 (AlpcpExposeTokenAttribute.c)
 *     PspChargeJobWakeCounter @ 0x14068A1E0 (PspChargeJobWakeCounter.c)
 *     PspLockJobShared @ 0x14068AB5C (PspLockJobShared.c)
 *     PspLockRootJobShared @ 0x14068AC34 (PspLockRootJobShared.c)
 *     IopGetSetSecurityObject @ 0x14068C9D0 (IopGetSetSecurityObject.c)
 *     SeQueryInformationToken @ 0x140693460 (SeQueryInformationToken.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14069797C (FsRtlAcquireFileForCcFlushEx.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140699E9C (PspQueryJobHierarchyAccountingInformation.c)
 *     PiGetRelatedDevice @ 0x1406A56C4 (PiGetRelatedDevice.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A5DF4 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x1406A5E2C (PpDevNodeLockTree.c)
 *     PspInsertThread @ 0x1406AE2E4 (PspInsertThread.c)
 *     NtSetInformationToken @ 0x1406B9BC0 (NtSetInformationToken.c)
 *     WmipGetSMBiosTableData @ 0x1406DE5D4 (WmipGetSMBiosTableData.c)
 *     SeQuerySessionIdToken @ 0x1406E2750 (SeQuerySessionIdToken.c)
 *     SeIsTokenAssignableToProcess @ 0x1406E848C (SeIsTokenAssignableToProcess.c)
 *     SepValidOwnerSubjectContext @ 0x1406EDDBC (SepValidOwnerSubjectContext.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406FC96C (ExpGetSystemFirmwareTableInformation.c)
 *     SeQueryServerSiloToken @ 0x1406FF000 (SeQueryServerSiloToken.c)
 *     PspSetProcessPriorityClass @ 0x140702AB4 (PspSetProcessPriorityClass.c)
 *     PspValidateJobAffinityState @ 0x14070494C (PspValidateJobAffinityState.c)
 *     PnpGetDevicePropertyData @ 0x1407118E8 (PnpGetDevicePropertyData.c)
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x14072ACC0 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x14072B38C (PiUpdateDevicePanel.c)
 *     IopReleaseDeviceResources @ 0x1407322A4 (IopReleaseDeviceResources.c)
 *     PiCreateDeviceInstanceKey @ 0x1407337C8 (PiCreateDeviceInstanceKey.c)
 *     PiPnpRtlObjectEventWorker @ 0x140735FE0 (PiPnpRtlObjectEventWorker.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140739B7C (IopWriteAllocatedResourcesToRegistry.c)
 *     PiQueryAndAllocateBootResources @ 0x14073A7BC (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x14073B0C4 (PiQueryResourceRequirements.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14075849C (IopSetDeviceSecurityDescriptor.c)
 *     PipMakeGloballyUniqueId @ 0x1407597C8 (PipMakeGloballyUniqueId.c)
 *     PipGenerateContainerID @ 0x14075B958 (PipGenerateContainerID.c)
 *     IopInvalidateVolumesForDevice @ 0x140769260 (IopInvalidateVolumesForDevice.c)
 *     MmEnumerateSystemImages @ 0x140780120 (MmEnumerateSystemImages.c)
 *     IoCreateDriver @ 0x14078E2A0 (IoCreateDriver.c)
 *     MiLogPinDriverAddress @ 0x1407A22E4 (MiLogPinDriverAddress.c)
 *     SepGetLogonSessionAccountInfo @ 0x1407A5048 (SepGetLogonSessionAccountInfo.c)
 *     MmIsDriverVerifyingByAddress @ 0x1407BFF50 (MmIsDriverVerifyingByAddress.c)
 *     PnpDriverLoadingFailed @ 0x1407BFFD0 (PnpDriverLoadingFailed.c)
 *     FsRtlCopyRead @ 0x140887520 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1408877A0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x140887F60 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1408881C0 (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x14088E690 (IopInitializeBootLogging.c)
 *     PnpShutdownDevices @ 0x14089884C (PnpShutdownDevices.c)
 *     PnpGetDeviceInstancePropertyData @ 0x14089DC30 (PnpGetDeviceInstancePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14089F860 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A007C (PiPnpRtlEnsureObjectCached.c)
 *     PiDmGetObjectCount @ 0x1408A038C (PiDmGetObjectCount.c)
 *     KiTraceLogNmiCallback @ 0x1408B817C (KiTraceLogNmiCallback.c)
 *     MmGetSectionRange @ 0x1408C4BE8 (MmGetSectionRange.c)
 *     PsSwapProcessWorkingSet @ 0x140904610 (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x1409051F4 (PspSetProcessAffinitySafe.c)
 *     RtlPcToFilePath @ 0x140915E10 (RtlPcToFilePath.c)
 *     SeSetSessionIdTokenWithLinked @ 0x140919510 (SeSetSessionIdTokenWithLinked.c)
 *     SepIdAssignableAsGroup @ 0x14091DC80 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x14091F694 (SeGetTokenControlInformation.c)
 *     SeExamineGlobalSacl @ 0x140921428 (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140921548 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x140921600 (SepRmGlobalSaclFind.c)
 *     WmipFindSMBiosStructure @ 0x14092E1F8 (WmipFindSMBiosStructure.c)
 *     NtMapCMFModule @ 0x1409564E0 (NtMapCMFModule.c)
 *     VfDriverEnableVerifier @ 0x1409C5610 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C57A8 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x1402091B0 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x14038C980 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14038D1AC (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
