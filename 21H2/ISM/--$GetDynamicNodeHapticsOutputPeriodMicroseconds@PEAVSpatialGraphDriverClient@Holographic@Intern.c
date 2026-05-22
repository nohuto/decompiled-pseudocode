/*
 * XREFs of ??$GetDynamicNodeHapticsOutputPeriodMicroseconds@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAI@HolographicDriverClientTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAI@Z @ 0x18014E960
 * Callers:
 *     ?GetDynamicNodeHapticsOutputPeriodMicroseconds@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAI@Z @ 0x18015CA90 (-GetDynamicNodeHapticsOutputPeriodMicroseconds@SpatialGraphDriverClient@Holographic_ea_18015CA90.c)
 * Callees:
 *     ?GetDynamicNodeHapticsOutputPeriodMicroseconds_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@H@Z @ 0x18015CB34 (-GetDynamicNodeHapticsOutputPeriodMicroseconds_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18016060C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167F94 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::GetDynamicNodeHapticsOutputPeriodMicroseconds<Windows::Internal::Holographic::SpatialGraphDriverClient *,_GUID const &,SPATIAL_NODE_ID const &,unsigned int &>(
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
    HolographicDriverClientTrace::GetDynamicNodeHapticsOutputPeriodMicroseconds_(v9, *a1, a2, a3, *a4);
  }
}
