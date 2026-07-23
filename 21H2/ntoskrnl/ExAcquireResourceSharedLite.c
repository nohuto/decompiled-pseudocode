/*
 * XREFs of ExAcquireResourceSharedLite @ 0x140356CB0
 * Callers:
 *     IopCreateSecurityCheck @ 0x140225208 (IopCreateSecurityCheck.c)
 *     LdrpKrnGetDataTableEntry @ 0x1402270C0 (LdrpKrnGetDataTableEntry.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14026AA50 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepTrustLevelCheck @ 0x14026C2B0 (SepTrustLevelCheck.c)
 *     MiLookupDataTableEntry @ 0x140298ABC (MiLookupDataTableEntry.c)
 *     SepAcquireOrderedReadLocks @ 0x1402A4F88 (SepAcquireOrderedReadLocks.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1402F2E24 (SepCanTokenMatchAllPackageSid.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x1402F6208 (SeTokenGetNoChildProcessRestricted.c)
 *     SepFilterCheck @ 0x140359A20 (SepFilterCheck.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403A8CC0 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiDeleteBootRange @ 0x1403B52E8 (MiDeleteBootRange.c)
 *     McGenControlCallbackV2 @ 0x1403C6540 (McGenControlCallbackV2.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x1403F9004 (SeTokenGetRedirectionTrustPolicy.c)
 *     IoFillTriageDumpBuffer @ 0x140501D40 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x140504FC0 (KeCapturePersistentThreadState.c)
 *     SepExamineGlobalSaclEx @ 0x140597158 (SepExamineGlobalSaclEx.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x140597488 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x140597A10 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     IopMountVolume @ 0x1405DB490 (IopMountVolume.c)
 *     WmipGetSMBiosTableData @ 0x1405E4738 (WmipGetSMBiosTableData.c)
 *     SeQuerySessionIdToken @ 0x1405F2610 (SeQuerySessionIdToken.c)
 *     SepValidOwnerSubjectContext @ 0x1405FBEDC (SepValidOwnerSubjectContext.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14060BD5C (ExpGetSystemFirmwareTableInformation.c)
 *     PiGetRelatedDevice @ 0x14060C9F4 (PiGetRelatedDevice.c)
 *     SeQueryServerSiloToken @ 0x14060EDA0 (SeQueryServerSiloToken.c)
 *     PspSetProcessPriorityClass @ 0x140613150 (PspSetProcessPriorityClass.c)
 *     PspValidateJobAffinityState @ 0x140615DFC (PspValidateJobAffinityState.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140623900 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlEndOperation @ 0x140628F64 (PiPnpRtlEndOperation.c)
 *     PiDmEnumObjectsWithCallback @ 0x140629EF8 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x14062B87C (PiDmGetObject.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x14062C07C (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlGetCurrentOperation @ 0x14062C18C (PiPnpRtlGetCurrentOperation.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14062EA2C (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 *     PnpGetDevicePropertyData @ 0x14062EF28 (PnpGetDevicePropertyData.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14063BFF4 (FsRtlAcquireFileForCcFlushEx.c)
 *     PspInsertThread @ 0x14063DE48 (PspInsertThread.c)
 *     IopGetSetSecurityObject @ 0x140644580 (IopGetSetSecurityObject.c)
 *     SeQueryInformationToken @ 0x14064B9F0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x14064CC10 (NtQueryInformationToken.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1406813CC (PspQueryJobHierarchyAccountingInformation.c)
 *     PspChargeJobWakeCounter @ 0x140681A78 (PspChargeJobWakeCounter.c)
 *     PspLockJobShared @ 0x1406823FC (PspLockJobShared.c)
 *     PspLockRootJobShared @ 0x1406824D4 (PspLockRootJobShared.c)
 *     SeQuerySessionIdTokenEx @ 0x14068FA10 (SeQuerySessionIdTokenEx.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406922C0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtSetInformationToken @ 0x140694530 (NtSetInformationToken.c)
 *     SepValidLabelSubjectContext @ 0x1406974CC (SepValidLabelSubjectContext.c)
 *     SeIsTokenAssignableToProcess @ 0x1406C4F9C (SeIsTokenAssignableToProcess.c)
 *     SepFilterToken @ 0x1406CA87C (SepFilterToken.c)
 *     AlpcpExposeTokenAttribute @ 0x1406D7FB0 (AlpcpExposeTokenAttribute.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1406DBF40 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmEnumerateValueKey @ 0x1406E4650 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x1406E6E60 (CmQueryValueKey.c)
 *     SeQuerySecurityAttributesToken @ 0x1406F06F0 (SeQuerySecurityAttributesToken.c)
 *     NtQuerySecurityAttributesToken @ 0x1406F0920 (NtQuerySecurityAttributesToken.c)
 *     SeLockSubjectContext @ 0x14070D210 (SeLockSubjectContext.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     ObpCreateHandle @ 0x14070D930 (ObpCreateHandle.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     RtlpNewSecurityObject @ 0x1407169D0 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     SepDuplicateToken @ 0x14071B1E0 (SepDuplicateToken.c)
 *     NtDuplicateToken @ 0x14071C530 (NtDuplicateToken.c)
 *     SeQueryUserSidToken @ 0x14071E204 (SeQueryUserSidToken.c)
 *     IopReleaseDeviceResources @ 0x140738908 (IopReleaseDeviceResources.c)
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 *     PiUpdateDevicePanel @ 0x140748454 (PiUpdateDevicePanel.c)
 *     PiPnpRtlObjectEventWorker @ 0x14074A1D0 (PiPnpRtlObjectEventWorker.c)
 *     PipProcessStartPhase3 @ 0x14074AD30 (PipProcessStartPhase3.c)
 *     PiCreateDeviceInstanceKey @ 0x14074CCD4 (PiCreateDeviceInstanceKey.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14074F80C (IopWriteAllocatedResourcesToRegistry.c)
 *     PiQueryAndAllocateBootResources @ 0x14075044C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140750D54 (PiQueryResourceRequirements.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14076B42C (IopSetDeviceSecurityDescriptor.c)
 *     PipMakeGloballyUniqueId @ 0x14076C5C0 (PipMakeGloballyUniqueId.c)
 *     PipGenerateContainerID @ 0x14076E6E8 (PipGenerateContainerID.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B9E0 (IopInvalidateVolumesForDevice.c)
 *     MmEnumerateSystemImages @ 0x140797FE0 (MmEnumerateSystemImages.c)
 *     IoCreateDriver @ 0x1407A5100 (IoCreateDriver.c)
 *     MiLogPinDriverAddress @ 0x1407B67A4 (MiLogPinDriverAddress.c)
 *     SepGetLogonSessionAccountInfo @ 0x1407B931C (SepGetLogonSessionAccountInfo.c)
 *     MmIsDriverVerifyingByAddress @ 0x1407D2D40 (MmIsDriverVerifyingByAddress.c)
 *     PnpDriverLoadingFailed @ 0x1407D2DC0 (PnpDriverLoadingFailed.c)
 *     FsRtlCopyRead @ 0x14088A770 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14088A9F0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14088B1B0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088B410 (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x140891878 (IopInitializeBootLogging.c)
 *     PnpShutdownDevices @ 0x14089BAAC (PnpShutdownDevices.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1408A0E90 (PnpGetDeviceInstancePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408A2AC0 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A32DC (PiPnpRtlEnsureObjectCached.c)
 *     PiDmGetObjectCount @ 0x1408A35EC (PiDmGetObjectCount.c)
 *     KiTraceLogNmiCallback @ 0x1408BB3DC (KiTraceLogNmiCallback.c)
 *     MmGetSectionRange @ 0x1408C8348 (MmGetSectionRange.c)
 *     PsSwapProcessWorkingSet @ 0x140907B40 (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x140908724 (PspSetProcessAffinitySafe.c)
 *     RtlPcToFilePath @ 0x140919360 (RtlPcToFilePath.c)
 *     SeSetSessionIdTokenWithLinked @ 0x14091CAA0 (SeSetSessionIdTokenWithLinked.c)
 *     SepIdAssignableAsGroup @ 0x140921228 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x140922C44 (SeGetTokenControlInformation.c)
 *     SeExamineGlobalSacl @ 0x140924B78 (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140924C98 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x140924D50 (SepRmGlobalSaclFind.c)
 *     WmipFindSMBiosStructure @ 0x140931958 (WmipFindSMBiosStructure.c)
 *     NtMapCMFModule @ 0x140959CF0 (NtMapCMFModule.c)
 *     VfDriverEnableVerifier @ 0x1409C9620 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C97B8 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x140356DB0 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x14038F4D0 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14038FCBC (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
