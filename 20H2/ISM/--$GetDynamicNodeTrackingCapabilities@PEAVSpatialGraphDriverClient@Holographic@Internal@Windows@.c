/*
 * XREFs of ??$GetDynamicNodeTrackingCapabilities@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@HolographicDriverClientTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x18014E4D8
 * Callers:
 *     ?GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x18015C700 (-GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ?GetDynamicNodeTrackingCapabilities_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x18015C7AC (-GetDynamicNodeTrackingCapabilities_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATI.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18016011C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167AE4 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::GetDynamicNodeTrackingCapabilities<Windows::Internal::Holographic::SpatialGraphDriverClient *,_GUID const &,SPATIAL_NODE_ID const &,enum SPATIAL_TRACKING_CAPABILITY_FLAGS &>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  char result; // al
  __int64 v9; // rcx
  __int64 v10; // rcx

  result = HolographicDriverClientTrace::IsEnabled((unsigned __int8)a1, a2);
  if ( result )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v9,
      _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    return HolographicDriverClientTrace::GetDynamicNodeTrackingCapabilities_(v10, *a1, a2, a3, *a4);
  }
  return result;
}
