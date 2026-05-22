/*
 * XREFs of ?GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@PEAPEAUHOLOGRAPHIC_DEVICE_ERROR_STATUS@@PEA_K@Z @ 0x18004CA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetNodeErrorStatuses(
        __int64 a1,
        const struct SPATIAL_NODE_ID *a2,
        struct HOLOGRAPHIC_DEVICE_ERROR_STATUS **a3,
        unsigned __int64 *a4)
{
  return Windows::Internal::Holographic::SpatialGraphDriverClient::GetNodeErrorStatuses(
           (Windows::Internal::Holographic::SpatialGraphDriverClient *)(a1 - 16),
           a2,
           a3,
           a4);
}
