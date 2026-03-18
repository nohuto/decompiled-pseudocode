/*
 * XREFs of _wcsnicmp @ 0x1403CDDD0
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x14050884C (PiDevCfgMatchDriverConfigurationId.c)
 *     PopIdleWakeAreIdenticalWakeSources @ 0x140575954 (PopIdleWakeAreIdenticalWakeSources.c)
 *     VrpComparePath @ 0x1405CAA20 (VrpComparePath.c)
 *     LookupSidInTable @ 0x1405E4BB8 (LookupSidInTable.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140688150 (IoVolumeDeviceNameToGuidPath.c)
 *     LocalpGetStringForCondition @ 0x14068F6A4 (LocalpGetStringForCondition.c)
 *     LookupAccessMaskInTable @ 0x140690634 (LookupAccessMaskInTable.c)
 *     LookupAceFlagsInTable @ 0x1406907F4 (LookupAceFlagsInTable.c)
 *     LookupAceTypeInTable @ 0x1406908A4 (LookupAceTypeInTable.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406AE410 (_RegRtlCreateTreeTransacted.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1406D6868 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     PiSwFindSwDevice @ 0x140734680 (PiSwFindSwDevice.c)
 *     SdbpResolveMatchingFile @ 0x14073C618 (SdbpResolveMatchingFile.c)
 *     AslpEnvResolveVars @ 0x14073CA00 (AslpEnvResolveVars.c)
 *     AslEnvVarQuery @ 0x14073CDB8 (AslEnvVarQuery.c)
 *     WmipPrepareWnodeSI @ 0x1407400D4 (WmipPrepareWnodeSI.c)
 *     MiDriverLoadSucceeded @ 0x140745004 (MiDriverLoadSucceeded.c)
 *     PiSwIrpCleanup @ 0x140754680 (PiSwIrpCleanup.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x1407592D4 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     BiCleanupLoadedStores @ 0x14076D8B8 (BiCleanupLoadedStores.c)
 *     BiIsValidDiskDevice @ 0x14076E338 (BiIsValidDiskDevice.c)
 *     BiOpenSystemStore @ 0x14076F02C (BiOpenSystemStore.c)
 *     BiCreatePartitionDevice @ 0x1407708D0 (BiCreatePartitionDevice.c)
 *     LocalGetAclForString @ 0x1407730BC (LocalGetAclForString.c)
 *     FContainCallBackAce @ 0x140773874 (FContainCallBackAce.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140778AB4 (WmipGetGuidObjectInstanceInfo.c)
 *     LocalGetSDControlForString @ 0x14077E158 (LocalGetSDControlForString.c)
 *     CmpPreserveSystemHiveData @ 0x140874E8C (CmpPreserveSystemHiveData.c)
 *     IopCheckIfNotNativeDriver @ 0x14088CEB0 (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x140890C40 (IopReplaceSymlinkPath.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B1CF8 (PiDrvDbOverlayCopyKeys.c)
 *     punycode_decode @ 0x14091225C (punycode_decode.c)
 *     punycode_encode @ 0x1409128A4 (punycode_encode.c)
 *     GetAttributeName @ 0x140922788 (GetAttributeName.c)
 *     GetOperandValue @ 0x140922C5C (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x140923240 (GetOperatorIndexByName.c)
 *     GetValueType @ 0x140923488 (GetValueType.c)
 *     EtwpApplyContainerFilter @ 0x14093BE60 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x14093BFA0 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x14093C068 (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140950D30 (NtSetSystemEnvironmentValueEx.c)
 *     SdbpGetProcessHistory @ 0x1409618D8 (SdbpGetProcessHistory.c)
 *     AslPathCleanUstr @ 0x140963B24 (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x1409655A8 (AslpPathWildcardMakeLeaves.c)
 *     BiCreateFileDeviceElement @ 0x14096B358 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x14096FA94 (SiIsValidDiskDevice.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140A8C748 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsnicmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  int v3; // r9d
  size_t v4; // rbx
  const wchar_t *v5; // r11
  signed __int64 v6; // r10
  __int16 v7; // cx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // r8

  v3 = 0;
  v4 = MaxCount;
  v5 = Str2;
  if ( MaxCount )
  {
    v6 = (char *)Str1 - (char *)Str2;
    do
    {
      v7 = *(const wchar_t *)((char *)v5 + v6);
      v8 = v7 + 32;
      if ( (unsigned __int16)(v7 - 65) > 0x19u )
        v8 = *(const wchar_t *)((char *)v5 + v6);
      v9 = *v5++;
      v10 = v9 + 32;
      if ( (unsigned __int16)(v9 - 65) > 0x19u )
        v10 = v9;
      --v4;
    }
    while ( v4 && v8 && v8 == v10 );
    return v8 - v10;
  }
  return v3;
}
