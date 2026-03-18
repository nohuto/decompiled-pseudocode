/*
 * XREFs of _wcsnicmp @ 0x1403D18A0
 * Callers:
 *     PiDevCfgMatchDriverConfigurationId @ 0x14050C7CC (PiDevCfgMatchDriverConfigurationId.c)
 *     PopIdleWakeAreIdenticalWakeSources @ 0x1405799D4 (PopIdleWakeAreIdenticalWakeSources.c)
 *     VrpComparePath @ 0x1405D2450 (VrpComparePath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405DD720 (IoVolumeDeviceNameToGuidPath.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x14062F498 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406E5EBC (_RegRtlCreateTreeTransacted.c)
 *     LocalpGetStringForCondition @ 0x1406FC3C8 (LocalpGetStringForCondition.c)
 *     LookupAccessMaskInTable @ 0x1406FD558 (LookupAccessMaskInTable.c)
 *     LookupAceFlagsInTable @ 0x1406FD718 (LookupAceFlagsInTable.c)
 *     LookupAceTypeInTable @ 0x1406FD7C8 (LookupAceTypeInTable.c)
 *     LookupSidInTable @ 0x1406FD8FC (LookupSidInTable.c)
 *     PiSwFindSwDevice @ 0x140741ED0 (PiSwFindSwDevice.c)
 *     SdbpResolveMatchingFile @ 0x14074CD7C (SdbpResolveMatchingFile.c)
 *     AslpEnvResolveVars @ 0x14074D164 (AslpEnvResolveVars.c)
 *     AslEnvVarQuery @ 0x14074D51C (AslEnvVarQuery.c)
 *     WmipPrepareWnodeSI @ 0x140750834 (WmipPrepareWnodeSI.c)
 *     MiDriverLoadSucceeded @ 0x140755764 (MiDriverLoadSucceeded.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140769A44 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiSwIrpCleanup @ 0x14076F6FC (PiSwIrpCleanup.c)
 *     BiCleanupLoadedStores @ 0x14077E2C8 (BiCleanupLoadedStores.c)
 *     BiIsValidDiskDevice @ 0x14077ED48 (BiIsValidDiskDevice.c)
 *     BiOpenSystemStore @ 0x14077FA3C (BiOpenSystemStore.c)
 *     BiCreatePartitionDevice @ 0x1407812E0 (BiCreatePartitionDevice.c)
 *     LocalGetAclForString @ 0x140783ACC (LocalGetAclForString.c)
 *     FContainCallBackAce @ 0x140784284 (FContainCallBackAce.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1407894C4 (WmipGetGuidObjectInstanceInfo.c)
 *     LocalGetSDControlForString @ 0x1407B3988 (LocalGetSDControlForString.c)
 *     CmpPreserveSystemHiveData @ 0x14087BCEC (CmpPreserveSystemHiveData.c)
 *     IopCheckIfNotNativeDriver @ 0x140893D20 (IopCheckIfNotNativeDriver.c)
 *     IopReplaceSymlinkPath @ 0x140897BE0 (IopReplaceSymlinkPath.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B8C38 (PiDrvDbOverlayCopyKeys.c)
 *     punycode_decode @ 0x14091911C (punycode_decode.c)
 *     punycode_encode @ 0x140919764 (punycode_encode.c)
 *     GetAttributeName @ 0x140929860 (GetAttributeName.c)
 *     GetOperandValue @ 0x140929D34 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x14092A318 (GetOperatorIndexByName.c)
 *     GetValueType @ 0x14092A560 (GetValueType.c)
 *     EtwpApplyContainerFilter @ 0x140942EA4 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x140942FE4 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1409430AC (EtwpApplyPackageIdFilter.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140957E90 (NtSetSystemEnvironmentValueEx.c)
 *     SdbpGetProcessHistory @ 0x140968A48 (SdbpGetProcessHistory.c)
 *     AslPathCleanUstr @ 0x14096AC94 (AslPathCleanUstr.c)
 *     AslpPathWildcardMakeLeaves @ 0x14096C718 (AslpPathWildcardMakeLeaves.c)
 *     BiCreateFileDeviceElement @ 0x1409724C8 (BiCreateFileDeviceElement.c)
 *     SiIsValidDiskDevice @ 0x140976C04 (SiIsValidDiskDevice.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140A919F0 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
