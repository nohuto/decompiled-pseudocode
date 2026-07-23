/*
 * XREFs of ZwEnumerateValueKey @ 0x1403F2590
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1406823A0 (RtlpQueryRegistryValues.c)
 *     _RegRtlEnumValue @ 0x1406DDB1C (_RegRtlEnumValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x1407550CC (PiDevCfgCopyDeviceKey.c)
 *     ExpSetPendingUILanguage @ 0x140777880 (ExpSetPendingUILanguage.c)
 *     PiDcInitUpdateProperties @ 0x14078B0F8 (PiDcInitUpdateProperties.c)
 *     RtlpPopulateLanguageConfigList @ 0x140793F1C (RtlpPopulateLanguageConfigList.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407ABA90 (PipApplyFunctionToServiceInstances.c)
 *     SepLoadNgenLocations @ 0x1407B36D4 (SepLoadNgenLocations.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A19E4 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408A3724 (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x1408BCBCC (KsepRegistryEnumValue.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x14097D80C (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14097DAAC (_RtlpMuiRegPopulateBaseLanguages.c)
 *     EmInitSystem @ 0x140A4710C (EmInitSystem.c)
 *     HalpInitChipHacks @ 0x140A5AF9C (HalpInitChipHacks.c)
 *     PiLastGoodCopyKeyContents @ 0x140A6B51C (PiLastGoodCopyKeyContents.c)
 *     IopLoadBootHotPatches @ 0x140A6FBA0 (IopLoadBootHotPatches.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A8E7A0 (PiLastGoodRevertLastKnownDirectory.c)
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
