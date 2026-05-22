/*
 * XREFs of ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180029854
 * Callers:
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x180028D04 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180029700 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029830 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x18008F968 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z @ 0x180094140 (-IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C66D8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D06A0 (-IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z @ 0x180160648 (-IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18016066C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 */

char __fastcall wil::TraceLoggingProvider::IsEnabled_(wil::TraceLoggingProvider *this, unsigned __int8 a2)
{
  _DWORD *v2; // rcx
  char v3; // r8

  v2 = (_DWORD *)*((_QWORD *)this + 1);
  v3 = 0;
  if ( v2 && (unsigned int)a2 < *v2 )
    return tlgKeywordOn((__int64)v2, 0LL);
  return v3;
}
