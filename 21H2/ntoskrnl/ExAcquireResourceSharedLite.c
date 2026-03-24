/*
 * XREFs of ExAcquireResourceSharedLite @ 0x14034BF60
 * Callers:
 *     IopCreateSecurityCheck @ 0x140201880 (IopCreateSecurityCheck.c)
 *     SepCanTokenMatchAllPackageSid @ 0x14024E5D4 (SepCanTokenMatchAllPackageSid.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x1402519F8 (SeTokenGetNoChildProcessRestricted.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14027CAB0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepTrustLevelCheck @ 0x14027E310 (SepTrustLevelCheck.c)
 *     LdrpKrnGetDataTableEntry @ 0x1402A8F80 (LdrpKrnGetDataTableEntry.c)
 *     MiLookupDataTableEntry @ 0x1402E776C (MiLookupDataTableEntry.c)
 *     SepFilterCheck @ 0x14034ECD0 (SepFilterCheck.c)
 *     SepAcquireOrderedReadLocks @ 0x140360058 (SepAcquireOrderedReadLocks.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403A7F30 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiDeleteBootRange @ 0x1403B5178 (MiDeleteBootRange.c)
 *     McGenControlCallbackV2 @ 0x1403C63A0 (McGenControlCallbackV2.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x1403F8F80 (SeTokenGetRedirectionTrustPolicy.c)
 *     IoFillTriageDumpBuffer @ 0x140501DC0 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x140505040 (KeCapturePersistentThreadState.c)
 *     SepExamineGlobalSaclEx @ 0x140596F28 (SepExamineGlobalSaclEx.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x140597258 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x1405977E0 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     AlpcpExposeTokenAttribute @ 0x1405E8850 (AlpcpExposeTokenAttribute.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmEnumerateValueKey @ 0x1405F4EF0 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x1405F7700 (CmQueryValueKey.c)
 *     SeQuerySecurityAttributesToken @ 0x140600F90 (SeQuerySecurityAttributesToken.c)
 *     NtQuerySecurityAttributesToken @ 0x1406011C0 (NtQuerySecurityAttributesToken.c)
 *     SepValidLabelSubjectContext @ 0x140607A3C (SepValidLabelSubjectContext.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x14061776C (PspQueryJobHierarchyAccountingInformation.c)
 *     PspChargeJobWakeCounter @ 0x140617E18 (PspChargeJobWakeCounter.c)
 *     PspLockJobShared @ 0x14061879C (PspLockJobShared.c)
 *     PspLockRootJobShared @ 0x140618874 (PspLockRootJobShared.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406261B0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14062E878 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlEndOperation @ 0x140633ED8 (PiPnpRtlEndOperation.c)
 *     SeQuerySessionIdTokenEx @ 0x140634440 (SeQuerySessionIdTokenEx.c)
 *     PiDmEnumObjectsWithCallback @ 0x1406350E8 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x140636A6C (PiDmGetObject.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x14063726C (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlGetCurrentOperation @ 0x14063737C (PiPnpRtlGetCurrentOperation.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140639C1C (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x140639C54 (PpDevNodeLockTree.c)
 *     PnpGetDevicePropertyData @ 0x14063A118 (PnpGetDevicePropertyData.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140647204 (FsRtlAcquireFileForCcFlushEx.c)
 *     PspInsertThread @ 0x140649028 (PspInsertThread.c)
 *     IopGetSetSecurityObject @ 0x14064F760 (IopGetSetSecurityObject.c)
 *     SeQueryInformationToken @ 0x140656BD0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140657DF0 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x1406749A0 (NtSetInformationToken.c)
 *     WmipGetSMBiosTableData @ 0x14068276C (WmipGetSMBiosTableData.c)
 *     SeQuerySessionIdToken @ 0x140692F80 (SeQuerySessionIdToken.c)
 *     SepValidOwnerSubjectContext @ 0x14069CE0C (SepValidOwnerSubjectContext.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406AD66C (ExpGetSystemFirmwareTableInformation.c)
 *     PiGetRelatedDevice @ 0x1406AE154 (PiGetRelatedDevice.c)
 *     SeQueryServerSiloToken @ 0x1406B04A0 (SeQueryServerSiloToken.c)
 *     PspSetProcessPriorityClass @ 0x1406B3F80 (PspSetProcessPriorityClass.c)
 *     PspValidateJobAffinityState @ 0x1406B693C (PspValidateJobAffinityState.c)
 *     IopMountVolume @ 0x1406E5720 (IopMountVolume.c)
 *     SeLockSubjectContext @ 0x1406F5E30 (SeLockSubjectContext.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     ObpCreateHandle @ 0x1406F6550 (ObpCreateHandle.c)
 *     NtSetInformationThread @ 0x1406FCE80 (NtSetInformationThread.c)
 *     RtlpNewSecurityObject @ 0x1406FF5F0 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     SepDuplicateToken @ 0x140703E00 (SepDuplicateToken.c)
 *     NtDuplicateToken @ 0x140705150 (NtDuplicateToken.c)
 *     SeQueryUserSidToken @ 0x140706E24 (SeQueryUserSidToken.c)
 *     SeIsTokenAssignableToProcess @ 0x14071694C (SeIsTokenAssignableToProcess.c)
 *     IopReleaseDeviceResources @ 0x140738748 (IopReleaseDeviceResources.c)
 *     PiProcessNewDeviceNode @ 0x140744490 (PiProcessNewDeviceNode.c)
 *     PiUpdateDevicePanel @ 0x140748294 (PiUpdateDevicePanel.c)
 *     PiPnpRtlObjectEventWorker @ 0x14074A010 (PiPnpRtlObjectEventWorker.c)
 *     PipProcessStartPhase3 @ 0x14074AB70 (PipProcessStartPhase3.c)
 *     PiCreateDeviceInstanceKey @ 0x14074CB14 (PiCreateDeviceInstanceKey.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14074F64C (IopWriteAllocatedResourcesToRegistry.c)
 *     PiQueryAndAllocateBootResources @ 0x14075028C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140750B94 (PiQueryResourceRequirements.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14076B26C (IopSetDeviceSecurityDescriptor.c)
 *     PipMakeGloballyUniqueId @ 0x14076C400 (PipMakeGloballyUniqueId.c)
 *     PipGenerateContainerID @ 0x14076E528 (PipGenerateContainerID.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B820 (IopInvalidateVolumesForDevice.c)
 *     MmEnumerateSystemImages @ 0x140797DE0 (MmEnumerateSystemImages.c)
 *     IoCreateDriver @ 0x1407A4F00 (IoCreateDriver.c)
 *     MiLogPinDriverAddress @ 0x1407B4E84 (MiLogPinDriverAddress.c)
 *     SepGetLogonSessionAccountInfo @ 0x1407B8DFC (SepGetLogonSessionAccountInfo.c)
 *     MmIsDriverVerifyingByAddress @ 0x1407D2BD0 (MmIsDriverVerifyingByAddress.c)
 *     PnpDriverLoadingFailed @ 0x1407D2C50 (PnpDriverLoadingFailed.c)
 *     FsRtlCopyRead @ 0x14088A610 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14088A890 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14088B050 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088B2B0 (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x140891718 (IopInitializeBootLogging.c)
 *     PnpShutdownDevices @ 0x14089B94C (PnpShutdownDevices.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1408A0D30 (PnpGetDeviceInstancePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408A2960 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1408A317C (PiPnpRtlEnsureObjectCached.c)
 *     PiDmGetObjectCount @ 0x1408A348C (PiDmGetObjectCount.c)
 *     KiTraceLogNmiCallback @ 0x1408BB27C (KiTraceLogNmiCallback.c)
 *     MmGetSectionRange @ 0x1408C81E8 (MmGetSectionRange.c)
 *     PsSwapProcessWorkingSet @ 0x1409079E0 (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x1409085C4 (PspSetProcessAffinitySafe.c)
 *     RtlPcToFilePath @ 0x140919200 (RtlPcToFilePath.c)
 *     SeSetSessionIdTokenWithLinked @ 0x14091C940 (SeSetSessionIdTokenWithLinked.c)
 *     SepIdAssignableAsGroup @ 0x1409210C8 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x140922AE4 (SeGetTokenControlInformation.c)
 *     SeExamineGlobalSacl @ 0x140924A18 (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140924B38 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x140924BF0 (SepRmGlobalSaclFind.c)
 *     WmipFindSMBiosStructure @ 0x1409317F8 (WmipFindSMBiosStructure.c)
 *     NtMapCMFModule @ 0x140959B20 (NtMapCMFModule.c)
 *     VfDriverEnableVerifier @ 0x1409C8620 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C87B8 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x14034C060 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x14038F380 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14038FB6C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
