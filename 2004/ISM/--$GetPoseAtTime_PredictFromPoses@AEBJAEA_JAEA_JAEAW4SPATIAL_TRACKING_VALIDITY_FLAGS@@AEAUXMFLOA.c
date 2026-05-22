/*
 * XREFs of ??$GetPoseAtTime_PredictFromPoses@AEBJAEA_JAEA_JAEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEAUXMFLOAT4X3@DirectX@@@HolographicDriverClientContinuousTrace@@SAXAEBJAEA_J1AEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEAUXMFLOAT4X3@DirectX@@@Z @ 0x18014E72C
 * Callers:
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x18015D5B0 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_G.c)
 * Callees:
 *     ?GetPoseAtTime_PredictFromPoses_@HolographicDriverClientContinuousTrace@@QEAAXJ_J0IAEBUXMFLOAT4X3@DirectX@@@Z @ 0x18015DFA0 (-GetPoseAtTime_PredictFromPoses_@HolographicDriverClientContinuousTrace@@QEAAXJ_J0IAEBUXMFLOAT4X.c)
 *     ?IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z @ 0x180160188 (-IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167ABC (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::GetPoseAtTime_PredictFromPoses<long const &,__int64 &,__int64 &,enum SPATIAL_TRACKING_VALIDITY_FLAGS &,DirectX::XMFLOAT4X3 &>(
        int *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned int *a4,
        struct DirectX::XMFLOAT4X3 *a5)
{
  __int64 v9; // rcx
  HolographicDriverClientContinuousTrace *v10; // rcx

  if ( HolographicDriverClientContinuousTrace::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
      v9,
      _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
    HolographicDriverClientContinuousTrace::GetPoseAtTime_PredictFromPoses_(v10, *a1, *a2, *a3, *a4, a5);
  }
}
