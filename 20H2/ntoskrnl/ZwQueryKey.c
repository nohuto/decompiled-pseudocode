/*
 * XREFs of ZwQueryKey @ 0x1403F8430
 * Callers:
 *     BiZwQueryKey @ 0x14039ACFC (BiZwQueryKey.c)
 *     PipIs32bitKey @ 0x14050A75C (PipIs32bitKey.c)
 *     BiOpenStoreKeyFromObject @ 0x1405C2220 (BiOpenStoreKeyFromObject.c)
 *     VrpPostEnumerateKey @ 0x1405D0DA4 (VrpPostEnumerateKey.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1406C82EC (IopApplyMutableTagToRegistryKey.c)
 *     _RegRtlQueryInfoKey @ 0x1406D844C (_RegRtlQueryInfoKey.c)
 *     RtlpValidateKeyTrust @ 0x1406DA15C (RtlpValidateKeyTrust.c)
 *     IopGetDriverNameFromKeyNode @ 0x14073714C (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryKeyInformation @ 0x140759C04 (IopGetRegistryKeyInformation.c)
 *     PiNormalizeDeviceText @ 0x140766AB0 (PiNormalizeDeviceText.c)
 *     PiRearrangeDeviceInstances @ 0x14077D264 (PiRearrangeDeviceInstances.c)
 *     CmpGetAcpiProfileInformation @ 0x14079BF64 (CmpGetAcpiProfileInformation.c)
 *     SepLoadNgenLocations @ 0x1407C5074 (SepLoadNgenLocations.c)
 *     SepReadAndPopulateCapes @ 0x1407C9B9C (SepReadAndPopulateCapes.c)
 *     CmpCloneHwProfile @ 0x140879804 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x14087A298 (CmpMoveBiosAliasTable.c)
 *     PipCallbackHasDeviceOverrides @ 0x14089DCC8 (PipCallbackHasDeviceOverrides.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B8C38 (PiDrvDbOverlayCopyKeys.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408C3D48 (KsepRegistryQueryKeyInformation.c)
 *     SepReadAndInsertCaps @ 0x1409281FC (SepReadAndInsertCaps.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093D3D8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     _RegRtlCopyTreeInternal @ 0x14097ED40 (_RegRtlCopyTreeInternal.c)
 *     EmInitSystem @ 0x140A4633C (EmInitSystem.c)
 *     PipInitDeviceOverrideCache @ 0x140A5C040 (PipInitDeviceOverrideCache.c)
 *     HalpInitChipHacks @ 0x140A6139C (HalpInitChipHacks.c)
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
