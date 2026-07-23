/*
 * XREFs of IopGetRegistryValue @ 0x140742C58
 * Callers:
 *     PnpGetRegistryDword @ 0x1403B74FC (PnpGetRegistryDword.c)
 *     PnpBootDeviceWait @ 0x1403B8524 (PnpBootDeviceWait.c)
 *     IopReadDumpRegistry @ 0x1403C03A0 (IopReadDumpRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x1403CA028 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_ReadRegistry @ 0x1403CC6F8 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x1403CE530 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140507990 (IopAllowRemoteDASD.c)
 *     PiDevCfgQueryResolveValue @ 0x14050E6E4 (PiDevCfgQueryResolveValue.c)
 *     PiDevCfgBuildIndirectString @ 0x14073D36C (PiDevCfgBuildIndirectString.c)
 *     PnpPrepareDriverLoading @ 0x14073DBBC (PnpPrepareDriverLoading.c)
 *     IopQuerySecureDeviceClassState @ 0x14073FD5C (IopQuerySecureDeviceClassState.c)
 *     PiFindDevInstMatch @ 0x14073FFE4 (PiFindDevInstMatch.c)
 *     IopBuildFullDriverPath @ 0x1407404C8 (IopBuildFullDriverPath.c)
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140742AC0 (IopGetDriverNameFromKeyNode.c)
 *     PipCheckForDenyExecute @ 0x140748CD0 (PipCheckForDenyExecute.c)
 *     IopInitializeDeviceInstanceKey @ 0x14074EF10 (IopInitializeDeviceInstanceKey.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1407509E4 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpReadDeviceConfiguration @ 0x140750F90 (PnpReadDeviceConfiguration.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140752F3C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiDevCfgCopyDeviceKey @ 0x140769FCC (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgMigrateDevice @ 0x14076E9C4 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14077B4FC (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x14077B730 (PiDevCfgResolveVariable.c)
 *     PiDevCfgVerifyService @ 0x14077BE40 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14077C050 (PiDevCfgResolveVariableDeviceProperty.c)
 *     NtEnableLastKnownGood @ 0x14077C5B0 (NtEnableLastKnownGood.c)
 *     PiRearrangeDeviceInstances @ 0x140781204 (PiRearrangeDeviceInstances.c)
 *     IopGetRegistryValues @ 0x14078B634 (IopGetRegistryValues.c)
 *     IopCopyBootLogRegistryToFile @ 0x140791828 (IopCopyBootLogRegistryToFile.c)
 *     PipUpdateSetupInProgress @ 0x1407A31D0 (PipUpdateSetupInProgress.c)
 *     IopIsReportedAlready @ 0x1407AEFC8 (IopIsReportedAlready.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1407BD894 (PnpCheckPossibleBootStartDriver.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407C1450 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDriverRegistryKey @ 0x1407C4CB0 (IoOpenDriverRegistryKey.c)
 *     PnpDriverLoadingFailed @ 0x1407D2DC0 (PnpDriverLoadingFailed.c)
 *     IopSafebootDriverLoad @ 0x140892084 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x140898620 (IopLiveDumpInitRegistrySettings.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14089C9EC (PipGetDriverKsrGuidRegistryValue.c)
 *     PiGetDeviceRegistryProperty @ 0x14089E678 (PiGetDeviceRegistryProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1408A0FF0 (PnpGetDeviceInstanceRegistryValue.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408A1900 (PipServiceInstanceToDeviceInstance.c)
 *     PipDmgInitReadGroupPolicy @ 0x1408A3690 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A5F64 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A6F54 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x1408A717C (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A77A8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x1408A7C34 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408A7CA4 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x1408A81A0 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A8270 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1408A94E0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x1408A9B10 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A9BEC (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x1408AA3C0 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1408AA5A0 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B4840 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B7318 (PiDrvDbResolveFilePathKeyValues.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x140A52260 (IopQueryDeviceResetRegistrySettings.c)
 *     PipHardwareConfigInit @ 0x140A522F4 (PipHardwareConfigInit.c)
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A5DA78 (PipCheckSystemFirmwareUpdated.c)
 *     PiInitCacheGroupInformation @ 0x140A5DE20 (PiInitCacheGroupInformation.c)
 *     IopInitializeSystemDrivers @ 0x140A5E754 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140A5E9BC (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x140A5EB88 (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x140A5FC00 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140A5FD14 (PipCheckDependencies.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402336E0 (IopVerifierExAllocatePool.c)
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
