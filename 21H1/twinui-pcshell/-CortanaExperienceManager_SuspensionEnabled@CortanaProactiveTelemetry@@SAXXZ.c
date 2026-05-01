/*
 * XREFs of ?CortanaExperienceManager_SuspensionEnabled@CortanaProactiveTelemetry@@SAXXZ @ 0x180051250
 * Callers:
 *     ?_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x1800511A8 (-_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18019928C (-_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 */

void CortanaProactiveTelemetry::CortanaExperienceManager_SuspensionEnabled(void)
{
  _DWORD *v0; // rcx
  void (*v1)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  __int64 v4; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+68h] [rbp-18h]
  int v7; // [rsp+70h] [rbp-10h]
  int v8; // [rsp+74h] [rbp-Ch]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_18059FFE0;
    qword_18059FFE0[0] = &ShellScreenClippingLogging::`vftable';
    qword_18059FFF8 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFE0, qword_18059FFF8, v1);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_18059FFE0);
  }
  v0 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v0 > 4u )
  {
    v8 = 0;
    v6 = &v4;
    v4 = 0x1000000LL;
    v7 = 8;
    tlgWriteTransfer_EventWriteTransfer((__int64)v0, (unsigned __int8 *)dword_1804D7F58, 0LL, 0LL, 3u, &v5);
  }
}
