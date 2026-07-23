/*
 * XREFs of KsepPoolAllocatePaged @ 0x14037129C
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14052716C (KsepEvntLogShimsApplied.c)
 *     KsepDbCacheReadDevice @ 0x14075603C (KsepDbCacheReadDevice.c)
 *     KsepGetShimsForDriver @ 0x140758D38 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x140758E20 (KsepDbGetDriverShims.c)
 *     KsepDbGetDriverShimsInternal @ 0x14075904C (KsepDbGetDriverShimsInternal.c)
 *     KsepStringDuplicate @ 0x14075B434 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x14075B4E4 (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14075B90C (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x14075B9F4 (KsepStringDuplicateUnicode.c)
 *     KseAddHardwareId @ 0x14075F85C (KseAddHardwareId.c)
 *     KseRegisterShimEx @ 0x1407BDBD0 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1407BDF24 (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x1407BEF10 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1407BF0D0 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x1407CC860 (KsepCacheDeviceInsertData.c)
 *     KsepSdbBootInitialize @ 0x1407D2048 (KsepSdbBootInitialize.c)
 *     KsepDbGetShimInfo @ 0x1408BF97C (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1408BFC20 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x1408C0F84 (KsepStringSplitMultiString.c)
 *     KsepRegistryEnumValue @ 0x1408C156C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408C1668 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1408C172C (KsepRegistryQueryValue.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocatePaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x6145534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_140C2AA60);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C2AA70);
  }
  return v3;
}
