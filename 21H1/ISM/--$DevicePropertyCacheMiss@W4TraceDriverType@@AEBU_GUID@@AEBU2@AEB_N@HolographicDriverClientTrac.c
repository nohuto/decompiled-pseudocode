/*
 * XREFs of ??$DevicePropertyCacheMiss@W4TraceDriverType@@AEBU_GUID@@AEBU2@AEB_N@HolographicDriverClientTrace@@SAX$$QEAW4TraceDriverType@@AEBU_GUID@@1AEB_N@Z @ 0x18014E6F4
 * Callers:
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015C25C (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 *     ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015C3F4 (-GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEB.c)
 * Callees:
 *     ?DevicePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1_N@Z @ 0x18015BC80 (-DevicePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1_N@Z.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18016066C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180168034 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::DevicePropertyCacheMiss<enum TraceDriverType,_GUID const &,_GUID const &,bool const &>(
        unsigned int *a1,
        unsigned __int64 a2,
        __int64 a3,
        char *a4)
{
  char result; // al
  __int64 v9; // rcx
  __int64 v10; // rcx
  char v11; // [rsp+20h] [rbp-18h]

  result = HolographicDriverClientTrace::IsEnabled((unsigned __int8)a1, a2);
  if ( result )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v9,
      _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    v11 = *a4;
    return HolographicDriverClientTrace::DevicePropertyCacheMiss_(v10, *a1, a2, a3, v11);
  }
  return result;
}
