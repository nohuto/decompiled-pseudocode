/*
 * XREFs of KsepPoolFreePaged @ 0x14036F0E4
 * Callers:
 *     KsepDbFreeDriverShims @ 0x140743580 (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140745CB8 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x140745D6C (KsepStringFree.c)
 *     KseAddHardwareId @ 0x140749BFC (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x140760764 (KseDriverUnloadImage.c)
 *     KsepSdbBootRelease @ 0x1407AA168 (KsepSdbBootRelease.c)
 *     KseRegisterShimEx @ 0x1407AB370 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1407AB6C4 (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x1407AC6B0 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1407AC870 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x1407B9BA0 (KsepCacheDeviceInsertData.c)
 *     KsepSdbBootInitialize @ 0x1407BF398 (KsepSdbBootInitialize.c)
 *     KsepDbGetShimInfo @ 0x1408BC2FC (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1408BC5A0 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x1408BC900 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408BD114 (KsepResolveApplicableShimsForDriver.c)
 *     KsepStringSplitMultiString @ 0x1408BD904 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceFree @ 0x1408BDB20 (KsepCacheDeviceFree.c)
 *     KsepCacheUninitialize @ 0x1408BDC10 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x1408BDEEC (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408BDFE8 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1408BE0AC (KsepRegistryQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C2A7C4);
  }
}
