/*
 * XREFs of ?InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800653D4
 * Callers:
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800653A4 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAU.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180452F94 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020098 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?EnsureLightDismissProvider@SingleViewLightDismissHelper@@AEAAJXZ @ 0x1800654DC (-EnsureLightDismissProvider@SingleViewLightDismissHelper@@AEAAJXZ.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x1800655B8 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SingleViewLightDismissHelper::InternalRegisterWithLightDismiss(
        SingleViewLightDismissHelper *a1,
        unsigned int a2,
        __int64 a3,
        ExperienceManagerUtils *a4)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v8; // rdx
  int v9; // edi
  void *v10; // rax
  _DWORD *v11; // rcx
  __int64 v13; // rdx
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  ULONG v15; // [rsp+20h] [rbp-49h]
  _DWORD v16[4]; // [rsp+30h] [rbp-39h] BYREF
  LPVOID Context[2]; // [rsp+40h] [rbp-29h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-19h] BYREF
  int v19; // [rsp+54h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+58h] [rbp-11h] BYREF
  int *v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+84h] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  SingleViewLightDismissHelper::UnregisterWithLightDismiss(a1);
  v9 = SingleViewLightDismissHelper::EnsureLightDismissProvider(a1);
  if ( v9 < 0 )
  {
    v13 = 77LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
      (const char *)(unsigned int)v9,
      v15);
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
      v15);
    return 2147500037LL;
  }
  Context[0] = (LPVOID)a2;
  Context[1] = v10;
  v9 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *, __int64, _DWORD *))(**(_QWORD **)a1 + 24LL))(
         *(_QWORD *)a1,
         Context,
         a3,
         v16);
  if ( v9 < 0 )
  {
    v13 = 85LL;
    goto LABEL_14;
  }
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
    && fPending )
  {
    Context[0] = qword_18059FFB8;
    qword_18059FFB8[0] = &ShellScreenClippingLogging::`vftable';
    qword_18059FFD0 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFB8, qword_18059FFD0, v14);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18059FFB8);
  }
  v11 = (_DWORD *)*((_QWORD *)Context[0] + 1);
  if ( *v11 > 5u )
  {
    v19 = v16[0];
    v21 = &v19;
    v22 = 4;
    v23 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v11, (unsigned __int8 *)dword_180500D36, 0LL, 0LL, 3u, &v20);
  }
  if ( *((_DWORD *)a1 + 2) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a1 + 40LL))(*(_QWORD *)a1, v16[0]);
  else
    *((_DWORD *)a1 + 2) = v16[0];
  return 0LL;
}
