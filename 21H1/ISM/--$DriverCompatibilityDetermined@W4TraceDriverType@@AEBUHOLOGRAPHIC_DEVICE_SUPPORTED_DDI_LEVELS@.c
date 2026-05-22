/*
 * XREFs of ??$DriverCompatibilityDetermined@W4TraceDriverType@@AEBUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@AEAU2@_N@HolographicDriverClientTrace@@SAX$$QEAW4TraceDriverType@@AEBUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@AEAU2@$$QEA_N@Z @ 0x18014E7C4
 * Callers:
 *     ?RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING__@@USpatialGraphSettings@234@PEAW4SpatialGraphDriverProblem_SubStatusCode@@@Z @ 0x180163B60 (-RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING_.c)
 * Callees:
 *     ?DriverCompatibilityDetermined_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@UHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@1_N@Z @ 0x18015BE8C (-DriverCompatibilityDetermined_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@UHOLOGRAPH.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18016066C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180168034 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::DriverCompatibilityDetermined<enum TraceDriverType,HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS const &,HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS &,bool>(
        unsigned int *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        char *a4)
{
  char result; // al
  __int64 v8; // rcx
  __int64 v9; // rcx
  char v10; // [rsp+20h] [rbp-18h]

  result = HolographicDriverClientTrace::IsEnabled((unsigned __int8)a1, a2);
  if ( result )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v8,
      _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    v10 = *a4;
    return HolographicDriverClientTrace::DriverCompatibilityDetermined_(v9, *a1, 0x800000001LL, *a3, v10);
  }
  return result;
}
