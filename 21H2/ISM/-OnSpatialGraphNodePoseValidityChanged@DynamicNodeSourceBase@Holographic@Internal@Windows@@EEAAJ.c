/*
 * XREFs of ?OnSpatialGraphNodePoseValidityChanged@DynamicNodeSourceBase@Holographic@Internal@Windows@@EEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_VALIDITY_FLAGS@@@Z @ 0x1801617E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeNodePropertiesUpdatedCallback@DynamicNodeSourceBase@Holographic@Internal@Windows@@IEAAXAEBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@234@@Z @ 0x180160188 (-InvokeNodePropertiesUpdatedCallback@DynamicNodeSourceBase@Holographic@Internal@Windows@@IEAAXAE.c)
 */

__int64 __fastcall Windows::Internal::Holographic::DynamicNodeSourceBase::OnSpatialGraphNodePoseValidityChanged(
        __int64 a1,
        __int64 a2)
{
  Windows::Internal::Holographic::DynamicNodeSourceBase::InvokeNodePropertiesUpdatedCallback(
    (RTL_SRWLOCK *)(a1 - 8),
    a2,
    0x10u);
  return 0LL;
}
