/*
 * XREFs of ??$NoChangeToDisplayContext@AEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXAEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1801C0F38
 * Callers:
 *     ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1801C1F40 (-ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D4A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 */

ULONG __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::NoChangeToDisplayContext<enum Windows::Internal::Shell::Holographic::UserDisplayContext &>(
        __int64 a1,
        int *a2)
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  ULONG result; // eax
  _DWORD *v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  int v10; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-40h] BYREF
  int *v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CD250;
    qword_1805CD250[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CD268 = (struct _tlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD250, qword_1805CD268, v4);
    InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_1805CD250);
  }
  result = (unsigned int)Context;
  v6 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v6 > 5u )
  {
    v7 = *a2;
    v8 = *(_QWORD *)(a1 + 48);
    v15 = 0;
    v10 = v7;
    v13 = &v10;
    v14 = 4;
    return tlgWriteTransfer_EventWriteTransfer(
             (__int64)v6,
             (unsigned __int8 *)dword_180500241,
             (const GUID *)(v8 + 8),
             0LL,
             3u,
             &v12);
  }
  return result;
}
