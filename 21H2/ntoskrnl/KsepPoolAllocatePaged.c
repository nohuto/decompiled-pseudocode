/*
 * XREFs of KsepPoolAllocatePaged @ 0x14037174C
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x140526F2C (KsepEvntLogShimsApplied.c)
 *     KsepDbCacheReadDevice @ 0x140755E7C (KsepDbCacheReadDevice.c)
 *     KsepGetShimsForDriver @ 0x140758B78 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x140758C60 (KsepDbGetDriverShims.c)
 *     KsepDbGetDriverShimsInternal @ 0x140758E8C (KsepDbGetDriverShimsInternal.c)
 *     KsepStringDuplicate @ 0x14075B274 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x14075B324 (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14075B74C (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x14075B834 (KsepStringDuplicateUnicode.c)
 *     KseAddHardwareId @ 0x14075F69C (KseAddHardwareId.c)
 *     KseRegisterShimEx @ 0x1407BD440 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1407BD794 (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x1407BE780 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1407BE940 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x1407CC6F0 (KsepCacheDeviceInsertData.c)
 *     KsepSdbBootInitialize @ 0x1407D1ED8 (KsepSdbBootInitialize.c)
 *     KsepDbGetShimInfo @ 0x1408BF81C (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1408BFAC0 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x1408C0E24 (KsepStringSplitMultiString.c)
 *     KsepRegistryEnumValue @ 0x1408C140C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408C1508 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1408C15CC (KsepRegistryQueryValue.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocatePaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x6145534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_140C2AA20);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C2AA30);
  }
  return v3;
}
