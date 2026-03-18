/*
 * XREFs of RtlAppendUnicodeToString @ 0x14025BA90
 * Callers:
 *     LdrpGetResourceFileName @ 0x14037DC18 (LdrpGetResourceFileName.c)
 *     KsepEvntLogShimsApplied @ 0x14052142C (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405B4C3C (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405BCD24 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405BD784 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1405BDB2C (AdtpFormatPrefix.c)
 *     VrpBuildKeyPath @ 0x1405CAC34 (VrpBuildKeyPath.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1405D56A4 (CmpQueryHiveRedirectionFileList.c)
 *     RtlpGetRegistryHandle @ 0x140617BCC (RtlpGetRegistryHandle.c)
 *     CmpOpenHiveFile @ 0x140664008 (CmpOpenHiveFile.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14068F280 (RtlFormatCurrentUserKeyPath.c)
 *     CmRealKCBToVirtualPath @ 0x14068F388 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x14068F59C (CmpGetVirtualizationID.c)
 *     IopSymlinkRememberJunction @ 0x1406CDB70 (IopSymlinkRememberJunction.c)
 *     IopLoadDriver @ 0x140725EF8 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140727F90 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x14072FFB4 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpBuildCmResourceList @ 0x140739B30 (PnpBuildCmResourceList.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140767EB0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     pIoQueryDeviceDescription @ 0x140776374 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140776914 (pIoQueryBusDescription.c)
 *     CmpInitializeSystemHivesLoad @ 0x1407885C4 (CmpInitializeSystemHivesLoad.c)
 *     CmpBuildMachineHiveMountPoint @ 0x14078886C (CmpBuildMachineHiveMountPoint.c)
 *     PiDrvDbCreateNode @ 0x14078AE9C (PiDrvDbCreateNode.c)
 *     CmpFinishSystemHivesLoad @ 0x14078E760 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x140791858 (CmpMountPreloadedHives.c)
 *     MmCallDllInitialize @ 0x1407932E0 (MmCallDllInitialize.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     AslRegistryBuildMachinePath @ 0x1407AC9C0 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407ACA74 (AslRegistryBuildUserPath.c)
 *     IoReportRootDevice @ 0x1407B2200 (IoReportRootDevice.c)
 *     CmpFlushBackupHive @ 0x14086FC00 (CmpFlushBackupHive.c)
 *     CmpLoadHiveVolatile @ 0x140878768 (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x14087EFAC (VrpPreLoadKey.c)
 *     IopSafebootDriverLoad @ 0x14088DB84 (IopSafebootDriverLoad.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B3A44 (PiDrvDbSetupNodeHive.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14090FED8 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140911158 (RtlpConstructCrossVmObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x14092CBA0 (IoWMISuggestInstanceName.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x14095834C (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     ApiSetpConstructPathToExtension @ 0x14095A070 (ApiSetpConstructPathToExtension.c)
 *     SdbResolveDatabaseEx @ 0x1409620B8 (SdbResolveDatabaseEx.c)
 *     AslpProcessMatchRegNode @ 0x14096577C (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x1409692CC (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x1409695C0 (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x140969A30 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14096A0E8 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14096A184 (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x14096AD80 (BiResolveLocateDevice.c)
 *     CmpInitializeDriverStores @ 0x140A50978 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x140A52F90 (CmpInitializePreloadedHive.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A58208 (CmpOpenSystemDriverHiveContext.c)
 *     CmpAddDriverToList @ 0x140A5914C (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A8E7A0 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x140408CC0 (memmove.c)
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
