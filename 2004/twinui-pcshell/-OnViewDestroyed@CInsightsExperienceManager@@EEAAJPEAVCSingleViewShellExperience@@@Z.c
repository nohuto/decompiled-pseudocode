/*
 * XREFs of ?OnViewDestroyed@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801F11F0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D4A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 */

__int64 __fastcall CInsightsExperienceManager::OnViewDestroyed(
        CInsightsExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  void (*v2)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v3; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-48h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-38h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_1805CD278;
    qword_1805CD278[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CD290 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD278, qword_1805CD290, v2);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805CD278);
  }
  v3 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v3 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_1805054CE, 0LL, 0LL, 2u, &v7);
  return 0LL;
}
