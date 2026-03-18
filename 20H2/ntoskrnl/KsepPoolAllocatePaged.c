/*
 * XREFs of KsepPoolAllocatePaged @ 0x14037105C
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14052544C (KsepEvntLogShimsApplied.c)
 *     KsepDbCacheReadDevice @ 0x14074EFB4 (KsepDbCacheReadDevice.c)
 *     KsepGetShimsForDriver @ 0x140751DA8 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x140751E90 (KsepDbGetDriverShims.c)
 *     KsepDbGetDriverShimsInternal @ 0x1407520BC (KsepDbGetDriverShimsInternal.c)
 *     KsepStringDuplicate @ 0x1407543C0 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x140754470 (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140754898 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x140754980 (KsepStringDuplicateUnicode.c)
 *     KseAddHardwareId @ 0x1407587DC (KseAddHardwareId.c)
 *     KseRegisterShimEx @ 0x1407B92B0 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1407B9604 (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x1407BA5F0 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1407BA7B0 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x1407C8430 (KsepCacheDeviceInsertData.c)
 *     KsepSdbBootInitialize @ 0x1407CDC28 (KsepSdbBootInitialize.c)
 *     KsepDbGetShimInfo @ 0x1408C205C (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1408C2300 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x1408C3664 (KsepStringSplitMultiString.c)
 *     KsepRegistryEnumValue @ 0x1408C3C4C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408C3D48 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1408C3E0C (KsepRegistryQueryValue.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocatePaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x6145534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_140C2A8A0);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C2A8B0);
  }
  return v3;
}
