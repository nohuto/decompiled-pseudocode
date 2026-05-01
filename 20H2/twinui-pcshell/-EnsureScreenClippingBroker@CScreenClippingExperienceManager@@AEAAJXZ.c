/*
 * XREFs of ?EnsureScreenClippingBroker@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801E7C8C
 * Callers:
 *     ?GetScreenClippingBrokerAsIInspectable@CScreenClippingExperienceManager@@EEAAJPEAPEAUIInspectable@@@Z @ 0x1801E8190 (-GetScreenClippingBrokerAsIInspectable@CScreenClippingExperienceManager@@EEAAJPEAPEAUIInspectabl.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AB5C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ?CreateScreenClippingBroker@@YAJAEAV?$ComPtr@UIScreenClippingBroker@@@WRL@Microsoft@@@Z @ 0x18042EF34 (-CreateScreenClippingBroker@@YAJAEAV-$ComPtr@UIScreenClippingBroker@@@WRL@Microsoft@@@Z.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::EnsureScreenClippingBroker(CScreenClippingExperienceManager *this)
{
  char *v1; // rbx
  void (*v2)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v3; // rcx
  int ScreenClippingBroker; // eax
  unsigned int v5; // ebx
  WINBOOL v7; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v8; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = (char *)this + 296;
  if ( *((_QWORD *)this + 37) )
    return 0LL;
  v8 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v7, (LPVOID *)&v8) && v7 )
  {
    v8 = &qword_1805CC2E8;
    qword_1805CC2E8 = &ShellScreenClippingLogging::`vftable';
    qword_1805CC300 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CC2E8, qword_1805CC300, v2);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &qword_1805CC2E8);
  }
  v3 = (_DWORD *)v8[1];
  if ( *v3 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_18050470A, 0LL, 0LL, 2u, &v9);
  ScreenClippingBroker = CreateScreenClippingBroker(v1);
  v5 = ScreenClippingBroker;
  if ( ScreenClippingBroker >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x118,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)ScreenClippingBroker);
  return v5;
}
