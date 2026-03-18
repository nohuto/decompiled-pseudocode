/*
 * XREFs of KsepPoolAllocatePaged @ 0x14036F10C
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x140521A7C (KsepEvntLogShimsApplied.c)
 *     KsepDbCacheReadDevice @ 0x1407403D4 (KsepDbCacheReadDevice.c)
 *     KsepGetShimsForDriver @ 0x1407431C8 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x1407432B0 (KsepDbGetDriverShims.c)
 *     KsepDbGetDriverShimsInternal @ 0x1407434DC (KsepDbGetDriverShimsInternal.c)
 *     KsepStringDuplicate @ 0x1407457E0 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x140745890 (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140745CB8 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x140745DA0 (KsepStringDuplicateUnicode.c)
 *     KseAddHardwareId @ 0x140749BFC (KseAddHardwareId.c)
 *     KseRegisterShimEx @ 0x1407AB370 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1407AB6C4 (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x1407AC6B0 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1407AC870 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x1407B9BA0 (KsepCacheDeviceInsertData.c)
 *     KsepSdbBootInitialize @ 0x1407BF398 (KsepSdbBootInitialize.c)
 *     KsepDbGetShimInfo @ 0x1408BC2FC (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1408BC5A0 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x1408BD904 (KsepStringSplitMultiString.c)
 *     KsepRegistryEnumValue @ 0x1408BDEEC (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408BDFE8 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1408BE0AC (KsepRegistryQueryValue.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocatePaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x6145534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_140C2A7C0);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C2A7D0);
  }
  return v3;
}
