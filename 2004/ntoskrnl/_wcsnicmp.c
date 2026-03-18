/*
 * XREFs of _wcsnicmp @ 0x1403CEC10
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x140508E9C (PiDevCfgMatchDriverConfigurationId.c)
 *     PopIdleWakeAreIdenticalWakeSources @ 0x140575FA4 (PopIdleWakeAreIdenticalWakeSources.c)
 *     VrpComparePath @ 0x1405CBDF0 (VrpComparePath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14063A5D0 (IoVolumeDeviceNameToGuidPath.c)
 *     LocalpGetStringForCondition @ 0x1406417E0 (LocalpGetStringForCondition.c)
 *     LookupAccessMaskInTable @ 0x140642770 (LookupAccessMaskInTable.c)
 *     LookupAceFlagsInTable @ 0x140642930 (LookupAceFlagsInTable.c)
 *     LookupAceTypeInTable @ 0x1406429E0 (LookupAceTypeInTable.c)
 *     LookupSidInTable @ 0x14068E37C (LookupSidInTable.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406C478C (_RegRtlCreateTreeTransacted.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1406F9FC8 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     PiSwFindSwDevice @ 0x140732A40 (PiSwFindSwDevice.c)
 *     SdbpResolveMatchingFile @ 0x14073E198 (SdbpResolveMatchingFile.c)
 *     AslpEnvResolveVars @ 0x14073E580 (AslpEnvResolveVars.c)
 *     AslEnvVarQuery @ 0x14073E938 (AslEnvVarQuery.c)
 *     WmipPrepareWnodeSI @ 0x140741C54 (WmipPrepareWnodeSI.c)
 *     MiDriverLoadSucceeded @ 0x140746B84 (MiDriverLoadSucceeded.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x14075B154 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiSwIrpCleanup @ 0x1407610EC (PiSwIrpCleanup.c)
 *     BiCleanupLoadedStores @ 0x14076FCC8 (BiCleanupLoadedStores.c)
 *     BiIsValidDiskDevice @ 0x140770748 (BiIsValidDiskDevice.c)
 *     BiOpenSystemStore @ 0x14077143C (BiOpenSystemStore.c)
 *     BiCreatePartitionDevice @ 0x140772CE0 (BiCreatePartitionDevice.c)
 *     LocalGetAclForString @ 0x1407754CC (LocalGetAclForString.c)
 *     FContainCallBackAce @ 0x140775C84 (FContainCallBackAce.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x14077AEC4 (WmipGetGuidObjectInstanceInfo.c)
 *     LocalGetSDControlForString @ 0x1407A4844 (LocalGetSDControlForString.c)
 *     CmpPreserveSystemHiveData @ 0x14087617C (CmpPreserveSystemHiveData.c)
 *     IopCheckIfNotNativeDriver @ 0x14088E1D0 (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x140891F60 (IopReplaceSymlinkPath.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B3018 (PiDrvDbOverlayCopyKeys.c)
 *     punycode_decode @ 0x1409135DC (punycode_decode.c)
 *     punycode_encode @ 0x140913C24 (punycode_encode.c)
 *     GetAttributeName @ 0x140923A38 (GetAttributeName.c)
 *     GetOperandValue @ 0x140923F0C (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1409244F0 (GetOperatorIndexByName.c)
 *     GetValueType @ 0x140924738 (GetValueType.c)
 *     EtwpApplyContainerFilter @ 0x14093D0DC (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x14093D21C (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x14093D2E4 (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1409520D0 (NtSetSystemEnvironmentValueEx.c)
 *     SdbpGetProcessHistory @ 0x140962C78 (SdbpGetProcessHistory.c)
 *     AslPathCleanUstr @ 0x140964EC4 (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x140966948 (AslpPathWildcardMakeLeaves.c)
 *     BiCreateFileDeviceElement @ 0x14096C6F8 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x140970E34 (SiIsValidDiskDevice.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140A8BCE0 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
