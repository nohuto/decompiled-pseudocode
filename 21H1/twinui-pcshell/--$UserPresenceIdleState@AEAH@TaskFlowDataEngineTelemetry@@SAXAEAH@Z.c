/*
 * XREFs of ??$UserPresenceIdleState@AEAH@TaskFlowDataEngineTelemetry@@SAXAEAH@Z @ 0x1802182D4
 * Callers:
 *     ?OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z @ 0x180218700 (-OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 */

ULONG __fastcall TaskFlowDataEngineTelemetry::UserPresenceIdleState<int &>(int *a1)
{
  void (*v2)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  ULONG result; // eax
  _DWORD *v4; // rcx
  int v5; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-40h] BYREF
  int *v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = &qword_1805A01A8;
    qword_1805A01A8 = &ShellScreenClippingLogging::`vftable';
    qword_1805A01C0 = (struct _tlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805A01A8, qword_1805A01C0, v2);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &qword_1805A01A8);
  }
  result = (unsigned int)Context;
  v4 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v4 > 5u )
  {
    v5 = *a1;
    v12 = 0;
    v7 = v5;
    v11 = 4;
    v10 = &v7;
    return tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_1804E0B31, 0LL, 0LL, 3u, &v9);
  }
  return result;
}
