/*
 * XREFs of ?LookUpPrintScreenSetting@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1801E94E4
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_52df748bd35312a930346c153535bf5c___::Invoke @ 0x1801E9360 (CAsyncCallbackWithLambda__lambda_52df748bd35312a930346c153535bf5c___--Invoke.c)
 *     ?RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801EA364 (-RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D4A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180050BC0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ?RequestHotKeys@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1801EAB88 (-RequestHotKeys@CScreenClippingExperienceManager@@AEAAXXZ.c)
 *     ?UnregisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801EB74C (-UnregisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ.c)
 */

void __fastcall CScreenClippingExperienceManager::LookUpPrintScreenSetting(CScreenClippingExperienceManager *this)
{
  void (*v2)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v3; // rcx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v5; // rcx
  unsigned int v6; // [rsp+30h] [rbp-50h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  LPVOID v9; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+48h] [rbp-38h] BYREF
  LPVOID *p_Context; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+70h] [rbp-10h]
  int v13; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

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
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_180504701, 0LL, 0LL, 2u, &v10);
  v6 = 0;
  if ( SHRegGetDWORD(HKEY_CURRENT_USER, L"Control Panel\\Keyboard", L"PrintScreenKeyForSnippingEnabled", &v6) == -2147024894 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x282,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)0x80070002LL);
  v9 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &v9) && fPending )
  {
    v9 = qword_1805CD278;
    qword_1805CD278[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CD290 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD278, qword_1805CD290, v4);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805CD278);
  }
  v5 = (_DWORD *)*((_QWORD *)v9 + 1);
  if ( *v5 > 5u )
  {
    v13 = 0;
    LODWORD(Context) = v6;
    v12 = 4;
    p_Context = &Context;
    tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_180504753, 0LL, 0LL, 3u, &v10);
  }
  if ( v6 )
    CScreenClippingExperienceManager::RequestHotKeys(this);
  else
    CScreenClippingExperienceManager::UnregisterForHotKeyHandling(this);
}
