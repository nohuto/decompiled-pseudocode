/*
 * XREFs of ?ReturnedToActiveApp@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1800676AC
 * Callers:
 *     ?ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800674CC (-ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?ReturnFocus@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C5E34 (-ReturnFocus@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D4A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::ReturnedToActiveApp(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *this)
{
  _DWORD *v2; // rcx
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v4; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v5; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-38h] BYREF

  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v5 = qword_1805CD250;
    qword_1805CD250[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CD268 = (struct _tlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD250, qword_1805CD268, v3);
    InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_1805CD250);
  }
  v2 = (_DWORD *)v5[1];
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v2,
      (unsigned __int8 *)dword_1804FE436,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      0LL,
      2u,
      &v6);
}
