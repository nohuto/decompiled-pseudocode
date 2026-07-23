/*
 * XREFs of ZwDeleteValueKey @ 0x1403F5080
 * Callers:
 *     BiZwDeleteValueKey @ 0x1403988BC (BiZwDeleteValueKey.c)
 *     CmpSetSystemRegistryString @ 0x1403B5690 (CmpSetSystemRegistryString.c)
 *     VfClearVerifierSettings @ 0x14059AE10 (VfClearVerifierSettings.c)
 *     RtlpQueryRegistryValues @ 0x1405DFA64 (RtlpQueryRegistryValues.c)
 *     CmpCompleteUnloadKey @ 0x14064364C (CmpCompleteUnloadKey.c)
 *     ExpWnfDeletePermanentName @ 0x140710E48 (ExpWnfDeletePermanentName.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140714464 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14071A340 (_CmRemoveDeviceFromContainerWorker.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14071C6C4 (DrvDbSetRegValueMappedProperty.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14071E56C (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x14071E918 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140721A08 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140722B60 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmSetDeviceRegPropWorker @ 0x140724648 (_CmSetDeviceRegPropWorker.c)
 *     PiProcessDriverInstance @ 0x14072A040 (PiProcessDriverInstance.c)
 *     IopReleaseDeviceResources @ 0x1407322A4 (IopReleaseDeviceResources.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140739B7C (IopWriteAllocatedResourcesToRegistry.c)
 *     PiQueryAndAllocateBootResources @ 0x14073A7BC (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x14073B0C4 (PiQueryResourceRequirements.c)
 *     IopWriteResourceList @ 0x14073CA9C (IopWriteResourceList.c)
 *     PiDevCfgCopyDeviceKey @ 0x14074A84C (PiDevCfgCopyDeviceKey.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14074CBC4 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _PnpDeletePropertyWorker @ 0x14075A89C (_PnpDeletePropertyWorker.c)
 *     PiDevCfgMigrateDevice @ 0x14075BC34 (PiDevCfgMigrateDevice.c)
 *     NtEnableLastKnownGood @ 0x140769E30 (NtEnableLastKnownGood.c)
 *     PiRearrangeDeviceInstances @ 0x14076E834 (PiRearrangeDeviceInstances.c)
 *     RtlDeleteRegistryValue @ 0x14076F490 (RtlDeleteRegistryValue.c)
 *     NtSetDefaultLocale @ 0x140779A70 (NtSetDefaultLocale.c)
 *     ExpSetPendingUILanguage @ 0x140779C90 (ExpSetPendingUILanguage.c)
 *     CmpSetVersionData @ 0x1407914CC (CmpSetVersionData.c)
 *     WdipSemDeleteValueFromRegistry @ 0x14079BE10 (WdipSemDeleteValueFromRegistry.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407BDEF4 (PopThermalHandlePreviousShutdown.c)
 *     PnpDriverLoadingFailed @ 0x1407BFFD0 (PnpDriverLoadingFailed.c)
 *     CmpDoReDoDeleteValue @ 0x14087EE40 (CmpDoReDoDeleteValue.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x1408983D0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpSetRegistryRequirementsList @ 0x14089E810 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x14089E878 (PnpSetRegistryResourceList.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1408A24FC (PiDevCfgClearDeviceMigrationNode.c)
 *     SmKmKeyGenNewKey @ 0x14092847C (SmKmKeyGenNewKey.c)
 *     ExpWnfDeletePermanentStateData @ 0x1409594D4 (ExpWnfDeletePermanentStateData.c)
 *     _PnpCtxRegDeleteValue @ 0x140971420 (_PnpCtxRegDeleteValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140972568 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x1409756EC (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1409761F4 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140976270 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140976440 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbDeleteObjectSubKey @ 0x1409798BC (DrvDbDeleteObjectSubKey.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A43260 (BapdpProcessVsmKeyBlobs.c)
 *     PipInitComputerIds @ 0x140A4BC28 (PipInitComputerIds.c)
 *     PipHardwareConfigInit @ 0x140A4F66C (PipHardwareConfigInit.c)
 *     ArbDeleteMmConfigRange @ 0x140A693A4 (ArbDeleteMmConfigRange.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
