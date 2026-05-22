/*
 * XREFs of ??$DynamicNodePoseValidityChanged@PEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEB_N@HolographicDriverClientContinuousTrace@@SAX$$QEAPEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEB_N@Z @ 0x18014E820
 * Callers:
 *     ?UpdateMostRecentNodePoseValidity@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_VALIDITY_FLAGS@@@Z @ 0x180166D24 (-UpdateMostRecentNodePoseValidity@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@.c)
 * Callees:
 *     ?DynamicNodePoseValidityChanged_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_VALIDITY_FLAGS@@_N@Z @ 0x18015C02C (-DynamicNodePoseValidityChanged_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NO.c)
 *     ?IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z @ 0x180160648 (-IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167F7C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

char __fastcall HolographicDriverClientContinuousTrace::DynamicNodePoseValidityChanged<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *,SPATIAL_NODE_ID const &,enum SPATIAL_TRACKING_VALIDITY_FLAGS &,bool const &>(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned int *a3,
        char *a4)
{
  char result; // al
  __int64 v9; // rcx
  __int64 v10; // rcx
  char v11; // [rsp+20h] [rbp-18h]

  result = HolographicDriverClientContinuousTrace::IsEnabled((unsigned __int8)a1, a2);
  if ( result )
  {
    wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
      v9,
      _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
    v11 = *a4;
    return HolographicDriverClientContinuousTrace::DynamicNodePoseValidityChanged_(v10, *a1, a2, *a3, v11);
  }
  return result;
}
