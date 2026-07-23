/*
 * XREFs of ZwQueryKey @ 0x1403F25F0
 * Callers:
 *     BiZwQueryKey @ 0x1403980A8 (BiZwQueryKey.c)
 *     PipIs32bitKey @ 0x1405067DC (PipIs32bitKey.c)
 *     BiOpenStoreKeyFromObject @ 0x1405BDE80 (BiOpenStoreKeyFromObject.c)
 *     VrpPostEnumerateKey @ 0x1405C9814 (VrpPostEnumerateKey.c)
 *     RtlpValidateKeyTrust @ 0x14068325C (RtlpValidateKeyTrust.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1406D259C (IopApplyMutableTagToRegistryKey.c)
 *     _RegRtlQueryInfoKey @ 0x1406E213C (_RegRtlQueryInfoKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x140727F90 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryKeyInformation @ 0x1407558A4 (IopGetRegistryKeyInformation.c)
 *     PiNormalizeDeviceText @ 0x140755F00 (PiNormalizeDeviceText.c)
 *     PiRearrangeDeviceInstances @ 0x14076C094 (PiRearrangeDeviceInstances.c)
 *     CmpGetAcpiProfileInformation @ 0x14078D6DC (CmpGetAcpiProfileInformation.c)
 *     SepLoadNgenLocations @ 0x1407B36D4 (SepLoadNgenLocations.c)
 *     SepReadAndPopulateCapes @ 0x1407B819C (SepReadAndPopulateCapes.c)
 *     CmpCloneHwProfile @ 0x1408729C4 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140873458 (CmpMoveBiosAliasTable.c)
 *     PipCallbackHasDeviceOverrides @ 0x140896E78 (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B1CF8 (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408BCCC8 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x140921124 (SepReadAndInsertCaps.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x140936308 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     _RegRtlCopyTreeInternal @ 0x140977BD0 (_RegRtlCopyTreeInternal.c)
 *     EmInitSystem @ 0x140A4710C (EmInitSystem.c)
 *     PipInitDeviceOverrideCache @ 0x140A55C40 (PipInitDeviceOverrideCache.c)
 *     HalpInitChipHacks @ 0x140A5AF9C (HalpInitChipHacks.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
