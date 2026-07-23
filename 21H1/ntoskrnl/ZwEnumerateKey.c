/*
 * XREFs of ZwEnumerateKey @ 0x1403F2970
 * Callers:
 *     BiZwEnumerateKey @ 0x140398008 (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403B3914 (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403B3A34 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     VrpPostEnumerateKey @ 0x1405C9814 (VrpPostEnumerateKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406D3A74 (RtlpProcessIFEOKeyFilter.c)
 *     _RegRtlEnumKey @ 0x1407502BC (_RegRtlEnumKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140751038 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1407510E4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyDeviceKey @ 0x1407550CC (PiDevCfgCopyDeviceKey.c)
 *     pIoQueryBusDescription @ 0x140776914 (pIoQueryBusDescription.c)
 *     EtwpEnumerateKeyProviders @ 0x14077D364 (EtwpEnumerateKeyProviders.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140784A24 (EtwpLoadMicroarchitecturalPmcs.c)
 *     WdipSemLoadNextEndEvent @ 0x140784F98 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14078529C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14078551C (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140785928 (WdipSemLoadNextScenario.c)
 *     PiDcInitUpdateProperties @ 0x14078B0F8 (PiDcInitUpdateProperties.c)
 *     CmpGetAcpiProfileInformation @ 0x14078D6DC (CmpGetAcpiProfileInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140790DA4 (RtlpUpdateDynamicTimeZones.c)
 *     NtLockProductActivationKeys @ 0x14079BDB0 (NtLockProductActivationKeys.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407A035C (EtwpEnumerateAutologgerPath.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1407A6144 (PopDetectSimulatedHeteroProcessors.c)
 *     CmDeleteKeyRecursive @ 0x1408725D0 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1408729C4 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140873458 (CmpMoveBiosAliasTable.c)
 *     SepReadAndInsertCaps @ 0x140921124 (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14092BA00 (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1409358B0 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x140935CEC (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x140936308 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     ApiSetpLoadSchemaExtensions @ 0x14095A2B4 (ApiSetpLoadSchemaExtensions.c)
 *     AslRegistryEnumKey @ 0x1409632B4 (AslRegistryEnumKey.c)
 *     PipInitDeviceOverrideCache @ 0x140A55C40 (PipInitDeviceOverrideCache.c)
 *     RegistryOverwriteCentralProcessor @ 0x140A8A4C0 (RegistryOverwriteCentralProcessor.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
