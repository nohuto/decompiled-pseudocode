/*
 * XREFs of KsepPoolFreePaged @ 0x140371724
 * Callers:
 *     KsepDbFreeDriverShims @ 0x140758F30 (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14075B74C (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x14075B800 (KsepStringFree.c)
 *     KseAddHardwareId @ 0x14075F69C (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x140772EF4 (KseDriverUnloadImage.c)
 *     KsepSdbBootRelease @ 0x1407BCD08 (KsepSdbBootRelease.c)
 *     KseRegisterShimEx @ 0x1407BD440 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1407BD794 (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x1407BE780 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1407BE940 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x1407CC6F0 (KsepCacheDeviceInsertData.c)
 *     KsepSdbBootInitialize @ 0x1407D1ED8 (KsepSdbBootInitialize.c)
 *     KsepDbGetShimInfo @ 0x1408BF81C (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1408BFAC0 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x1408BFE20 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408C0634 (KsepResolveApplicableShimsForDriver.c)
 *     KsepStringSplitMultiString @ 0x1408C0E24 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceFree @ 0x1408C1040 (KsepCacheDeviceFree.c)
 *     KsepCacheUninitialize @ 0x1408C1130 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x1408C140C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408C1508 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1408C15CC (KsepRegistryQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C2AA24);
  }
}
