/*
 * XREFs of ??$ActionCenterDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEBK@Z @ 0x1801898B0
 * Callers:
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18018C918 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?OnTargetedMessage@CControlCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801908A0 (-OnTargetedMessage@CControlCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 */

char __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterDidntLaunchInSpecifiedTime<unsigned long const &>(
        int *a1)
{
  void (*v2)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  char result; // al
  _DWORD *v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  int v8; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-40h] BYREF
  int *v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_18059FF90;
    qword_18059FF90[0] = &ShellScreenClippingLogging::`vftable';
    qword_18059FFA8 = (struct _tlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FF90, qword_18059FFA8, v2);
    InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_18059FF90);
  }
  result = (char)Context;
  v4 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v4 > 5u )
  {
    result = tlgKeywordOn((__int64)v4, 0x400000000000LL);
    if ( result )
    {
      v6 = *a1;
      v13 = 0;
      v8 = v6;
      v12 = 4;
      v11 = &v8;
      return tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_1804D644F, 0LL, 0LL, 3u, &v10);
    }
  }
  return result;
}
