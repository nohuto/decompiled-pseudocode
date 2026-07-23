/*
 * XREFs of ZwEnumerateKey @ 0x1403F87B0
 * Callers:
 *     BiZwEnumerateKey @ 0x14039AC5C (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403B712C (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403B724C (_RtlpMuiRegLoadInstalledFromKey.c)
 *     VrpPostEnumerateKey @ 0x1405D0DA4 (VrpPostEnumerateKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406C96F4 (RtlpProcessIFEOKeyFilter.c)
 *     PiDevCfgCopyDeviceKey @ 0x14075942C (PiDevCfgCopyDeviceKey.c)
 *     _RegRtlEnumKey @ 0x14076358C (_RegRtlEnumKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140764308 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1407643B4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     pIoQueryBusDescription @ 0x140787324 (pIoQueryBusDescription.c)
 *     EtwpEnumerateKeyProviders @ 0x14078ED40 (EtwpEnumerateKeyProviders.c)
 *     PiDcInitUpdateProperties @ 0x140799708 (PiDcInitUpdateProperties.c)
 *     CmpGetAcpiProfileInformation @ 0x14079BF64 (CmpGetAcpiProfileInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1407A009C (RtlpUpdateDynamicTimeZones.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407A94B8 (EtwpLoadMicroarchitecturalPmcs.c)
 *     WdipSemLoadNextEndEvent @ 0x1407A9CA0 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x1407A9FA4 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x1407AA224 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1407AA630 (WdipSemLoadNextScenario.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407ABBD0 (EtwpEnumerateAutologgerPath.c)
 *     NtLockProductActivationKeys @ 0x1407AF0E0 (NtLockProductActivationKeys.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1407B6BA8 (PopDetectSimulatedHeteroProcessors.c)
 *     CmDeleteKeyRecursive @ 0x140879410 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x140879804 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x14087A298 (CmpMoveBiosAliasTable.c)
 *     SepReadAndInsertCaps @ 0x1409281FC (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140932AE0 (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x14093C980 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14093CDBC (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093D3D8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     ApiSetpLoadSchemaExtensions @ 0x140961414 (ApiSetpLoadSchemaExtensions.c)
 *     AslRegistryEnumKey @ 0x14096A424 (AslRegistryEnumKey.c)
 *     PipInitDeviceOverrideCache @ 0x140A5C040 (PipInitDeviceOverrideCache.c)
 *     RegistryOverwriteCentralProcessor @ 0x140A8F760 (RegistryOverwriteCentralProcessor.c)
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
