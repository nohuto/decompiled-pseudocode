/*
 * XREFs of ZwDeleteValueKey @ 0x1403F9C50
 * Callers:
 *     BiZwDeleteValueKey @ 0x14039AD7C (BiZwDeleteValueKey.c)
 *     CmpSetSystemRegistryString @ 0x1403B6754 (CmpSetSystemRegistryString.c)
 *     VfClearVerifierSettings @ 0x14059E8B0 (VfClearVerifierSettings.c)
 *     RtlpQueryRegistryValues @ 0x14066AD7C (RtlpQueryRegistryValues.c)
 *     CmpCompleteUnloadKey @ 0x1406A2C9C (CmpCompleteUnloadKey.c)
 *     ExpWnfDeletePermanentName @ 0x1406E3308 (ExpWnfDeletePermanentName.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140722198 (DrvDbSetRegValueMappedProperty.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407226DC (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140728330 (_CmRemoveDeviceFromContainerWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14072C408 (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x14072C7B4 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14072FB18 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140730C70 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmSetDeviceRegPropWorker @ 0x1407330D8 (_CmSetDeviceRegPropWorker.c)
 *     PiProcessDriverInstance @ 0x140738AD0 (PiProcessDriverInstance.c)
 *     IopReleaseDeviceResources @ 0x14074164C (IopReleaseDeviceResources.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140748A8C (IopWriteAllocatedResourcesToRegistry.c)
 *     PiQueryAndAllocateBootResources @ 0x1407496CC (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140749FD4 (PiQueryResourceRequirements.c)
 *     IopWriteResourceList @ 0x14074B9AC (IopWriteResourceList.c)
 *     PiDevCfgCopyDeviceKey @ 0x14075942C (PiDevCfgCopyDeviceKey.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14075B7A4 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _PnpDeletePropertyWorker @ 0x14076905C (_PnpDeletePropertyWorker.c)
 *     PiDevCfgMigrateDevice @ 0x14076A524 (PiDevCfgMigrateDevice.c)
 *     NtEnableLastKnownGood @ 0x140778440 (NtEnableLastKnownGood.c)
 *     PiRearrangeDeviceInstances @ 0x14077D264 (PiRearrangeDeviceInstances.c)
 *     RtlDeleteRegistryValue @ 0x14077DA40 (RtlDeleteRegistryValue.c)
 *     NtSetDefaultLocale @ 0x140788070 (NtSetDefaultLocale.c)
 *     ExpSetPendingUILanguage @ 0x140788290 (ExpSetPendingUILanguage.c)
 *     CmpSetVersionData @ 0x14079DD6C (CmpSetVersionData.c)
 *     WdipSemDeleteValueFromRegistry @ 0x1407AB140 (WdipSemDeleteValueFromRegistry.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407CC784 (PopThermalHandlePreviousShutdown.c)
 *     PnpDriverLoadingFailed @ 0x1407CE860 (PnpDriverLoadingFailed.c)
 *     CmpDoReDoDeleteValue @ 0x1408849CC (CmpDoReDoDeleteValue.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14089DF00 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpSetRegistryRequirementsList @ 0x1408A4340 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x1408A43A8 (PnpSetRegistryResourceList.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1408A802C (PiDevCfgClearDeviceMigrationNode.c)
 *     SmKmKeyGenNewKey @ 0x14092E2A4 (SmKmKeyGenNewKey.c)
 *     ExpWnfDeletePermanentStateData @ 0x14095F294 (ExpWnfDeletePermanentStateData.c)
 *     _PnpCtxRegDeleteValue @ 0x1409771F0 (_PnpCtxRegDeleteValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140978338 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14097B4BC (_CmRemovePanelDeviceWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x14097BFC4 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x14097C040 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x14097C210 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097F68C (DrvDbDeleteObjectSubKey.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A49500 (BapdpProcessVsmKeyBlobs.c)
 *     PipHardwareConfigInit @ 0x140A4FCEC (PipHardwareConfigInit.c)
 *     PipInitComputerIds @ 0x140A5ABC4 (PipInitComputerIds.c)
 *     ArbDeleteMmConfigRange @ 0x140A6FBD4 (ArbDeleteMmConfigRange.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
