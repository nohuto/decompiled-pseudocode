/*
 * XREFs of ExAcquireResourceSharedLite @ 0x140261FD0
 * Callers:
 *     SepTrustLevelCheck @ 0x140204950 (SepTrustLevelCheck.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1402052A8 (SepCanTokenMatchAllPackageSid.c)
 *     SepFilterCheck @ 0x14020A2B0 (SepFilterCheck.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140258400 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     IopCreateSecurityCheck @ 0x1402F6C58 (IopCreateSecurityCheck.c)
 *     SepAcquireOrderedReadLocks @ 0x140305128 (SepAcquireOrderedReadLocks.c)
 *     MiLookupDataTableEntry @ 0x140324C98 (MiLookupDataTableEntry.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x140339C30 (SeTokenGetNoChildProcessRestricted.c)
 *     LdrpKrnGetDataTableEntry @ 0x14033B390 (LdrpKrnGetDataTableEntry.c)
 *     MiDeleteBootRange @ 0x1403AB508 (MiDeleteBootRange.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403AF6D0 (MmVerifyCallbackFunctionCheckFlags.c)
 *     McGenControlCallbackV2 @ 0x1403C2380 (McGenControlCallbackV2.c)
 *     IoFillTriageDumpBuffer @ 0x1404FC320 (IoFillTriageDumpBuffer.c)
 *     KeCapturePersistentThreadState @ 0x1404FF5A0 (KeCapturePersistentThreadState.c)
 *     SepExamineGlobalSaclEx @ 0x140591368 (SepExamineGlobalSaclEx.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x140591698 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x140591C20 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E1B90 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     IopGetSetSecurityObject @ 0x1405E3500 (IopGetSetSecurityObject.c)
 *     SeQueryInformationToken @ 0x1405E9F20 (SeQueryInformationToken.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1405EE47C (FsRtlAcquireFileForCcFlushEx.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1405F098C (PspQueryJobHierarchyAccountingInformation.c)
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     SepDuplicateToken @ 0x1406014E0 (SepDuplicateToken.c)
 *     RtlpNewSecurityObject @ 0x140602F70 (RtlpNewSecurityObject.c)
 *     NtQueryInformationToken @ 0x140606BA0 (NtQueryInformationToken.c)
 *     NtQuerySecurityAttributesToken @ 0x140609AE0 (NtQuerySecurityAttributesToken.c)
 *     AlpcpExposeTokenAttribute @ 0x14060B640 (AlpcpExposeTokenAttribute.c)
 *     PspChargeJobWakeCounter @ 0x140612060 (PspChargeJobWakeCounter.c)
 *     PspLockJobShared @ 0x1406129DC (PspLockJobShared.c)
 *     PspLockRootJobShared @ 0x140612AB4 (PspLockRootJobShared.c)
 *     CmEnumerateValueKey @ 0x14061EA20 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x140620880 (CmQueryValueKey.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140622420 (CmpCheckOpenAccessOnKeyBody.c)
 *     SeLockSubjectContext @ 0x1406291F0 (SeLockSubjectContext.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     ObpCreateHandle @ 0x14062B8A0 (ObpCreateHandle.c)
 *     NtDuplicateToken @ 0x1406496B0 (NtDuplicateToken.c)
 *     SeQueryUserSidToken @ 0x14066B11C (SeQueryUserSidToken.c)
 *     SepValidLabelSubjectContext @ 0x14066FAE8 (SepValidLabelSubjectContext.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1406A055C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlEndOperation @ 0x1406A5E98 (PiPnpRtlEndOperation.c)
 *     SeQuerySessionIdTokenEx @ 0x1406A6400 (SeQuerySessionIdTokenEx.c)
 *     PiDmEnumObjectsWithCallback @ 0x1406A7068 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1406A89EC (PiDmGetObject.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1406A91EC (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1406A92FC (PiPnpRtlGetCurrentOperation.c)
 *     SeQuerySecurityAttributesToken @ 0x1406AB1C0 (SeQuerySecurityAttributesToken.c)
 *     WmipGetSMBiosTableData @ 0x1406BD244 (WmipGetSMBiosTableData.c)
 *     SeQuerySessionIdToken @ 0x1406C21D0 (SeQuerySessionIdToken.c)
 *     SeIsTokenAssignableToProcess @ 0x1406C7DCC (SeIsTokenAssignableToProcess.c)
 *     SepValidOwnerSubjectContext @ 0x1406CCABC (SepValidOwnerSubjectContext.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406D8DBC (ExpGetSystemFirmwareTableInformation.c)
 *     SeQueryServerSiloToken @ 0x1406DC060 (SeQueryServerSiloToken.c)
 *     PspSetProcessPriorityClass @ 0x1406DFD24 (PspSetProcessPriorityClass.c)
 *     PspValidateJobAffinityState @ 0x1406E1FCC (PspValidateJobAffinityState.c)
 *     PnpGetDevicePropertyData @ 0x1406EDF58 (PnpGetDevicePropertyData.c)
 *     PspInsertThread @ 0x1406F3184 (PspInsertThread.c)
 *     NtSetInformationToken @ 0x1406F7D00 (NtSetInformationToken.c)
 *     IopMountVolume @ 0x140701D54 (IopMountVolume.c)
 *     SepFilterToken @ 0x1407030D4 (SepFilterToken.c)
 *     PiGetRelatedDevice @ 0x14070FFF4 (PiGetRelatedDevice.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140710724 (PnpAcquireDependencyRelationsLock.c)
 *     PpDevNodeLockTree @ 0x14071075C (PpDevNodeLockTree.c)
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     PiUpdateDevicePanel @ 0x14072D924 (PiUpdateDevicePanel.c)
 *     PiPnpRtlObjectEventWorker @ 0x14072EEE0 (PiPnpRtlObjectEventWorker.c)
 *     PipProcessStartPhase3 @ 0x14073045C (PipProcessStartPhase3.c)
 *     IopReleaseDeviceResources @ 0x140733F88 (IopReleaseDeviceResources.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140737FFC (IopWriteAllocatedResourcesToRegistry.c)
 *     PiQueryAndAllocateBootResources @ 0x140738C3C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140739544 (PiQueryResourceRequirements.c)
 *     PiCreateDeviceInstanceKey @ 0x1407525E8 (PiCreateDeviceInstanceKey.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14075652C (IopSetDeviceSecurityDescriptor.c)
 *     PipMakeGloballyUniqueId @ 0x140757BAC (PipMakeGloballyUniqueId.c)
 *     PipGenerateContainerID @ 0x140759D50 (PipGenerateContainerID.c)
 *     IopInvalidateVolumesForDevice @ 0x140766E80 (IopInvalidateVolumesForDevice.c)
 *     MmEnumerateSystemImages @ 0x140780B00 (MmEnumerateSystemImages.c)
 *     IoCreateDriver @ 0x14078C3D0 (IoCreateDriver.c)
 *     MiLogPinDriverAddress @ 0x14079E304 (MiLogPinDriverAddress.c)
 *     SepGetLogonSessionAccountInfo @ 0x1407A27FC (SepGetLogonSessionAccountInfo.c)
 *     MmIsDriverVerifyingByAddress @ 0x1407BCDE0 (MmIsDriverVerifyingByAddress.c)
 *     PnpDriverLoadingFailed @ 0x1407BCE60 (PnpDriverLoadingFailed.c)
 *     FsRtlCopyRead @ 0x140886200 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140886480 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x140886C40 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140886EA0 (FsRtlPrepareMdlWriteDev.c)
 *     IopInitializeBootLogging @ 0x14088D370 (IopInitializeBootLogging.c)
 *     PnpShutdownDevices @ 0x14089752C (PnpShutdownDevices.c)
 *     PnpGetDeviceInstancePropertyData @ 0x14089C910 (PnpGetDeviceInstancePropertyData.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14089E540 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14089ED5C (PiPnpRtlEnsureObjectCached.c)
 *     PiDmGetObjectCount @ 0x14089F06C (PiDmGetObjectCount.c)
 *     KiTraceLogNmiCallback @ 0x1408B6E5C (KiTraceLogNmiCallback.c)
 *     MmGetSectionRange @ 0x1408C3898 (MmGetSectionRange.c)
 *     PsSwapProcessWorkingSet @ 0x140903330 (PsSwapProcessWorkingSet.c)
 *     PspSetProcessAffinitySafe @ 0x140903F14 (PspSetProcessAffinitySafe.c)
 *     RtlPcToFilePath @ 0x140914BA0 (RtlPcToFilePath.c)
 *     SeSetSessionIdTokenWithLinked @ 0x140918260 (SeSetSessionIdTokenWithLinked.c)
 *     SepIdAssignableAsGroup @ 0x14091C9D0 (SepIdAssignableAsGroup.c)
 *     SeGetTokenControlInformation @ 0x14091E3E4 (SeGetTokenControlInformation.c)
 *     SeExamineGlobalSacl @ 0x140920178 (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140920298 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x140920350 (SepRmGlobalSaclFind.c)
 *     WmipFindSMBiosStructure @ 0x14092CF48 (WmipFindSMBiosStructure.c)
 *     NtMapCMFModule @ 0x140954E10 (NtMapCMFModule.c)
 *     VfDriverEnableVerifier @ 0x1409C5600 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C5798 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x1402620D0 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x14038BE10 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14038C63C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall ExAcquireResourceSharedLite(PERESOURCE Resource, BOOLEAN Wait)
{
  PERESOURCE v2; // rbx
  BOOLEAN v3; // di
  __int16 v4; // ax
  struct _KTHREAD *CurrentThread; // r8
  void *OwnerEntryForLegacyShim; // rsi
  BOOLEAN v8; // bl

  v2 = Resource;
  v3 = Wait;
  LOBYTE(Resource) = (Wait == 0) + 1;
  if ( (v2->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v2, 0LL, 0LL);
  v4 = v2->Flag & 1;
  if ( v4 )
  {
    *(_QWORD *)&Wait = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( Wait > (unsigned __int8)Resource )
      KeBugCheckEx(0x1C6u, 0LL, Wait, (unsigned __int8)Resource, 0LL);
    if ( Wait >= 2u )
    {
      LODWORD(Resource) = KeGetPcr()->Prcb.DpcRequestSummary;
      if ( ((unsigned int)Resource & 0x10001) != 0 )
        KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    }
    if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !Wait && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( !v4 )
    return ExpAcquireResourceSharedLite(v2, v3);
  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(Resource, Wait);
  v8 = ExAcquireFastResourceShared((ULONG_PTR)v2, (ULONG_PTR)OwnerEntryForLegacyShim);
  if ( !v8 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v8;
}
