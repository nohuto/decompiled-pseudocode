/*
 * XREFs of ZwEnumerateValueKey @ 0x1403F3820
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1405DFA64 (RtlpQueryRegistryValues.c)
 *     _RegRtlEnumValue @ 0x1407007A4 (_RegRtlEnumValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x14074A84C (PiDevCfgCopyDeviceKey.c)
 *     ExpSetPendingUILanguage @ 0x140779C90 (ExpSetPendingUILanguage.c)
 *     RtlpPopulateLanguageConfigList @ 0x140789CEC (RtlpPopulateLanguageConfigList.c)
 *     PiDcInitUpdateProperties @ 0x14078CFC8 (PiDcInitUpdateProperties.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407AEBF0 (PipApplyFunctionToServiceInstances.c)
 *     SepLoadNgenLocations @ 0x1407B6844 (SepLoadNgenLocations.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A2D04 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408A4A44 (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x1408BDEEC (KsepRegistryEnumValue.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x14097EBAC (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14097EE4C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     EmInitSystem @ 0x140A4009C (EmInitSystem.c)
 *     HalpInitChipHacks @ 0x140A5A03C (HalpInitChipHacks.c)
 *     PiLastGoodCopyKeyContents @ 0x140A6B7A4 (PiLastGoodCopyKeyContents.c)
 *     IopLoadBootHotPatches @ 0x140A70768 (IopLoadBootHotPatches.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A8DD90 (PiLastGoodRevertLastKnownDirectory.c)
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
