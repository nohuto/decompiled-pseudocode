/*
 * XREFs of ?OnViewShown@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801F1510
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D4A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ?RegisterWithLightDismiss@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z @ 0x1801F1844 (-RegisterWithLightDismiss@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z.c)
 */

__int64 __fastcall CInsightsExperienceManager::OnViewShown(
        CInsightsExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v5; // rcx
  WINBOOL v7; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v8; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-38h] BYREF

  v8 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v7, (LPVOID *)&v8) && v7 )
  {
    v8 = qword_1805CD278;
    qword_1805CD278[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CD290 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD278, qword_1805CD290, v4);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805CD278);
  }
  v5 = (_DWORD *)v8[1];
  if ( *v5 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_180505509, 0LL, 0LL, 2u, &v9);
  if ( *((_BYTE *)this + 240) )
    CInsightsExperienceManager::RegisterWithLightDismiss((CInsightsExperienceManager *)((char *)this - 56), a2);
  return 0LL;
}
