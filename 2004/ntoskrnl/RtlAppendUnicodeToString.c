/*
 * XREFs of RtlAppendUnicodeToString @ 0x140202B70
 * Callers:
 *     LdrpGetResourceFileName @ 0x14037E6D8 (LdrpGetResourceFileName.c)
 *     KsepEvntLogShimsApplied @ 0x140521A7C (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405B535C (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405BD444 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405BDEA4 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1405BE24C (AdtpFormatPrefix.c)
 *     VrpBuildKeyPath @ 0x1405CC004 (VrpBuildKeyPath.c)
 *     RtlpGetRegistryHandle @ 0x1405E1A94 (RtlpGetRegistryHandle.c)
 *     CmpOpenHiveFile @ 0x14061E8E8 (CmpOpenHiveFile.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14063F160 (RtlFormatCurrentUserKeyPath.c)
 *     CmRealKCBToVirtualPath @ 0x1406414C4 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x1406416D8 (CmpGetVirtualizationID.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140652974 (CmpQueryHiveRedirectionFileList.c)
 *     IopSymlinkRememberJunction @ 0x1406EEE70 (IopSymlinkRememberJunction.c)
 *     IopGetDriverNameFromKeyNode @ 0x1407286BC (IopGetDriverNameFromKeyNode.c)
 *     IopLoadDriver @ 0x140729340 (IopLoadDriver.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1407349E4 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpBuildCmResourceList @ 0x14073B6B0 (PnpBuildCmResourceList.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14076A290 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     pIoQueryDeviceDescription @ 0x140778784 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140778D24 (pIoQueryBusDescription.c)
 *     CmpInitializeSystemHivesLoad @ 0x140782BA4 (CmpInitializeSystemHivesLoad.c)
 *     CmpBuildMachineHiveMountPoint @ 0x140782E4C (CmpBuildMachineHiveMountPoint.c)
 *     MmCallDllInitialize @ 0x14078C110 (MmCallDllInitialize.c)
 *     PiDrvDbCreateNode @ 0x14078CD6C (PiDrvDbCreateNode.c)
 *     CmpMountPreloadedHives @ 0x140790834 (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x140790950 (CmpFinishSystemHivesLoad.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     AslRegistryBuildMachinePath @ 0x1407AFB20 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407AFBD4 (AslRegistryBuildUserPath.c)
 *     IoReportRootDevice @ 0x1407B5370 (IoReportRootDevice.c)
 *     CmpFlushBackupHive @ 0x14086DC18 (CmpFlushBackupHive.c)
 *     CmpLoadHiveVolatile @ 0x140879A58 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x14088029C (VrpPreLoadKey.c)
 *     IopSafebootDriverLoad @ 0x14088EEA4 (IopSafebootDriverLoad.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B4D64 (PiDrvDbSetupNodeHive.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140911278 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409124D8 (RtlpConstructCrossVmObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x14092DE50 (IoWMISuggestInstanceName.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1409596EC (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     ApiSetpConstructPathToExtension @ 0x14095B410 (ApiSetpConstructPathToExtension.c)
 *     SdbResolveDatabaseEx @ 0x140963458 (SdbResolveDatabaseEx.c)
 *     AslpProcessMatchRegNode @ 0x140966B1C (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x14096A66C (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x14096A960 (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x14096ADD0 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14096B488 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14096B524 (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x14096C120 (BiResolveLocateDevice.c)
 *     CmpAddDriverToList @ 0x140A4A7B0 (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A4B7EC (CmpOpenSystemDriverHiveContext.c)
 *     CmpInitializeDriverStores @ 0x140A56678 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x140A58EFC (CmpInitializePreloadedHive.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A8DD90 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140202C20 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeToString(PUNICODE_STRING Destination, PCWSTR Source)
{
  unsigned int Length; // ebp
  wchar_t *v5; // r14
  UNICODE_STRING v7; // [rsp+20h] [rbp-28h] BYREF

  if ( !Source )
    return 0;
  v7 = 0LL;
  if ( RtlInitUnicodeStringEx(&v7, Source) >= 0 )
  {
    Length = v7.Length;
    if ( Destination->Length + (unsigned int)v7.Length <= Destination->MaximumLength )
    {
      v5 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
      memmove(v5, Source, v7.Length);
      Destination->Length += Length;
      if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
        v5[(unsigned __int64)Length >> 1] = 0;
      return 0;
    }
  }
  return -1073741789;
}
