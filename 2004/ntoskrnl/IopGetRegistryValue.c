/*
 * XREFs of IopGetRegistryValue @ 0x140728854
 * Callers:
 *     PnpBootDeviceWait @ 0x1403B4188 (PnpBootDeviceWait.c)
 *     PnpGetRegistryDword @ 0x1403B438C (PnpGetRegistryDword.c)
 *     IopReadDumpRegistry @ 0x1403BD2A0 (IopReadDumpRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x1403C6858 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_ReadRegistry @ 0x1403C8F78 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x1403CADC4 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140505860 (IopAllowRemoteDASD.c)
 *     PiDevCfgQueryResolveValue @ 0x140509044 (PiDevCfgQueryResolveValue.c)
 *     IopGetDriverNameFromKeyNode @ 0x1407286BC (IopGetDriverNameFromKeyNode.c)
 *     IopLoadDriver @ 0x140729340 (IopLoadDriver.c)
 *     IopBuildFullDriverPath @ 0x140729D94 (IopBuildFullDriverPath.c)
 *     PiFindDevInstMatch @ 0x14072A2BC (PiFindDevInstMatch.c)
 *     IopQuerySecureDeviceClassState @ 0x14072A5E0 (IopQuerySecureDeviceClassState.c)
 *     PnpPrepareDriverLoading @ 0x14072CCF0 (PnpPrepareDriverLoading.c)
 *     PiDevCfgBuildIndirectString @ 0x14072CF50 (PiDevCfgBuildIndirectString.c)
 *     PipCheckForDenyExecute @ 0x14073592C (PipCheckForDenyExecute.c)
 *     IopInitializeDeviceInstanceKey @ 0x140739284 (IopInitializeDeviceInstanceKey.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14073AD54 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpReadDeviceConfiguration @ 0x14073B300 (PnpReadDeviceConfiguration.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14073D2AC (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiDevCfgCopyDeviceKey @ 0x14074A84C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgMigrateDevice @ 0x14075BC34 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140768D7C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x140768FB0 (PiDevCfgResolveVariable.c)
 *     PiDevCfgVerifyService @ 0x1407696C0 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1407698D0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     NtEnableLastKnownGood @ 0x140769E30 (NtEnableLastKnownGood.c)
 *     PiRearrangeDeviceInstances @ 0x14076E834 (PiRearrangeDeviceInstances.c)
 *     IopGetRegistryValues @ 0x140779094 (IopGetRegistryValues.c)
 *     IopCopyBootLogRegistryToFile @ 0x140783150 (IopCopyBootLogRegistryToFile.c)
 *     PipUpdateSetupInProgress @ 0x14078C370 (PipUpdateSetupInProgress.c)
 *     IopIsReportedAlready @ 0x140796CE8 (IopIsReportedAlready.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1407AA564 (PnpCheckPossibleBootStartDriver.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407AEBF0 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDriverRegistryKey @ 0x1407B2510 (IoOpenDriverRegistryKey.c)
 *     PnpDriverLoadingFailed @ 0x1407BFFD0 (PnpDriverLoadingFailed.c)
 *     IopSafebootDriverLoad @ 0x14088EEA4 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x140895240 (IopLiveDumpInitRegistrySettings.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14089978C (PipGetDriverKsrGuidRegistryValue.c)
 *     PiGetDeviceRegistryProperty @ 0x14089B418 (PiGetDeviceRegistryProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x14089DD90 (PnpGetDeviceInstanceRegistryValue.c)
 *     PipServiceInstanceToDeviceInstance @ 0x14089E6A0 (PipServiceInstanceToDeviceInstance.c)
 *     PipDmgInitReadGroupPolicy @ 0x1408A0430 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A2D04 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A3CF4 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x1408A3F1C (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A4548 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x1408A49D4 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408A4A44 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x1408A4F40 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A5010 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1408A6280 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x1408A68B0 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A698C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x1408A7160 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1408A7340 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B15E0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B40B8 (PiDrvDbResolveFilePathKeyValues.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A4CF70 (PipCheckSystemFirmwareUpdated.c)
 *     PiInitCacheGroupInformation @ 0x140A4D318 (PiInitCacheGroupInformation.c)
 *     IopInitializeSystemDrivers @ 0x140A4DC4C (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140A4DEB4 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x140A4E080 (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x140A4F0F8 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140A4F20C (PipCheckDependencies.c)
 *     PipHardwareConfigInit @ 0x140A4F66C (PipHardwareConfigInit.c)
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x140A70824 (IopQueryDeviceResetRegistrySettings.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140202C20 (RtlInitUnicodeStringEx.c)
 *     IopVerifierExAllocatePool_0 @ 0x14027C6F4 (IopVerifierExAllocatePool_0.c)
 *     ZwQueryValueKey @ 0x1403F38A0 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, int a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  __int64 v9; // rax
  int v10; // ebx
  ULONG Length; // ebx
  PVOID Pool_0; // rdi
  NTSTATUS v13; // ebx
  PVOID v14; // rbx
  NTSTATUS v15; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-20h] BYREF

  ValueName = 0LL;
  ResultLength = 0;
  result = RtlInitUnicodeStringEx(&ValueName, a2);
  if ( result >= 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
    v10 = (2 * v9 + 31) & 0xFFFFFFF8;
    if ( a3 )
      Length = (a3 + v10 + 7) & 0xFFFFFFF8;
    else
      Length = v10 + 4;
    Pool_0 = IopVerifierExAllocatePool_0(PagedPool, Length);
    if ( Pool_0 )
    {
      v13 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, Pool_0, Length, &ResultLength);
      if ( v13 >= 0 )
      {
        *a4 = Pool_0;
        return 0;
      }
      ExFreePoolWithTag(Pool_0, 0);
      if ( v13 != -2147483643 && v13 != -1073741789 )
        return v13;
      v14 = IopVerifierExAllocatePool_0(PagedPool, ResultLength);
      if ( v14 )
      {
        v15 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v14, ResultLength, &ResultLength);
        if ( v15 < 0 )
        {
          ExFreePoolWithTag(v14, 0);
          return v15;
        }
        *a4 = v14;
        return 0;
      }
    }
    return -1073741670;
  }
  return result;
}
