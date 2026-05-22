/*
 * XREFs of ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x18004D5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDynamicNodeForDevice(
        __int64 a1,
        HSTRING a2,
        struct Windows::Internal::Holographic::DynamicNodeInfo *a3)
{
  return Windows::Internal::Holographic::SpatialGraphDriverClient::GetDynamicNodeForDevice(
           (Windows::Internal::Holographic::SpatialGraphDriverClient *)(a1 - 16),
           a2,
           a3);
}
