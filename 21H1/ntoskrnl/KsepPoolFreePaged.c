/*
 * XREFs of KsepPoolFreePaged @ 0x14036E4B4
 * Callers:
 *     KsepDbFreeDriverShims @ 0x140741A00 (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140744138 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x1407441EC (KsepStringFree.c)
 *     KseAddHardwareId @ 0x14074807C (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x14075E3F4 (KseDriverUnloadImage.c)
 *     KsepSdbBootRelease @ 0x1407A6468 (KsepSdbBootRelease.c)
 *     KseRegisterShimEx @ 0x1407A8210 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1407A8564 (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x1407A9550 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1407A9710 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x1407B6A30 (KsepCacheDeviceInsertData.c)
 *     KsepSdbBootInitialize @ 0x1407BC228 (KsepSdbBootInitialize.c)
 *     KsepDbGetShimInfo @ 0x1408BAFDC (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1408BB280 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x1408BB5E0 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408BBDF4 (KsepResolveApplicableShimsForDriver.c)
 *     KsepStringSplitMultiString @ 0x1408BC5E4 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceFree @ 0x1408BC800 (KsepCacheDeviceFree.c)
 *     KsepCacheUninitialize @ 0x1408BC8F0 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x1408BCBCC (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408BCCC8 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1408BCD8C (KsepRegistryQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C2A9C4);
  }
}
