/*
 * XREFs of ?InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180061DA4
 * Callers:
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180061D74 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAU.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180476638 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800189F8 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AB5C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?EnsureLightDismissProvider@SingleViewLightDismissHelper@@AEAAJXZ @ 0x180061EAC (-EnsureLightDismissProvider@SingleViewLightDismissHelper@@AEAAJXZ.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x180061F78 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SingleViewLightDismissHelper::InternalRegisterWithLightDismiss(
        SingleViewLightDismissHelper *a1,
        unsigned int a2,
        __int64 a3,
        ExperienceManagerUtils *a4)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v8; // rdx
  int v9; // edi
  void *v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  __int64 v14; // rdx
  void (*v15)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  ULONG v16; // [rsp+20h] [rbp-49h]
  _DWORD v17[4]; // [rsp+30h] [rbp-39h] BYREF
  LPVOID Context[2]; // [rsp+40h] [rbp-29h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-19h] BYREF
  int v20; // [rsp+54h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+58h] [rbp-11h] BYREF
  int *v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+80h] [rbp+17h]
  int v24; // [rsp+84h] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  SingleViewLightDismissHelper::UnregisterWithLightDismiss(a1);
  v9 = SingleViewLightDismissHelper::EnsureLightDismissProvider(a1);
  if ( v9 < 0 )
  {
    v14 = 77LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
      (const char *)(unsigned int)v9,
      v16);
    return (unsigned int)v9;
  }
  v10 = (void *)ExperienceManagerUtils::WindowFromViewWrapper(a4, v8);
  if ( !v10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
      (const char *)0x80004005LL,
      v16);
    return 2147500037LL;
  }
  v11 = *(_QWORD *)a1;
  Context[1] = v10;
  Context[0] = (LPVOID)a2;
  v9 = (*(__int64 (__fastcall **)(__int64, LPVOID *, __int64, _DWORD *))(*(_QWORD *)v11 + 24LL))(v11, Context, a3, v17);
  if ( v9 < 0 )
  {
    v14 = 85LL;
    goto LABEL_14;
  }
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
    && fPending )
  {
    Context[0] = &qword_1805CC2E8;
    qword_1805CC2E8 = &ShellScreenClippingLogging::`vftable';
    qword_1805CC300 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CC2E8, qword_1805CC300, v15);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &qword_1805CC2E8);
  }
  v12 = (_DWORD *)*((_QWORD *)Context[0] + 1);
  if ( *v12 > 5u )
  {
    v24 = 0;
    v20 = v17[0];
    v23 = 4;
    v22 = &v20;
    tlgWriteTransfer_EventWriteTransfer((__int64)v12, (unsigned __int8 *)dword_180529451, 0LL, 0LL, 3u, &v21);
  }
  if ( *((_DWORD *)a1 + 2) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a1 + 40LL))(*(_QWORD *)a1, v17[0]);
  else
    *((_DWORD *)a1 + 2) = v17[0];
  return 0LL;
}
