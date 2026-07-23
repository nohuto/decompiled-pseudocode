/*
 * XREFs of KsepPoolFreePaged @ 0x140371274
 * Callers:
 *     KsepDbFreeDriverShims @ 0x1407590F0 (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14075B90C (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x14075B9C0 (KsepStringFree.c)
 *     KseAddHardwareId @ 0x14075F85C (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x1407730B4 (KseDriverUnloadImage.c)
 *     KsepSdbBootRelease @ 0x1407BD498 (KsepSdbBootRelease.c)
 *     KseRegisterShimEx @ 0x1407BDBD0 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1407BDF24 (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x1407BEF10 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1407BF0D0 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x1407CC860 (KsepCacheDeviceInsertData.c)
 *     KsepSdbBootInitialize @ 0x1407D2048 (KsepSdbBootInitialize.c)
 *     KsepDbGetShimInfo @ 0x1408BF97C (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1408BFC20 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x1408BFF80 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408C0794 (KsepResolveApplicableShimsForDriver.c)
 *     KsepStringSplitMultiString @ 0x1408C0F84 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceFree @ 0x1408C11A0 (KsepCacheDeviceFree.c)
 *     KsepCacheUninitialize @ 0x1408C1290 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x1408C156C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408C1668 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1408C172C (KsepRegistryQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C2AA64);
  }
}
