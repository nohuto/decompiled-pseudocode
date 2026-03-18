/*
 * XREFs of IopGetRegistryValue @ 0x1407372E4
 * Callers:
 *     PnpGetRegistryDword @ 0x1403B5D4C (PnpGetRegistryDword.c)
 *     PnpBootDeviceWait @ 0x1403B6E24 (PnpBootDeviceWait.c)
 *     IopReadDumpRegistry @ 0x1403BF720 (IopReadDumpRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x1403C92E8 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_ReadRegistry @ 0x1403CBBB8 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x1403CD9E0 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140505E90 (IopAllowRemoteDASD.c)
 *     PiDevCfgQueryResolveValue @ 0x14050C974 (PiDevCfgQueryResolveValue.c)
 *     IopGetDriverNameFromKeyNode @ 0x14073714C (IopGetDriverNameFromKeyNode.c)
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 *     IopBuildFullDriverPath @ 0x140738824 (IopBuildFullDriverPath.c)
 *     PiFindDevInstMatch @ 0x140738D4C (PiFindDevInstMatch.c)
 *     IopQuerySecureDeviceClassState @ 0x140739070 (IopQuerySecureDeviceClassState.c)
 *     PnpPrepareDriverLoading @ 0x14073B76C (PnpPrepareDriverLoading.c)
 *     PiDevCfgBuildIndirectString @ 0x14073B9CC (PiDevCfgBuildIndirectString.c)
 *     PipCheckForDenyExecute @ 0x140744DBC (PipCheckForDenyExecute.c)
 *     IopInitializeDeviceInstanceKey @ 0x140748194 (IopInitializeDeviceInstanceKey.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140749C64 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpReadDeviceConfiguration @ 0x14074A210 (PnpReadDeviceConfiguration.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14074C1BC (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiDevCfgCopyDeviceKey @ 0x14075942C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgMigrateDevice @ 0x14076A524 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14077738C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x1407775C0 (PiDevCfgResolveVariable.c)
 *     PiDevCfgVerifyService @ 0x140777CD0 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140777EE0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     NtEnableLastKnownGood @ 0x140778440 (NtEnableLastKnownGood.c)
 *     PiRearrangeDeviceInstances @ 0x14077D264 (PiRearrangeDeviceInstances.c)
 *     IopGetRegistryValues @ 0x140787694 (IopGetRegistryValues.c)
 *     IopCopyBootLogRegistryToFile @ 0x140790B40 (IopCopyBootLogRegistryToFile.c)
 *     PipUpdateSetupInProgress @ 0x140798AB0 (PipUpdateSetupInProgress.c)
 *     IopIsReportedAlready @ 0x1407A6018 (IopIsReportedAlready.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1407B84A4 (PnpCheckPossibleBootStartDriver.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407BCB30 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDriverRegistryKey @ 0x1407C0460 (IoOpenDriverRegistryKey.c)
 *     PnpDriverLoadingFailed @ 0x1407CE860 (PnpDriverLoadingFailed.c)
 *     IopSafebootDriverLoad @ 0x140894964 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x14089AEF0 (IopLiveDumpInitRegistrySettings.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14089F2BC (PipGetDriverKsrGuidRegistryValue.c)
 *     PiGetDeviceRegistryProperty @ 0x1408A0F48 (PiGetDeviceRegistryProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1408A38C0 (PnpGetDeviceInstanceRegistryValue.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408A41D0 (PipServiceInstanceToDeviceInstance.c)
 *     PipDmgInitReadGroupPolicy @ 0x1408A5F60 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A8834 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A9824 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x1408A9A4C (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408AA078 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x1408AA504 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408AA574 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x1408AAA70 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408AAB40 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1408ABDB0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x1408AC3E0 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408AC4BC (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x1408ACC90 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1408ACE70 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B7200 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B9CD8 (PiDrvDbResolveFilePathKeyValues.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x140A4FC58 (IopQueryDeviceResetRegistrySettings.c)
 *     PipHardwareConfigInit @ 0x140A4FCEC (PipHardwareConfigInit.c)
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A5BF0C (PipCheckSystemFirmwareUpdated.c)
 *     PiInitCacheGroupInformation @ 0x140A5C2B4 (PiInitCacheGroupInformation.c)
 *     IopInitializeSystemDrivers @ 0x140A5CBE8 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140A5CE50 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x140A5D01C (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x140A5E094 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140A5E1A8 (PipCheckDependencies.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x14020AC94 (IopVerifierExAllocatePool.c)
 *     RtlInitUnicodeStringEx @ 0x140267E90 (RtlInitUnicodeStringEx.c)
 *     ZwQueryValueKey @ 0x1403F8450 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
