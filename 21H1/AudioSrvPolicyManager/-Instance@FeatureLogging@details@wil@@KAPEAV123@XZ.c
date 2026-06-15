/*
 * XREFs of ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x180009AD4
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180009C50 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180006B78 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18003F638 (atexit.c)
 */

struct wil::details::FeatureLogging *wil::details::FeatureLogging::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = &qword_1800562C8;
    qword_1800562C8 = &AudioSrvPolicyManagerTelemetryProvider::`vftable';
    qword_1800562E0 = (struct _tlgProvider_t *)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1800562C8, qword_1800562E0, 0LL);
    InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &qword_1800562C8);
  }
  return (struct wil::details::FeatureLogging *)Context;
}
