/*
 * XREFs of ?LauncherClosed@CommonStartTelemetry@@SAXXZ @ 0x180087080
 * Callers:
 *     ?OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180087010 (-OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Win.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AB5C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 */

void CommonStartTelemetry::LauncherClosed(void)
{
  _DWORD *v0; // rcx
  __int64 v1; // rcx
  void (*v2)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp-48h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-38h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1805CC668;
    qword_1805CC668 = &ShellScreenClippingLogging::`vftable';
    qword_1805CC680 = (struct _tlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CC668, qword_1805CC680, v2);
    InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_1805CC668);
  }
  v0 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v0 > 5u )
  {
    if ( tlgKeywordOn((__int64)v0, 0x400000000000LL) )
      tlgWriteTransfer_EventWriteTransfer(v1, (unsigned __int8 *)dword_1805184F0, 0LL, 0LL, 2u, &v5);
  }
}
