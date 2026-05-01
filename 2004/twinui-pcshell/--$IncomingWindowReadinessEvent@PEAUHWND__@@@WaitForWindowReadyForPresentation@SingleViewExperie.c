/*
 * XREFs of ??$IncomingWindowReadinessEvent@PEAUHWND__@@@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAX$$QEAPEAUHWND__@@@Z @ 0x18001256C
 * Callers:
 *     _lambda_bfb8cbc897ca7eaa5c992f00bdd4bfa8_::operator() @ 0x18001317C (_lambda_bfb8cbc897ca7eaa5c992f00bdd4bfa8_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D4A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 */

LPVOID __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::IncomingWindowReadinessEvent<HWND__ *>(
        __int64 a1,
        __int64 *a2)
{
  LPVOID result; // rax
  _DWORD *v5; // rcx
  void (*v6)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // r8
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+70h] [rbp-10h]
  int v16; // [rsp+74h] [rbp-Ch]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_1805CD278;
    qword_1805CD278[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CD290 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD278, qword_1805CD290, v6);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805CD278);
  }
  result = Context;
  v5 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v5 > 5u )
  {
    result = (LPVOID)tlgKeywordOn(v5, 0x200000000000LL);
    if ( (_BYTE)result )
    {
      v8 = *a2;
      v9 = *(_QWORD *)(a1 + 48);
      v16 = 0;
      v12 = v8;
      v14 = &v12;
      v15 = 8;
      return (LPVOID)tlgWriteTransfer_EventWriteTransfer(v7, (int)&dword_1805277AB, (int)v9 + 8, 0, 3u, &v13);
    }
  }
  return result;
}
