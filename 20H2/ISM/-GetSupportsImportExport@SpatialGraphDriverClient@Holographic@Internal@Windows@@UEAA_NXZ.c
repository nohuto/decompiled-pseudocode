/*
 * XREFs of ?GetSupportsImportExport@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAA_NXZ @ 0x18015EA90
 * Callers:
 *     ?GetSupportsImportExport@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAA_NXZ @ 0x18004CA50 (-GetSupportsImportExport@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAA_NXZ.c)
 * Callees:
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015BD0C (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 */

bool __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetSupportsImportExport(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this)
{
  char v2; // [rsp+40h] [rbp+8h] BYREF

  return (int)Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfKnownSize(
                (__int64)this - 8,
                &SPATIAL_GRAPH_DEVICE_PROPERTY_SUPPORTS_IMPORTEXPORT,
                &v2,
                1uLL,
                (__int64 (__fastcall *)(void *, unsigned __int64))Windows::Internal::Holographic::ValidateProperty::Boolean,
                3) >= 0
      && v2 != 0;
}
