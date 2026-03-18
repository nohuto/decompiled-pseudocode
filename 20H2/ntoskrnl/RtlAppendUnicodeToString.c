/*
 * XREFs of RtlAppendUnicodeToString @ 0x140267DE0
 * Callers:
 *     LdrpGetResourceFileName @ 0x140380408 (LdrpGetResourceFileName.c)
 *     KsepEvntLogShimsApplied @ 0x14052544C (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405B8EBC (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C10BC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405C1B1C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1405C1EC4 (AdtpFormatPrefix.c)
 *     VrpBuildKeyPath @ 0x1405D2664 (VrpBuildKeyPath.c)
 *     CmpOpenHiveFile @ 0x14064F528 (CmpOpenHiveFile.c)
 *     RtlpGetRegistryHandle @ 0x14066D824 (RtlpGetRegistryHandle.c)
 *     IopSymlinkRememberJunction @ 0x1406C6A70 (IopSymlinkRememberJunction.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1406DB214 (CmpQueryHiveRedirectionFileList.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1406FB700 (RtlFormatCurrentUserKeyPath.c)
 *     CmRealKCBToVirtualPath @ 0x1406FC068 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x1406FC260 (CmpGetVirtualizationID.c)
 *     IopGetDriverNameFromKeyNode @ 0x14073714C (IopGetDriverNameFromKeyNode.c)
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140743E74 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpBuildCmResourceList @ 0x14074A5C0 (PnpBuildCmResourceList.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407788A0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     pIoQueryDeviceDescription @ 0x140786D84 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140787324 (pIoQueryBusDescription.c)
 *     CmpInitializeSystemHivesLoad @ 0x14078FEA4 (CmpInitializeSystemHivesLoad.c)
 *     CmpBuildMachineHiveMountPoint @ 0x14079014C (CmpBuildMachineHiveMountPoint.c)
 *     PiDrvDbCreateNode @ 0x1407994AC (PiDrvDbCreateNode.c)
 *     CmpFinishSystemHivesLoad @ 0x14079D1F0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407A0B34 (CmpMountPreloadedHives.c)
 *     MmCallDllInitialize @ 0x1407A23C0 (MmCallDllInitialize.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     AslRegistryBuildMachinePath @ 0x1407BDA60 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407BDB14 (AslRegistryBuildUserPath.c)
 *     IoReportRootDevice @ 0x1407C3BA0 (IoReportRootDevice.c)
 *     CmpFlushBackupHive @ 0x140873704 (CmpFlushBackupHive.c)
 *     CmpLoadHiveVolatile @ 0x14087F5C8 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x140885DEC (VrpPreLoadKey.c)
 *     IopSafebootDriverLoad @ 0x140894964 (IopSafebootDriverLoad.c)
 *     PiDrvDbSetupNodeHive @ 0x1408BA984 (PiDrvDbSetupNodeHive.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140916DB8 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140918018 (RtlpConstructCrossVmObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x140933C80 (IoWMISuggestInstanceName.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x14095F4AC (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     ApiSetpConstructPathToExtension @ 0x1409611D0 (ApiSetpConstructPathToExtension.c)
 *     SdbResolveDatabaseEx @ 0x140969228 (SdbResolveDatabaseEx.c)
 *     AslpProcessMatchRegNode @ 0x14096C8EC (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x14097043C (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x140970730 (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x140970BA0 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140971258 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1409712F4 (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x140971EF0 (BiResolveLocateDevice.c)
 *     CmpInitializeDriverStores @ 0x140A56CF8 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x140A5957C (CmpInitializePreloadedHive.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A5E608 (CmpOpenSystemDriverHiveContext.c)
 *     CmpAddDriverToList @ 0x140A5F54C (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A93A90 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140267E90 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x140411040 (memmove.c)
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
