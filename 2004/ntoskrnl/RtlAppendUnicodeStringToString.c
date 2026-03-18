/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x1402721F0
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x140521A7C (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405B535C (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405BD444 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405BDEA4 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1405BE24C (AdtpFormatPrefix.c)
 *     VrpBuildKeyPath @ 0x1405CC004 (VrpBuildKeyPath.c)
 *     RtlpGetRegistryHandle @ 0x1405E1A94 (RtlpGetRegistryHandle.c)
 *     CmpOpenHiveFile @ 0x14061E8E8 (CmpOpenHiveFile.c)
 *     CmRealKCBToVirtualPath @ 0x1406414C4 (CmRealKCBToVirtualPath.c)
 *     CmpNameFromAttributes @ 0x140651BEC (CmpNameFromAttributes.c)
 *     CmpQueryNameString @ 0x1406559A4 (CmpQueryNameString.c)
 *     CmpInitCmRM @ 0x140655B64 (CmpInitCmRM.c)
 *     IopSymlinkRememberJunction @ 0x1406EEE70 (IopSymlinkRememberJunction.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14071BB78 (_SysCtxRegOpenCurrentUserKey.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407220BC (PnpQueryRemoveLockedDeviceNode.c)
 *     IopGetDriverNameFromKeyNode @ 0x1407286BC (IopGetDriverNameFromKeyNode.c)
 *     IopQueryRegistryKeySystemPath @ 0x140728BE0 (IopQueryRegistryKeySystemPath.c)
 *     IopBuildFullDriverPath @ 0x140729D94 (IopBuildFullDriverPath.c)
 *     MiGenerateSystemImageNames @ 0x140746A10 (MiGenerateSystemImageNames.c)
 *     MiResolveImageReferences @ 0x140747778 (MiResolveImageReferences.c)
 *     IopBootLog @ 0x14075F0F4 (IopBootLog.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14076A290 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14076A41C (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x14076F174 (CmpStartCLFSLog.c)
 *     pIoQueryDeviceDescription @ 0x140778784 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x140778C10 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140778D24 (pIoQueryBusDescription.c)
 *     PopCreateHiberFile @ 0x1407846F0 (PopCreateHiberFile.c)
 *     MmCallDllInitialize @ 0x14078C110 (MmCallDllInitialize.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     AslRegistryBuildMachinePath @ 0x1407AFB20 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407AFBD4 (AslRegistryBuildUserPath.c)
 *     IoReportRootDevice @ 0x1407B5370 (IoReportRootDevice.c)
 *     CmVirtualKCBToRealPath @ 0x14086C7FC (CmVirtualKCBToRealPath.c)
 *     CmpLoadHiveVolatile @ 0x140879A58 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x14088029C (VrpPreLoadKey.c)
 *     IopSafebootDriverLoad @ 0x14088EEA4 (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x14088FE34 (IopValidateJunctionTarget.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B3C68 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408B49BC (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B4D64 (PiDrvDbSetupNodeHive.c)
 *     PopDeleteHiberFile @ 0x1408E38AC (PopDeleteHiberFile.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409036F0 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140911064 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140911278 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409124D8 (RtlpConstructCrossVmObjectPath.c)
 *     SdbResolveDatabaseEx @ 0x140963458 (SdbResolveDatabaseEx.c)
 *     AdtpBuildSidListString @ 0x14096A66C (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x14096A960 (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x14096ABD0 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x14096ADD0 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14096B488 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14096B524 (AdtpBuildUserAccountControlString.c)
 *     ObGetSiloRootDirectoryPath @ 0x14097D31C (ObGetSiloRootDirectoryPath.c)
 *     CmpAddDriverToList @ 0x140A4A7B0 (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A4B7EC (CmpOpenSystemDriverHiveContext.c)
 *     CmpInitializeDriverStores @ 0x140A56678 (CmpInitializeDriverStores.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A8DD90 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
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
