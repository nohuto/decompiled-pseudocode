/*
 * XREFs of KsepPoolFreePaged @ 0x1402D8494
 * Callers:
 *     KseDriverUnloadImage @ 0x1406EAFE4 (KseDriverUnloadImage.c)
 *     KsepDbFreeDriverShims @ 0x14075C424 (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14075CC14 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x14075CDC4 (KsepStringFree.c)
 *     KseAddHardwareId @ 0x1407EC8C4 (KseAddHardwareId.c)
 *     KseRegisterShimEx @ 0x140825A70 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x140825DCC (KsepGetLoadedModulesList.c)
 *     KsepRegistryQuerySZ @ 0x140826C10 (KsepRegistryQuerySZ.c)
 *     KsepCacheInitialize @ 0x140826D50 (KsepCacheInitialize.c)
 *     KsepSdbBootInitialize @ 0x1408277FC (KsepSdbBootInitialize.c)
 *     KsepSdbBootRelease @ 0x14084DC30 (KsepSdbBootRelease.c)
 *     KsepCacheDeviceInsertData @ 0x14085C084 (KsepCacheDeviceInsertData.c)
 *     KsepDbGetShimInfo @ 0x1409638AC (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140963B40 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x140963EA0 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1409646B4 (KsepResolveApplicableShimsForDriver.c)
 *     KsepStringSplitMultiString @ 0x140964E64 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceFree @ 0x140965070 (KsepCacheDeviceFree.c)
 *     KsepCacheUninitialize @ 0x140965160 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x1409653FC (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1409654F8 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1409655BC (KsepRegistryQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C2A1A4);
  }
}
