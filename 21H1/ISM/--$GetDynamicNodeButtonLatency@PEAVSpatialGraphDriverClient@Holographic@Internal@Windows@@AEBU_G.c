/*
 * XREFs of ??$GetDynamicNodeButtonLatency@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAH@HolographicDriverClientTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAH@Z @ 0x18014E888
 * Callers:
 *     ?GetDynamicNodeButtonLatencyMicroseconds@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAH@Z @ 0x18015C5A0 (-GetDynamicNodeButtonLatencyMicroseconds@SpatialGraphDriverClient@Holographic@Inter_ea_18015C5A0.c)
 * Callees:
 *     ?GetDynamicNodeButtonLatency_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@H@Z @ 0x18015C644 (-GetDynamicNodeButtonLatency_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18016066C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180168034 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::GetDynamicNodeButtonLatency<Windows::Internal::Holographic::SpatialGraphDriverClient *,_GUID const &,SPATIAL_NODE_ID const &,int &>(
        const void **a1,
        const struct _GUID *a2,
        const struct SPATIAL_NODE_ID *a3,
        int *a4)
{
  __int64 v8; // rcx
  HolographicDriverClientTrace *v9; // rcx

  if ( HolographicDriverClientTrace::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v8,
      _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    HolographicDriverClientTrace::GetDynamicNodeButtonLatency_(v9, *a1, a2, a3, *a4);
  }
}
