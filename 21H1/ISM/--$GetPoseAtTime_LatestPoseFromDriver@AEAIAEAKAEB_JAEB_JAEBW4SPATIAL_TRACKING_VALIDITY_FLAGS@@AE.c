/*
 * XREFs of ??$GetPoseAtTime_LatestPoseFromDriver@AEAIAEAKAEB_JAEB_JAEBW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEBUXMFLOAT4X3@DirectX@@@HolographicDriverClientContinuousTrace@@SAXAEAIAEAKAEB_J2AEBW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEBUXMFLOAT4X3@DirectX@@@Z @ 0x18014EB6C
 * Callers:
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x18015DA70 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_G.c)
 * Callees:
 *     ?GetPoseAtTime_LatestPoseFromDriver_@HolographicDriverClientContinuousTrace@@QEAAXII_J0IAEBUXMFLOAT4X3@DirectX@@@Z @ 0x18015E178 (-GetPoseAtTime_LatestPoseFromDriver_@HolographicDriverClientContinuousTrace@@QEAAXII_J0IAEBUXMFL.c)
 *     ?IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z @ 0x180160648 (-IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167F7C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::GetPoseAtTime_LatestPoseFromDriver<unsigned int &,unsigned long &,__int64 const &,__int64 const &,enum SPATIAL_TRACKING_VALIDITY_FLAGS const &,DirectX::XMFLOAT4X3 const &>(
        unsigned int *a1,
        unsigned int *a2,
        __int64 *a3,
        __int64 *a4,
        unsigned int *a5,
        struct DirectX::XMFLOAT4X3 *a6)
{
  __int64 v10; // rcx
  HolographicDriverClientContinuousTrace *v11; // rcx

  if ( HolographicDriverClientContinuousTrace::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
      v10,
      _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
    HolographicDriverClientContinuousTrace::GetPoseAtTime_LatestPoseFromDriver_(v11, *a1, *a2, *a3, *a4, *a5, a6);
  }
}
