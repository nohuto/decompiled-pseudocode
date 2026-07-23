/*
 * XREFs of ZwEnumerateValueKey @ 0x1403F83D0
 * Callers:
 *     RtlpQueryRegistryValues @ 0x14066AD7C (RtlpQueryRegistryValues.c)
 *     _RegRtlEnumValue @ 0x1406D3F38 (_RegRtlEnumValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x14075942C (PiDevCfgCopyDeviceKey.c)
 *     ExpSetPendingUILanguage @ 0x140788290 (ExpSetPendingUILanguage.c)
 *     PiDcInitUpdateProperties @ 0x140799708 (PiDcInitUpdateProperties.c)
 *     RtlpPopulateLanguageConfigList @ 0x1407A2FFC (RtlpPopulateLanguageConfigList.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407BCB30 (PipApplyFunctionToServiceInstances.c)
 *     SepLoadNgenLocations @ 0x1407C5074 (SepLoadNgenLocations.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A8834 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408AA574 (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x1408C3C4C (KsepRegistryEnumValue.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x14098497C (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140984C1C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     EmInitSystem @ 0x140A4633C (EmInitSystem.c)
 *     HalpInitChipHacks @ 0x140A6139C (HalpInitChipHacks.c)
 *     PiLastGoodCopyKeyContents @ 0x140A72088 (PiLastGoodCopyKeyContents.c)
 *     IopLoadBootHotPatches @ 0x140A76BA0 (IopLoadBootHotPatches.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A93A90 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
