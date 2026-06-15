/*
 * XREFs of ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800B9C64
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18006D820 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ??$NuiAudioTrace@AEAY0CAA@D@NUIAudioTracing@@SAXAEAY0CAA@D@Z @ 0x180133F6C (--$NuiAudioTrace@AEAY0CAA@D@NUIAudioTracing@@SAXAEAY0CAA@D@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800B7ADC (_tlgKeywordOn.c)
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
