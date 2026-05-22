/*
 * XREFs of ??$NoPoseReceivedYet@AEBUSPATIAL_NODE_ID@@AEBJ@HolographicDriverClientContinuousTrace@@SAXAEBUSPATIAL_NODE_ID@@AEBJ@Z @ 0x18014F9E4
 * Callers:
 *     SpatialGraphDriverClientHelpers::GetLatestPoses @ 0x18015D3AC (SpatialGraphDriverClientHelpers--GetLatestPoses.c)
 *     SpatialGraphDriverClientHelpers::GetPosesAroundTime @ 0x18015E5E4 (SpatialGraphDriverClientHelpers--GetPosesAroundTime.c)
 * Callees:
 *     ?IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z @ 0x1801605E8 (-IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z.c)
 *     ?NoPoseReceivedYet_@HolographicDriverClientContinuousTrace@@QEAAXAEBUSPATIAL_NODE_ID@@J@Z @ 0x18016084C (-NoPoseReceivedYet_@HolographicDriverClientContinuousTrace@@QEAAXAEBUSPATIAL_NODE_ID@@J@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167EDC (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::NoPoseReceivedYet<SPATIAL_NODE_ID const &,long const &>(
        struct SPATIAL_NODE_ID *a1,
        int *a2)
{
  __int64 v4; // rcx
  HolographicDriverClientContinuousTrace *v5; // rcx

  if ( HolographicDriverClientContinuousTrace::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
      v4,
      _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
    HolographicDriverClientContinuousTrace::NoPoseReceivedYet_(v5, a1, *a2);
  }
}
