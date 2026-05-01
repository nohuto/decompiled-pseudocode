/*
 * XREFs of ?UpdateLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180477014
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1800A0830 (-OnClientWindowReadyForPresentationChanged@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIClientWin.c)
 *     ?OnClientWindowReadyForPresentationChanged@CPeopleBarFlyoutExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1801CC150 (-OnClientWindowReadyForPresentationChanged@CPeopleBarFlyoutExperienceManager@@AEAAJPEAUIClientWi.c)
 *     ?OnClientWindowReadyForPresentationChanged@CPeopleBarJumpViewExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1801CEC40 (-OnClientWindowReadyForPresentationChanged@CPeopleBarJumpViewExperienceManager@@AEAAJPEAUIClient.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D4A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020628 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SingleViewLightDismissHelper::UpdateLightDismiss(
        __int64 *a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        ExperienceManagerUtils *a3)
{
  unsigned int v3; // ebx
  void *v5; // rax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v12; // rcx
  int v13; // eax
  LPVOID Context[2]; // [rsp+30h] [rbp-50h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-40h] BYREF
  int v16; // [rsp+44h] [rbp-3Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+48h] [rbp-38h] BYREF
  int *v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+70h] [rbp-10h]
  int v20; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v3 = (unsigned int)a2;
  if ( *((_DWORD *)a1 + 2) )
  {
    v5 = (void *)ExperienceManagerUtils::WindowFromViewWrapper(a3, a2);
    if ( !v5 )
    {
      v6 = -2147467259;
      v7 = 147LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v9 = *a1;
    v10 = *((unsigned int *)a1 + 2);
    Context[1] = v5;
    Context[0] = (LPVOID)v3;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, LPVOID *))(*(_QWORD *)v9 + 32LL))(v9, v10, Context);
    if ( v6 < 0 )
    {
      v7 = 153LL;
      goto LABEL_4;
    }
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
      && fPending )
    {
      Context[0] = qword_1805CD278;
      qword_1805CD278[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CD290 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD278, qword_1805CD290, v11);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805CD278);
    }
    v12 = (_DWORD *)*((_QWORD *)Context[0] + 1);
    if ( *v12 > 5u )
    {
      v13 = *((_DWORD *)a1 + 2);
      v20 = 0;
      v16 = v13;
      v19 = 4;
      v18 = &v16;
      tlgWriteTransfer_EventWriteTransfer((__int64)v12, (unsigned __int8 *)dword_1805298AF, 0LL, 0LL, 3u, &v17);
    }
  }
  return 0LL;
}
