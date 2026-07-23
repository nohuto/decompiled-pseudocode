/*
 * XREFs of ZwDeleteValueKey @ 0x1403F3DF0
 * Callers:
 *     BiZwDeleteValueKey @ 0x140398128 (BiZwDeleteValueKey.c)
 *     CmpSetSystemRegistryString @ 0x1403B2F94 (CmpSetSystemRegistryString.c)
 *     VfClearVerifierSettings @ 0x14059A720 (VfClearVerifierSettings.c)
 *     CmpCompleteUnloadKey @ 0x14065AE8C (CmpCompleteUnloadKey.c)
 *     RtlpQueryRegistryValues @ 0x1406823A0 (RtlpQueryRegistryValues.c)
 *     ExpWnfDeletePermanentName @ 0x1406ED2C8 (ExpWnfDeletePermanentName.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407125B4 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140717FB0 (_CmRemoveDeviceFromContainerWorker.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14071A6EC (DrvDbSetRegValueMappedProperty.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14071C5EC (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x14071C998 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14071FB48 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140720CA0 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1407219E8 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PiProcessDriverInstance @ 0x140725700 (PiProcessDriverInstance.c)
 *     _CmSetDeviceRegPropWorker @ 0x140729808 (_CmSetDeviceRegPropWorker.c)
 *     IopReleaseDeviceResources @ 0x140733F88 (IopReleaseDeviceResources.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140737FFC (IopWriteAllocatedResourcesToRegistry.c)
 *     PiQueryAndAllocateBootResources @ 0x140738C3C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140739544 (PiQueryResourceRequirements.c)
 *     IopWriteResourceList @ 0x14073AF1C (IopWriteResourceList.c)
 *     PiDevCfgCopyDeviceKey @ 0x1407550CC (PiDevCfgCopyDeviceKey.c)
 *     _PnpDeletePropertyWorker @ 0x140758A1C (_PnpDeletePropertyWorker.c)
 *     PiDevCfgMigrateDevice @ 0x14075A02C (PiDevCfgMigrateDevice.c)
 *     NtEnableLastKnownGood @ 0x140767A50 (NtEnableLastKnownGood.c)
 *     PiRearrangeDeviceInstances @ 0x14076C094 (PiRearrangeDeviceInstances.c)
 *     RtlDeleteRegistryValue @ 0x14076CCF0 (RtlDeleteRegistryValue.c)
 *     NtSetDefaultLocale @ 0x140777660 (NtSetDefaultLocale.c)
 *     ExpSetPendingUILanguage @ 0x140777880 (ExpSetPendingUILanguage.c)
 *     WdipSemDeleteValueFromRegistry @ 0x140786438 (WdipSemDeleteValueFromRegistry.c)
 *     CmpSetVersionData @ 0x14078F0CC (CmpSetVersionData.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407BAD84 (PopThermalHandlePreviousShutdown.c)
 *     PnpDriverLoadingFailed @ 0x1407BCE60 (PnpDriverLoadingFailed.c)
 *     CmpDoReDoDeleteValue @ 0x14087DB50 (CmpDoReDoDeleteValue.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x1408970B0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpSetRegistryRequirementsList @ 0x14089D4F0 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x14089D558 (PnpSetRegistryResourceList.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1408A11DC (PiDevCfgClearDeviceMigrationNode.c)
 *     SmKmKeyGenNewKey @ 0x1409271CC (SmKmKeyGenNewKey.c)
 *     ExpWnfDeletePermanentStateData @ 0x140958134 (ExpWnfDeletePermanentStateData.c)
 *     _PnpCtxRegDeleteValue @ 0x140970080 (_PnpCtxRegDeleteValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1409711C8 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14097434C (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x140974E54 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140974ED0 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x1409750A0 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097851C (DrvDbDeleteObjectSubKey.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A3D9AC (BapdpProcessVsmKeyBlobs.c)
 *     PipHardwareConfigInit @ 0x140A49BF0 (PipHardwareConfigInit.c)
 *     PipInitComputerIds @ 0x140A547C4 (PipInitComputerIds.c)
 *     ArbDeleteMmConfigRange @ 0x140A68F24 (ArbDeleteMmConfigRange.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
