/*
 * XREFs of ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800D6974
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x1800D6720 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800D689C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180029504 (_tlgKeywordOn.c)
 */

char __fastcall wil::TraceLoggingProvider::IsEnabled_(wil::TraceLoggingProvider *this)
{
  _DWORD *v1; // rcx
  char v2; // r9

  v1 = (_DWORD *)*((_QWORD *)this + 1);
  v2 = 0;
  if ( v1 && *v1 )
    return tlgKeywordOn((__int64)v1, 0LL) != 0;
  return v2;
}
