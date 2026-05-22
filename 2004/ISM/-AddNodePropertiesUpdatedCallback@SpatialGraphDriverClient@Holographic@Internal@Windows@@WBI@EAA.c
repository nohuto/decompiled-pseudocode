/*
 * XREFs of ?AddNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBI@EAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphNodePropertiesUpdatedCallback@234@@Z @ 0x18004C8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::AddNodePropertiesUpdatedCallback(
        __int64 a1,
        const struct SPATIAL_NODE_ID *a2,
        struct Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback *a3)
{
  return Windows::Internal::Holographic::SpatialGraphDriverClient::AddNodePropertiesUpdatedCallback(
           (Windows::Internal::Holographic::SpatialGraphDriverClient *)(a1 - 24),
           a2,
           a3);
}
