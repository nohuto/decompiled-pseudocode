/*
 * XREFs of ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1801452E4
 * Callers:
 *     _lambda_a89968ff9a0d2ae258e0bdafe075d942_::operator() @ 0x180143D2C (_lambda_a89968ff9a0d2ae258e0bdafe075d942_--operator().c)
 *     ?DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x180145130 (-DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 * Callees:
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000A230 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180044C00 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007C6DC (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_256298ed2ede4decac2a97d43cbe894d___ @ 0x180141EE4 (ShellPositionerHelpers--PerformCallbackOnView__lambda_256298ed2ede4decac2a97d43cbe894d___.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180142A38 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1DragComplete@AppViewManagerTabTelemetry@@QEAA@XZ @ 0x1801435D4 (--1DragComplete@AppViewManagerTabTelemetry@@QEAA@XZ.c)
 *     _lambda_3a58774b2403835eabbd2227e376bc7e_::operator() @ 0x18014397C (_lambda_3a58774b2403835eabbd2227e376bc7e_--operator().c)
 *     ?DragViewComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x180145A4C (-DragViewComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@DragComplete@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x1801486C8 (-StartActivity@DragComplete@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801493B0 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 */

__int64 __fastcall CAppViewManager::DragCompleteWorker(
        CAppViewManager *this,
        const struct _GUID *a2,
        struct tagPOINT a3)
{
  RTL_SRWLOCK *v6; // rbx
  int v7; // eax
  int v8; // esi
  __int64 v9; // r14
  __int64 (__fastcall *v10)(__int64, const struct _GUID *, __int128 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64)); // rsi
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  struct IApplicationView **v15; // r9
  int ViewForApplication; // eax
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  RTL_SRWLOCK *v19; // rbx
  struct IApplicationView *v21; // [rsp+30h] [rbp-D0h] BYREF
  struct tagPOINT v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64); // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v27[3]; // [rsp+68h] [rbp-98h] BYREF
  char v28; // [rsp+80h] [rbp-80h]
  __int128 v29; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v30[40]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v22 = a3;
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v30,
    (__int64)"DragComplete");
  v30[0] = &AppViewManagerTabTelemetry::DragComplete::`vftable';
  AppViewManagerTabTelemetry::DragComplete::StartActivity((AppViewManagerTabTelemetry::DragComplete *)v30, a2, &v22);
  v24 = 0LL;
  v27[0] = this;
  v27[1] = &a2->Data1;
  v27[2] = &v24;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         a2,
         &v25);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x496,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_7;
  }
  if ( v25 )
  {
    v23 = 0LL;
    v29 = 0LL;
    v9 = *((_QWORD *)this + 23);
    v10 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, __int128 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64)))(*(_QWORD *)v9 + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    v11 = v10(v9, a2, &v29, &v23);
    v8 = v11;
    if ( v11 < 0 )
    {
      v12 = 1180LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
LABEL_7:
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
      goto LABEL_26;
    }
    if ( v23 )
    {
      v11 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v23, (__int64)&v24);
      v8 = v11;
      if ( v11 < 0 )
      {
        v12 = 1183LL;
        goto LABEL_6;
      }
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64, __int64))(**((_QWORD **)this + 23) + 40LL))(
            *((_QWORD *)this + 23),
            a2,
            1LL,
            1LL);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4A3,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( !v24 )
    goto LABEL_30;
  v22 = 0LL;
  v14 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v24, (__int64 *)&v22);
  v8 = v14;
  if ( v14 >= 0 )
  {
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                           *((IUnknown **)this + 15),
                           *(struct IUnknown **)&v22,
                           (struct IImmersiveApplication *)&v21,
                           v15);
    v8 = ViewForApplication;
    if ( ViewForApplication < 0 )
    {
      v17 = (unsigned int)ViewForApplication;
      v18 = 1199LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      goto LABEL_25;
    }
    AppViewManagerTabTelemetry::DragComplete::DragViewComplete((AppViewManagerTabTelemetry::DragComplete *)v30, v21);
    v26[0] = (__int64)v21;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v26);
    v26[1] = (__int64)a3;
    v8 = ShellPositionerHelpers::PerformCallbackOnView__lambda_256298ed2ede4decac2a97d43cbe894d___(
           *((IUnknown **)this + 15),
           (__int64)v21,
           (__int64)v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v26);
    if ( v8 < 0 )
    {
      v17 = (unsigned int)v8;
      v18 = 1216LL;
      goto LABEL_24;
    }
    v19 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*v24)[69])(v24, 0LL);
    if ( v19 )
      ReleaseSRWLockExclusive(v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
LABEL_30:
    wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v30);
    v8 = 0;
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4AB,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v14);
LABEL_25:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
LABEL_26:
  v28 = 0;
  lambda_3a58774b2403835eabbd2227e376bc7e_::operator()(v27);
LABEL_31:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  AppViewManagerTabTelemetry::DragComplete::~DragComplete((AppViewManagerTabTelemetry::DragComplete *)v30);
  return (unsigned int)v8;
}
