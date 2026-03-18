/*
 * XREFs of NtClose @ 0x140731D50
 * Callers:
 *     SepRmCallLsa @ 0x140203950 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403C5F68 (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403C6028 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlQueryValidationRunlevel @ 0x1405EDAC0 (RtlQueryValidationRunlevel.c)
 *     AlpcpCreateConnectionPort @ 0x140663D08 (AlpcpCreateConnectionPort.c)
 *     NtSecureConnectPort @ 0x140664220 (NtSecureConnectPort.c)
 *     AlpcpAcceptConnectPort @ 0x140665B68 (AlpcpAcceptConnectPort.c)
 *     AlpcpConnectPort @ 0x140666D1C (AlpcpConnectPort.c)
 *     PnpPrepareDriverLoading @ 0x1406797C8 (PnpPrepareDriverLoading.c)
 *     PfpVolumeOpenAndVerify @ 0x1406AECC0 (PfpVolumeOpenAndVerify.c)
 *     NtCreateRegistryTransaction @ 0x1406E2A70 (NtCreateRegistryTransaction.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 *     CmOpenKey @ 0x1407CABA0 (CmOpenKey.c)
 *     PfSnGetPrefetchInstructions @ 0x1407D84EC (PfSnGetPrefetchInstructions.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1407DDABC (PfSnOpenVolumesForPrefetch.c)
 *     PfSnPrefetchMetadata @ 0x1407DE1A8 (PfSnPrefetchMetadata.c)
 *     PfpFileBuildReadSupport @ 0x1407DEE78 (PfpFileBuildReadSupport.c)
 *     PfSnPopulateReadList @ 0x1407DF200 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x1407DF794 (PfSnGetSectionObject.c)
 *     PfpReadSupportCleanup @ 0x1407E08A0 (PfpReadSupportCleanup.c)
 *     PfSnIsVolumeMounted @ 0x1407E0A98 (PfSnIsVolumeMounted.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1407F7F00 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpLoadLanguageConfigList @ 0x140830634 (RtlpLoadLanguageConfigList.c)
 *     CmpInitializeLazyWriters @ 0x1408334E4 (CmpInitializeLazyWriters.c)
 *     AdtpObjsInitialize @ 0x14084CD18 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x14084D204 (AdtpInitializeDriveLetters.c)
 *     PopEtEnergyTrackerCreate @ 0x140857300 (PopEtEnergyTrackerCreate.c)
 *     NtOpenRegistryTransaction @ 0x14090E880 (NtOpenRegistryTransaction.c)
 *     IopConnectLinkTrackingPort @ 0x140934110 (IopConnectLinkTrackingPort.c)
 *     PfpPrefetchPrivatePages @ 0x140987430 (PfpPrefetchPrivatePages.c)
 *     PfpSourceGetPrefetchSupport @ 0x140987E44 (PfpSourceGetPrefetchSupport.c)
 *     NtCreateProcessStateChange @ 0x1409AEFF0 (NtCreateProcessStateChange.c)
 *     NtCreateThreadStateChange @ 0x1409AF200 (NtCreateThreadStateChange.c)
 *     RtlpSysVolTakeOwnership @ 0x1409BB4D8 (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F3EC0 (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F8680 (ExpWatchLicenseInfoWork.c)
 *     sub_140AF24B4 @ 0x140AF24B4 (sub_140AF24B4.c)
 *     ObInitSystem @ 0x140AFE184 (ObInitSystem.c)
 *     IopInitializeBuiltinDriver @ 0x140B11EBC (IopInitializeBuiltinDriver.c)
 *     ExpWatchProductTypeInitialization @ 0x140B1CC84 (ExpWatchProductTypeInitialization.c)
 *     IopInitCrashDumpRegCallback @ 0x140B219F0 (IopInitCrashDumpRegCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140B22004 (SepAdtInitializeAuditingOptions.c)
 *     FsRtlInitializeSmssEvent @ 0x140B25D38 (FsRtlInitializeSmssEvent.c)
 *     ExpInitializeCallbacks @ 0x140B28EB0 (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140B2B2EC (CreateSystemRootLink.c)
 *     IopProtectSystemPartition @ 0x140B2F684 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140B4B918 (InitSafeBoot.c)
 *     IopApplySystemPartitionProt @ 0x140B4F514 (IopApplySystemPartitionProt.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x1402F3558 (ObpIsKernelHandle.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     VfCheckUserHandle @ 0x140A9466C (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  char PreviousMode; // di
  ULONG_PTR v4; // rcx

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (MmVerifierData & 0x100) != 0 && !PreviousMode && !ObpIsKernelHandle((unsigned __int64)Handle, 0) )
    VfCheckUserHandle(v4);
  return ObpCloseHandle((ULONG_PTR)Handle);
}
