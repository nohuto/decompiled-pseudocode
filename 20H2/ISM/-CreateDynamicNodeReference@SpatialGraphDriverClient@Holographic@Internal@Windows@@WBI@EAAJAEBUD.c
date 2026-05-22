/*
 * XREFs of ?CreateDynamicNodeReference@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBI@EAAJAEBUDynamicNodeInfo@234@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x18004C920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::CreateDynamicNodeReference(
        __int64 a1,
        const struct Windows::Internal::Holographic::DynamicNodeInfo *a2,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference **a3)
{
  return Windows::Internal::Holographic::SpatialGraphDriverClient::CreateDynamicNodeReference(
           (Windows::Internal::Holographic::SpatialGraphDriverClient *)(a1 - 24),
           a2,
           a3);
}
