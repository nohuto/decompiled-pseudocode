/*
 * XREFs of IopGetRegistryValue @ 0x140742A98
 * Callers:
 *     PnpGetRegistryDword @ 0x1403B738C (PnpGetRegistryDword.c)
 *     PnpBootDeviceWait @ 0x1403B83B4 (PnpBootDeviceWait.c)
 *     IopReadDumpRegistry @ 0x1403BFF74 (IopReadDumpRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x1403C9E88 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_ReadRegistry @ 0x1403CC588 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x1403CE3C0 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140507A10 (IopAllowRemoteDASD.c)
 *     PiDevCfgQueryResolveValue @ 0x14050E4A4 (PiDevCfgQueryResolveValue.c)
 *     PiDevCfgBuildIndirectString @ 0x14073D1AC (PiDevCfgBuildIndirectString.c)
 *     PnpPrepareDriverLoading @ 0x14073D9FC (PnpPrepareDriverLoading.c)
 *     IopQuerySecureDeviceClassState @ 0x14073FB9C (IopQuerySecureDeviceClassState.c)
 *     PiFindDevInstMatch @ 0x14073FE24 (PiFindDevInstMatch.c)
 *     IopBuildFullDriverPath @ 0x140740308 (IopBuildFullDriverPath.c)
 *     IopLoadDriver @ 0x140740868 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140742900 (IopGetDriverNameFromKeyNode.c)
 *     PipCheckForDenyExecute @ 0x140748B10 (PipCheckForDenyExecute.c)
 *     IopInitializeDeviceInstanceKey @ 0x14074ED50 (IopInitializeDeviceInstanceKey.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140750824 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpReadDeviceConfiguration @ 0x140750DD0 (PnpReadDeviceConfiguration.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140752D7C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiDevCfgCopyDeviceKey @ 0x140769E0C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgMigrateDevice @ 0x14076E804 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14077B33C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x14077B570 (PiDevCfgResolveVariable.c)
 *     PiDevCfgVerifyService @ 0x14077BC80 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14077BE90 (PiDevCfgResolveVariableDeviceProperty.c)
 *     NtEnableLastKnownGood @ 0x14077C3F0 (NtEnableLastKnownGood.c)
 *     PiRearrangeDeviceInstances @ 0x140781044 (PiRearrangeDeviceInstances.c)
 *     IopGetRegistryValues @ 0x14078B474 (IopGetRegistryValues.c)
 *     IopCopyBootLogRegistryToFile @ 0x140790278 (IopCopyBootLogRegistryToFile.c)
 *     PipUpdateSetupInProgress @ 0x1407A2FD0 (PipUpdateSetupInProgress.c)
 *     IopIsReportedAlready @ 0x1407AEDC8 (IopIsReportedAlready.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1407BD104 (PnpCheckPossibleBootStartDriver.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407C0F30 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDriverRegistryKey @ 0x1407C4790 (IoOpenDriverRegistryKey.c)
 *     PnpDriverLoadingFailed @ 0x1407D2C50 (PnpDriverLoadingFailed.c)
 *     IopSafebootDriverLoad @ 0x140891F24 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x1408984C0 (IopLiveDumpInitRegistrySettings.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14089C88C (PipGetDriverKsrGuidRegistryValue.c)
 *     PiGetDeviceRegistryProperty @ 0x14089E518 (PiGetDeviceRegistryProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1408A0E90 (PnpGetDeviceInstanceRegistryValue.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408A17A0 (PipServiceInstanceToDeviceInstance.c)
 *     PipDmgInitReadGroupPolicy @ 0x1408A3530 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A5E04 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A6DF4 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x1408A701C (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A7648 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x1408A7AD4 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408A7B44 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x1408A8040 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A8110 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1408A9380 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x1408A99B0 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A9A8C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x1408AA260 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1408AA440 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B46E0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B71B8 (PiDrvDbResolveFilePathKeyValues.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x140A51260 (IopQueryDeviceResetRegistrySettings.c)
 *     PipHardwareConfigInit @ 0x140A512F4 (PipHardwareConfigInit.c)
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A5CA78 (PipCheckSystemFirmwareUpdated.c)
 *     PiInitCacheGroupInformation @ 0x140A5CE20 (PiInitCacheGroupInformation.c)
 *     IopInitializeSystemDrivers @ 0x140A5D754 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140A5D9BC (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x140A5DB88 (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x140A5EC00 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140A5ED14 (PipCheckDependencies.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x14022C9E0 (IopVerifierExAllocatePool.c)
 *     RtlInitUnicodeStringEx @ 0x140265AF0 (RtlInitUnicodeStringEx.c)
 *     ZwQueryValueKey @ 0x1403FA680 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, int a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  __int64 v9; // rax
  int v10; // ebx
  ULONG Length; // ebx
  PVOID Pool; // rdi
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
    Pool = IopVerifierExAllocatePool(PagedPool, Length);
    if ( Pool )
    {
      v13 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, Pool, Length, &ResultLength);
      if ( v13 >= 0 )
      {
        *a4 = Pool;
        return 0;
      }
      ExFreePoolWithTag(Pool, 0);
      if ( v13 != -2147483643 && v13 != -1073741789 )
        return v13;
      v14 = IopVerifierExAllocatePool(PagedPool, ResultLength);
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
