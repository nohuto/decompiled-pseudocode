/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x140367B10
 * Callers:
 *     RtlIsUntrustedObject @ 0x140206A00 (RtlIsUntrustedObject.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x14030B860 (ExAllocatePoolMm.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140367AF0 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     RtlInsertDynamicFunctionTable @ 0x14036858C (RtlInsertDynamicFunctionTable.c)
 *     FsRtlAllocatePoolWithQuota @ 0x1405420A0 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x1405420D0 (FsRtlAllocatePoolWithQuotaTag.c)
 *     PsSetCpuQuotaInformation @ 0x1405E00E4 (PsSetCpuQuotaInformation.c)
 *     ExAllocatePoolWithQuota @ 0x14063A580 (ExAllocatePoolWithQuota.c)
 *     ExGetWakeTimerList @ 0x14063DABC (ExGetWakeTimerList.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140660F7C (RtlpGetPolicyValueForSystemCapability.c)
 *     ExpWnfCreateNameInstance @ 0x14066FED4 (ExpWnfCreateNameInstance.c)
 *     PspBuildCreateProcessContext @ 0x140670488 (PspBuildCreateProcessContext.c)
 *     CmpNameFromAttributes @ 0x14067DB18 (CmpNameFromAttributes.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PspCaptureUserProcessParameters @ 0x14069D480 (PspCaptureUserProcessParameters.c)
 *     NtQueueApcThreadEx2 @ 0x1406A1F70 (NtQueueApcThreadEx2.c)
 *     ExLockUserBuffer @ 0x1406A904C (ExLockUserBuffer.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406C2EE8 (RtlpProcessIFEOKeyFilter.c)
 *     RtlQueryModuleInformation @ 0x1406C6410 (RtlQueryModuleInformation.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406C9754 (ExpGetSystemFirmwareTableInformation.c)
 *     RtlAcquirePrivilege @ 0x1406CB6DC (RtlAcquirePrivilege.c)
 *     RtlQueryImageFileKeyOption @ 0x1406CC700 (RtlQueryImageFileKeyOption.c)
 *     NtRegisterThreadTerminatePort @ 0x1406E19E0 (NtRegisterThreadTerminatePort.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     ExpWnfWriteStateData @ 0x14079350C (ExpWnfWriteStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x14079A254 (ExpWnfSubscribeNameInstance.c)
 *     NtCreateWorkerFactory @ 0x1407D5050 (NtCreateWorkerFactory.c)
 *     CmpAllocatePostBlock @ 0x1407E5E68 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x1407E5F70 (CmpNotifyChangeKey.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     PspReadIFEOPerfOptions @ 0x1407F6CE0 (PspReadIFEOPerfOptions.c)
 *     PspIsDfssEnabled @ 0x140835590 (PspIsDfssEnabled.c)
 *     CmpSaveKeyByFileCopy @ 0x14090DF50 (CmpSaveKeyByFileCopy.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x14092665C (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     DbgkpQueueMessage @ 0x1409283F4 (DbgkpQueueMessage.c)
 *     DbgkRegisterErrorPort @ 0x140929940 (DbgkRegisterErrorPort.c)
 *     KeEnableProfiling @ 0x140961F3C (KeEnableProfiling.c)
 *     PsCreateVsmEnclave @ 0x1409B3D44 (PsCreateVsmEnclave.c)
 *     PsInitializeVsmEnclave @ 0x1409B4318 (PsInitializeVsmEnclave.c)
 *     PspPrepareEnclaveThreadWait @ 0x1409B47DC (PspPrepareEnclaveThreadWait.c)
 *     PspVsmEnclaveHashAllocator @ 0x1409B497C (PspVsmEnclaveHashAllocator.c)
 *     RtlAddResourceAttributeAce @ 0x1409B8170 (RtlAddResourceAttributeAce.c)
 *     RtlAllocateAndInitializeSidEx @ 0x1409B8ECC (RtlAllocateAndInitializeSidEx.c)
 *     RtlGetAppContainerParent @ 0x1409B8FF0 (RtlGetAppContainerParent.c)
 *     ExpGetDeviceDataInformation @ 0x1409F6464 (ExpGetDeviceDataInformation.c)
 *     ExpQueryElamCertInfo @ 0x1409F6C5C (ExpQueryElamCertInfo.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1409F7390 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x1409F7A54 (ExpStringCapture.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140A90450 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140A9C4E0 (VerifierPortExAllocatePoolWithQuotaTag.c)
 * Callees:
 *     ExpAllocatePoolWithQuotaTag @ 0x140A6E9A4 (ExpAllocatePoolWithQuotaTag.c)
 */

PVOID __stdcall ExAllocatePoolWithQuotaTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  __int64 v3; // r9

  v3 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  LODWORD(v3) = v3 | 0x80000000;
  return (PVOID)ExpAllocatePoolWithQuotaTag(PoolType, NumberOfBytes, Tag, v3);
}
