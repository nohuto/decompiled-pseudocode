/*
 * XREFs of KsepPoolAllocatePaged @ 0x14036E4DC
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14052142C (KsepEvntLogShimsApplied.c)
 *     KsepDbCacheReadDevice @ 0x14073E854 (KsepDbCacheReadDevice.c)
 *     KsepGetShimsForDriver @ 0x140741648 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x140741730 (KsepDbGetDriverShims.c)
 *     KsepDbGetDriverShimsInternal @ 0x14074195C (KsepDbGetDriverShimsInternal.c)
 *     KsepStringDuplicate @ 0x140743C60 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x140743D10 (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140744138 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x140744220 (KsepStringDuplicateUnicode.c)
 *     KseAddHardwareId @ 0x14074807C (KseAddHardwareId.c)
 *     KseRegisterShimEx @ 0x1407A8210 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1407A8564 (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x1407A9550 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1407A9710 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x1407B6A30 (KsepCacheDeviceInsertData.c)
 *     KsepSdbBootInitialize @ 0x1407BC228 (KsepSdbBootInitialize.c)
 *     KsepDbGetShimInfo @ 0x1408BAFDC (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1408BB280 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x1408BC5E4 (KsepStringSplitMultiString.c)
 *     KsepRegistryEnumValue @ 0x1408BCBCC (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408BCCC8 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1408BCD8C (KsepRegistryQueryValue.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocatePaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x6145534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_140C2A9C0);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C2A9D0);
  }
  return v3;
}
