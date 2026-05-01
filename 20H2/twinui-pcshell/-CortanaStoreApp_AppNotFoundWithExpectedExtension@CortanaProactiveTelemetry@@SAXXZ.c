/*
 * XREFs of ?CortanaStoreApp_AppNotFoundWithExpectedExtension@CortanaProactiveTelemetry@@SAXXZ @ 0x1801F23E4
 * Callers:
 *     ?TryGetCortanaAumid@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x18003E2A4 (-TryGetCortanaAumid@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AB5C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 */

void CortanaProactiveTelemetry::CortanaStoreApp_AppNotFoundWithExpectedExtension(void)
{
  void (*v0)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  __int64 v5; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+68h] [rbp-18h]
  int v8; // [rsp+70h] [rbp-10h]
  int v9; // [rsp+74h] [rbp-Ch]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CC310;
    qword_1805CC310[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CC328 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC310, qword_1805CC328, v0);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805CC310);
  }
  v1 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x400000000000LL) )
    {
      v9 = 0;
      v7 = &v5;
      v5 = 0x1000000LL;
      v8 = 8;
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_180504FB6, 0LL, 0LL, 3u, &v6);
    }
  }
}
