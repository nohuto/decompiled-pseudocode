/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x1402E1FA0
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14052142C (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405B4C3C (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405BCD24 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405BD784 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1405BDB2C (AdtpFormatPrefix.c)
 *     VrpBuildKeyPath @ 0x1405CAC34 (VrpBuildKeyPath.c)
 *     RtlpGetRegistryHandle @ 0x140617BCC (RtlpGetRegistryHandle.c)
 *     CmpQueryNameString @ 0x14065950C (CmpQueryNameString.c)
 *     CmpInitCmRM @ 0x14065A51C (CmpInitCmRM.c)
 *     CmpOpenHiveFile @ 0x140664008 (CmpOpenHiveFile.c)
 *     CmpNameFromAttributes @ 0x14068D57C (CmpNameFromAttributes.c)
 *     CmRealKCBToVirtualPath @ 0x14068F388 (CmRealKCBToVirtualPath.c)
 *     IopSymlinkRememberJunction @ 0x1406CDB70 (IopSymlinkRememberJunction.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1407197E8 (_SysCtxRegOpenCurrentUserKey.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407201FC (PnpQueryRemoveLockedDeviceNode.c)
 *     IopBuildFullDriverPath @ 0x140725998 (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x140726670 (IopQueryRegistryKeySystemPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x140727F90 (IopGetDriverNameFromKeyNode.c)
 *     MiGenerateSystemImageNames @ 0x140744E90 (MiGenerateSystemImageNames.c)
 *     MiResolveImageReferences @ 0x140745BF8 (MiResolveImageReferences.c)
 *     IopBootLog @ 0x14075CC40 (IopBootLog.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140767EB0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14076803C (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x14076C9D4 (CmpStartCLFSLog.c)
 *     pIoQueryDeviceDescription @ 0x140776374 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x140776800 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140776914 (pIoQueryBusDescription.c)
 *     PopCreateHiberFile @ 0x14077BCF0 (PopCreateHiberFile.c)
 *     MmCallDllInitialize @ 0x1407932E0 (MmCallDllInitialize.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     AslRegistryBuildMachinePath @ 0x1407AC9C0 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407ACA74 (AslRegistryBuildUserPath.c)
 *     IoReportRootDevice @ 0x1407B2200 (IoReportRootDevice.c)
 *     CmVirtualKCBToRealPath @ 0x14086B4AC (CmVirtualKCBToRealPath.c)
 *     CmpLoadHiveVolatile @ 0x140878768 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x14087EFAC (VrpPreLoadKey.c)
 *     IopSafebootDriverLoad @ 0x14088DB84 (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x14088EB14 (IopValidateJunctionTarget.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B2948 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408B369C (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B3A44 (PiDrvDbSetupNodeHive.c)
 *     PopDeleteHiberFile @ 0x1408E262C (PopDeleteHiberFile.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409028E0 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x14090FCC4 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14090FED8 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140911158 (RtlpConstructCrossVmObjectPath.c)
 *     SdbResolveDatabaseEx @ 0x1409620B8 (SdbResolveDatabaseEx.c)
 *     AdtpBuildSidListString @ 0x1409692CC (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x1409695C0 (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x140969830 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x140969A30 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14096A0E8 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14096A184 (AdtpBuildUserAccountControlString.c)
 *     ObGetSiloRootDirectoryPath @ 0x14097BF7C (ObGetSiloRootDirectoryPath.c)
 *     CmpInitializeDriverStores @ 0x140A50978 (CmpInitializeDriverStores.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A58208 (CmpOpenSystemDriverHiveContext.c)
 *     CmpAddDriverToList @ 0x140A5914C (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A8E7A0 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
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
