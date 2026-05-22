/*
 * XREFs of ?GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@PEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x18004C9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDynamicNodeTrackingCapabilities(
        __int64 a1,
        const struct SPATIAL_NODE_ID *a2,
        enum SPATIAL_TRACKING_CAPABILITY_FLAGS *a3)
{
  return Windows::Internal::Holographic::SpatialGraphDriverClient::GetDynamicNodeTrackingCapabilities(
           (Windows::Internal::Holographic::SpatialGraphDriverClient *)(a1 - 16),
           a2,
           a3);
}
