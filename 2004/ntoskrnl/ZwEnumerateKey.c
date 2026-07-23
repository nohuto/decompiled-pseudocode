/*
 * XREFs of ZwEnumerateKey @ 0x1403F3C00
 * Callers:
 *     BiZwEnumerateKey @ 0x14039879C (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403B3500 (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403B3620 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     VrpPostEnumerateKey @ 0x1405CABE4 (VrpPostEnumerateKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406F6868 (RtlpProcessIFEOKeyFilter.c)
 *     PiDevCfgCopyDeviceKey @ 0x14074A84C (PiDevCfgCopyDeviceKey.c)
 *     _RegRtlEnumKey @ 0x14075494C (_RegRtlEnumKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1407556C8 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140755774 (PiDevCfgConfigureDeviceInterfaces.c)
 *     pIoQueryBusDescription @ 0x140778D24 (pIoQueryBusDescription.c)
 *     EtwpEnumerateKeyProviders @ 0x14077C948 (EtwpEnumerateKeyProviders.c)
 *     PiDcInitUpdateProperties @ 0x14078CFC8 (PiDcInitUpdateProperties.c)
 *     CmpGetAcpiProfileInformation @ 0x14078F5AC (CmpGetAcpiProfileInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140793910 (RtlpUpdateDynamicTimeZones.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x14079A188 (EtwpLoadMicroarchitecturalPmcs.c)
 *     WdipSemLoadNextEndEvent @ 0x14079A970 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14079AC74 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14079AEF4 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x14079B300 (WdipSemLoadNextScenario.c)
 *     EtwpEnumerateAutologgerPath @ 0x14079C8A0 (EtwpEnumerateAutologgerPath.c)
 *     NtLockProductActivationKeys @ 0x14079FDB0 (NtLockProductActivationKeys.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1407A8B84 (PopDetectSimulatedHeteroProcessors.c)
 *     CmDeleteKeyRecursive @ 0x1408738C0 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x140873CB4 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140874748 (CmpMoveBiosAliasTable.c)
 *     SepReadAndInsertCaps @ 0x14092219C (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14092CCB0 (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x140936B50 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x140936F8C (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409375A8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     ApiSetpLoadSchemaExtensions @ 0x14095B654 (ApiSetpLoadSchemaExtensions.c)
 *     AslRegistryEnumKey @ 0x140964654 (AslRegistryEnumKey.c)
 *     PipInitDeviceOverrideCache @ 0x140A4D0A4 (PipInitDeviceOverrideCache.c)
 *     RegistryOverwriteCentralProcessor @ 0x140A89A50 (RegistryOverwriteCentralProcessor.c)
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
