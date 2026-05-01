/*
 * XREFs of ?GetScreenClippingBrokerAsIInspectable@CScreenClippingExperienceManager@@EEAAJPEAPEAUIInspectable@@@Z @ 0x1801C5210
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureScreenClippingBroker@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801C4CEC (-EnsureScreenClippingBroker@CScreenClippingExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::GetScreenClippingBrokerAsIInspectable(
        CScreenClippingExperienceManager *this,
        struct IInspectable **a2)
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v10; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-40h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_18059FFB8;
    qword_18059FFB8[0] = &ShellScreenClippingLogging::`vftable';
    qword_18059FFD0 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFB8, qword_18059FFD0, v4);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18059FFB8);
  }
  v5 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v5 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_1804DD6B6, 0LL, 0LL, 2u, &v13);
  v6 = CScreenClippingExperienceManager::EnsureScreenClippingBroker(this);
  if ( v6 < 0 )
  {
    v7 = 306LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInspectable **))this + 37))(
         *((_QWORD *)this + 37),
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         a2);
  if ( v6 < 0 )
  {
    v7 = 307LL;
    goto LABEL_8;
  }
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_18059FFB8;
    qword_18059FFB8[0] = &ShellScreenClippingLogging::`vftable';
    qword_18059FFD0 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFB8, qword_18059FFD0, v9);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18059FFB8);
  }
  v10 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v10 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v10, (unsigned __int8 *)dword_1804DD70D, 0LL, 0LL, 2u, &v13);
  return 0LL;
}
