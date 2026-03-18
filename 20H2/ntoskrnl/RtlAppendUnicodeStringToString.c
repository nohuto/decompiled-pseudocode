/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x140340C70
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14052544C (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405B8EBC (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C10BC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405C1B1C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1405C1EC4 (AdtpFormatPrefix.c)
 *     VrpBuildKeyPath @ 0x1405D2664 (VrpBuildKeyPath.c)
 *     CmpOpenHiveFile @ 0x14064F528 (CmpOpenHiveFile.c)
 *     RtlpGetRegistryHandle @ 0x14066D824 (RtlpGetRegistryHandle.c)
 *     IopSymlinkRememberJunction @ 0x1406C6A70 (IopSymlinkRememberJunction.c)
 *     CmRealKCBToVirtualPath @ 0x1406FC068 (CmRealKCBToVirtualPath.c)
 *     CmpNameFromAttributes @ 0x1406FEF3C (CmpNameFromAttributes.c)
 *     CmpInitCmRM @ 0x14071037C (CmpInitCmRM.c)
 *     CmpQueryNameString @ 0x140711A48 (CmpQueryNameString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140729B68 (_SysCtxRegOpenCurrentUserKey.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407301CC (PnpQueryRemoveLockedDeviceNode.c)
 *     IopGetDriverNameFromKeyNode @ 0x14073714C (IopGetDriverNameFromKeyNode.c)
 *     IopQueryRegistryKeySystemPath @ 0x140737670 (IopQueryRegistryKeySystemPath.c)
 *     IopBuildFullDriverPath @ 0x140738824 (IopBuildFullDriverPath.c)
 *     MiGenerateSystemImageNames @ 0x1407555F0 (MiGenerateSystemImageNames.c)
 *     MiResolveImageReferences @ 0x140756358 (MiResolveImageReferences.c)
 *     IopBootLog @ 0x14076D764 (IopBootLog.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407788A0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140778A2C (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x140779BA4 (CmpStartCLFSLog.c)
 *     pIoQueryDeviceDescription @ 0x140786D84 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x140787210 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140787324 (pIoQueryBusDescription.c)
 *     PopCreateHiberFile @ 0x140792250 (PopCreateHiberFile.c)
 *     MmCallDllInitialize @ 0x1407A23C0 (MmCallDllInitialize.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     AslRegistryBuildMachinePath @ 0x1407BDA60 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407BDB14 (AslRegistryBuildUserPath.c)
 *     IoReportRootDevice @ 0x1407C3BA0 (IoReportRootDevice.c)
 *     CmVirtualKCBToRealPath @ 0x1408722A8 (CmVirtualKCBToRealPath.c)
 *     CmpLoadHiveVolatile @ 0x14087F5C8 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x140885DEC (VrpPreLoadKey.c)
 *     IopSafebootDriverLoad @ 0x140894964 (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x140895924 (IopValidateJunctionTarget.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B9888 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408BA5DC (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x1408BA984 (PiDrvDbSetupNodeHive.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140909310 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140916BA4 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140916DB8 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140918018 (RtlpConstructCrossVmObjectPath.c)
 *     SepAddTokenOriginClaim @ 0x140925380 (SepAddTokenOriginClaim.c)
 *     SdbResolveDatabaseEx @ 0x140969228 (SdbResolveDatabaseEx.c)
 *     AdtpBuildSidListString @ 0x14097043C (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x140970730 (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x1409709A0 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x140970BA0 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140971258 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1409712F4 (AdtpBuildUserAccountControlString.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409830EC (ObGetSiloRootDirectoryPath.c)
 *     CmpInitializeDriverStores @ 0x140A56CF8 (CmpInitializeDriverStores.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A5E608 (CmpOpenSystemDriverHiveContext.c)
 *     CmpAddDriverToList @ 0x140A5F54C (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A93A90 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeStringToString(PUNICODE_STRING Destination, PCUNICODE_STRING Source)
{
  unsigned int Length; // edi
  wchar_t *v4; // r14

  Length = Source->Length;
  if ( !(_WORD)Length )
    return 0;
  if ( Destination->Length + Length <= Destination->MaximumLength )
  {
    v4 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
    memmove(v4, Source->Buffer, Source->Length);
    Destination->Length += Length;
    if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
      v4[(unsigned __int64)Length >> 1] = 0;
    return 0;
  }
  return -1073741789;
}
