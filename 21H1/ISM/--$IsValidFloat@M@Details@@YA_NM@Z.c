/*
 * XREFs of ??$IsValidFloat@M@Details@@YA_NM@Z @ 0x1800C4828
 * Callers:
 *     ?QuaternionToEulerAngles@SpatialInteractionDevices@@YAJAEBUXMFLOAT4@DirectX@@PEAM11@Z @ 0x1800C6C18 (-QuaternionToEulerAngles@SpatialInteractionDevices@@YAJAEBUXMFLOAT4@DirectX@@PEAM11@Z.c)
 *     ??$AreValidFloats@UXMFLOAT3@DirectX@@@@YA_NAEBUXMFLOAT3@DirectX@@@Z @ 0x18014E4B0 (--$AreValidFloats@UXMFLOAT3@DirectX@@@@YA_NAEBUXMFLOAT3@DirectX@@@Z.c)
 *     _lambda_f2d9a31b738d46358cc103eee0272db8_::operator() @ 0x180158908 (_lambda_f2d9a31b738d46358cc103eee0272db8_--operator().c)
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x18015EBB0 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE.c)
 * Callees:
 *     <none>
 */

bool __fastcall Details::IsValidFloat<float>(float a1)
{
  return (_fpclass(a1) & 0x207) == 0;
}
