/*
 * XREFs of ?InterpolatePoses@ConstantVelocityPosePredictionModel@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0_JPEAU5@@Z @ 0x18015FC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Holographic::ConstantVelocityPosePredictionModel::InterpolatePoses(
        Windows::Internal::Holographic::ConstantVelocityPosePredictionModel *this,
        const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a2,
        const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a3,
        __int64 a4,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a5)
{
  return Windows::Internal::Holographic::PosePredictionHelpers::InterpolatePoses(a2, a3, a4, a5);
}
