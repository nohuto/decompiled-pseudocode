/*
 * XREFs of ?RemoveNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphNodePropertiesUpdatedCallback@234@@Z @ 0x180163600
 * Callers:
 *     ?RemoveNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphNodePropertiesUpdatedCallback@234@@Z @ 0x18004CBA0 (-RemoveNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@.c)
 *     ?RemoveNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBI@EAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphNodePropertiesUpdatedCallback@234@@Z @ 0x18004CBB0 (-RemoveNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBI@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::RemoveNodePropertiesUpdatedCallback(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct SPATIAL_NODE_ID *a2,
        struct Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback *a3)
{
  return Windows::Internal::Holographic::DynamicNodeSourceBase::RemoveNodePropertiesUpdatedCallback(
           (Windows::Internal::Holographic::SpatialGraphDriverClient *)((char *)this + 24),
           a2,
           a3);
}
