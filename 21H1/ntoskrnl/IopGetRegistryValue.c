/*
 * XREFs of IopGetRegistryValue @ 0x140728128
 * Callers:
 *     PnpGetRegistryDword @ 0x1403B2594 (PnpGetRegistryDword.c)
 *     PnpBootDeviceWait @ 0x1403B3664 (PnpBootDeviceWait.c)
 *     IopReadDumpRegistry @ 0x1403BBF80 (IopReadDumpRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x1403C58E8 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_ReadRegistry @ 0x1403C8168 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x1403C9FE4 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x140505210 (IopAllowRemoteDASD.c)
 *     PiDevCfgQueryResolveValue @ 0x1405089F4 (PiDevCfgQueryResolveValue.c)
 *     PiDevCfgBuildIndirectString @ 0x1407228CC (PiDevCfgBuildIndirectString.c)
 *     PnpPrepareDriverLoading @ 0x14072311C (PnpPrepareDriverLoading.c)
 *     IopQuerySecureDeviceClassState @ 0x14072522C (IopQuerySecureDeviceClassState.c)
 *     PiFindDevInstMatch @ 0x1407254B4 (PiFindDevInstMatch.c)
 *     IopBuildFullDriverPath @ 0x140725998 (IopBuildFullDriverPath.c)
 *     IopLoadDriver @ 0x140725EF8 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140727F90 (IopGetDriverNameFromKeyNode.c)
 *     PipCheckForDenyExecute @ 0x14072E448 (PipCheckForDenyExecute.c)
 *     IopInitializeDeviceInstanceKey @ 0x140737704 (IopInitializeDeviceInstanceKey.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1407391D4 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpReadDeviceConfiguration @ 0x140739780 (PnpReadDeviceConfiguration.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14073B72C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiDevCfgCopyDeviceKey @ 0x1407550CC (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgMigrateDevice @ 0x14075A02C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14076699C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x140766BD0 (PiDevCfgResolveVariable.c)
 *     PiDevCfgVerifyService @ 0x1407672E0 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1407674F0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     NtEnableLastKnownGood @ 0x140767A50 (NtEnableLastKnownGood.c)
 *     PiRearrangeDeviceInstances @ 0x14076C094 (PiRearrangeDeviceInstances.c)
 *     IopGetRegistryValues @ 0x140776C84 (IopGetRegistryValues.c)
 *     IopCopyBootLogRegistryToFile @ 0x14077A748 (IopCopyBootLogRegistryToFile.c)
 *     PipUpdateSetupInProgress @ 0x14078A4A0 (PipUpdateSetupInProgress.c)
 *     IopIsReportedAlready @ 0x140796F38 (IopIsReportedAlready.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1407A7404 (PnpCheckPossibleBootStartDriver.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407ABA90 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDriverRegistryKey @ 0x1407AF440 (IoOpenDriverRegistryKey.c)
 *     PnpDriverLoadingFailed @ 0x1407BCE60 (PnpDriverLoadingFailed.c)
 *     IopSafebootDriverLoad @ 0x14088DB84 (IopSafebootDriverLoad.c)
 *     IopLiveDumpInitRegistrySettings @ 0x140893F20 (IopLiveDumpInitRegistrySettings.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14089846C (PipGetDriverKsrGuidRegistryValue.c)
 *     PiGetDeviceRegistryProperty @ 0x14089A0F8 (PiGetDeviceRegistryProperty.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x14089CA70 (PnpGetDeviceInstanceRegistryValue.c)
 *     PipServiceInstanceToDeviceInstance @ 0x14089D380 (PipServiceInstanceToDeviceInstance.c)
 *     PipDmgInitReadGroupPolicy @ 0x14089F110 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A19E4 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A29D4 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x1408A2BFC (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A3228 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x1408A36B4 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408A3724 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x1408A3C20 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A3CF0 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1408A4F60 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x1408A5590 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A566C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x1408A5E40 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1408A6020 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B02C0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B2D98 (PiDrvDbResolveFilePathKeyValues.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x140A49B5C (IopQueryDeviceResetRegistrySettings.c)
 *     PipHardwareConfigInit @ 0x140A49BF0 (PipHardwareConfigInit.c)
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A55B0C (PipCheckSystemFirmwareUpdated.c)
 *     PiInitCacheGroupInformation @ 0x140A55EB4 (PiInitCacheGroupInformation.c)
 *     IopInitializeSystemDrivers @ 0x140A567E8 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140A56A50 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x140A56C1C (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x140A57C94 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140A57DA8 (PipCheckDependencies.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402033E4 (IopVerifierExAllocatePool.c)
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     ZwQueryValueKey @ 0x1403F2610 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
