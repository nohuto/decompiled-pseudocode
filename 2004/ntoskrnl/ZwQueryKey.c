/*
 * XREFs of ZwQueryKey @ 0x1403F3880
 * Callers:
 *     BiZwQueryKey @ 0x14039883C (BiZwQueryKey.c)
 *     PipIs32bitKey @ 0x140506E2C (PipIs32bitKey.c)
 *     BiOpenStoreKeyFromObject @ 0x1405BE5A0 (BiOpenStoreKeyFromObject.c)
 *     VrpPostEnumerateKey @ 0x1405CABE4 (VrpPostEnumerateKey.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1406F507C (IopApplyMutableTagToRegistryKey.c)
 *     _RegRtlQueryInfoKey @ 0x140704ABC (_RegRtlQueryInfoKey.c)
 *     RtlpValidateKeyTrust @ 0x1407075DC (RtlpValidateKeyTrust.c)
 *     IopGetDriverNameFromKeyNode @ 0x1407286BC (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryKeyInformation @ 0x14074B024 (IopGetRegistryKeyInformation.c)
 *     PiNormalizeDeviceText @ 0x140757E70 (PiNormalizeDeviceText.c)
 *     PiRearrangeDeviceInstances @ 0x14076E834 (PiRearrangeDeviceInstances.c)
 *     CmpGetAcpiProfileInformation @ 0x14078F5AC (CmpGetAcpiProfileInformation.c)
 *     SepLoadNgenLocations @ 0x1407B6844 (SepLoadNgenLocations.c)
 *     SepReadAndPopulateCapes @ 0x1407BB30C (SepReadAndPopulateCapes.c)
 *     CmpCloneHwProfile @ 0x140873CB4 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140874748 (CmpMoveBiosAliasTable.c)
 *     PipCallbackHasDeviceOverrides @ 0x140898198 (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B3018 (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408BDFE8 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x14092219C (SepReadAndInsertCaps.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409375A8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     _RegRtlCopyTreeInternal @ 0x140978F70 (_RegRtlCopyTreeInternal.c)
 *     EmInitSystem @ 0x140A4009C (EmInitSystem.c)
 *     PipInitDeviceOverrideCache @ 0x140A4D0A4 (PipInitDeviceOverrideCache.c)
 *     HalpInitChipHacks @ 0x140A5A03C (HalpInitChipHacks.c)
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
