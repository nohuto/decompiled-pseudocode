/*
 * XREFs of KsepPoolFreePaged @ 0x140371034
 * Callers:
 *     KsepDbFreeDriverShims @ 0x140752160 (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140754898 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x14075494C (KsepStringFree.c)
 *     KseAddHardwareId @ 0x1407587DC (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x14076ED74 (KseDriverUnloadImage.c)
 *     KsepSdbBootRelease @ 0x1407B80A8 (KsepSdbBootRelease.c)
 *     KseRegisterShimEx @ 0x1407B92B0 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1407B9604 (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x1407BA5F0 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1407BA7B0 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x1407C8430 (KsepCacheDeviceInsertData.c)
 *     KsepSdbBootInitialize @ 0x1407CDC28 (KsepSdbBootInitialize.c)
 *     KsepDbGetShimInfo @ 0x1408C205C (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1408C2300 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x1408C2660 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408C2E74 (KsepResolveApplicableShimsForDriver.c)
 *     KsepStringSplitMultiString @ 0x1408C3664 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceFree @ 0x1408C3880 (KsepCacheDeviceFree.c)
 *     KsepCacheUninitialize @ 0x1408C3970 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x1408C3C4C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408C3D48 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1408C3E0C (KsepRegistryQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C2A8A4);
  }
}
