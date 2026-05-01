/*
 * XREFs of ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180186520
 * Callers:
 *     ?EnterFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180186470 (-EnterFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_MODE@@W4FULL_.c)
 * Callees:
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180009ED0 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180009F90 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioner.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180184DC0 (-IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_a615657928c36cfbb9f81a716113003f___ @ 0x180185360 (ShellPositionerHelpers--PerformCallbackOnView__lambda_a615657928c36cfbb9f81a716113003f___.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801856AC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??1FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ @ 0x180185CC8 (--1FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180187B28 (-StartActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801881C4 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 */

__int64 __fastcall CFullScreenManager::EnterFullScreenForView(
        IUnknown **a1,
        struct IApplicationView *a2,
        __int64 a3,
        unsigned int a4)
{
  int IsViewFullScreen; // ebx
  __int64 v8; // rdx
  struct IApplicationView *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r8
  IUnknown *v13; // rcx
  HRESULT Service; // eax
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-E0h] BYREF
  __int128 ppvOut; // [rsp+28h] [rbp-D8h] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  _QWORD v20[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  IsViewFullScreen = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 88LL))(a2, &v18);
  if ( IsViewFullScreen < 0 )
  {
    v8 = 144LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)IsViewFullScreen);
    return (unsigned int)IsViewFullScreen;
  }
  if ( v18 )
  {
    IsViewFullScreen = CFullScreenManager::IsViewFullScreen(a1, a2, &v19);
    if ( IsViewFullScreen < 0 )
    {
      v8 = 148LL;
      goto LABEL_3;
    }
    if ( !v19 )
    {
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v20,
        (__int64)"FSMEnterFullScreenForView");
      v20[0] = &FullScreenManagerTelemetry::FSMEnterFullScreenForView::`vftable';
      FullScreenManagerTelemetry::FSMEnterFullScreenForView::StartActivity(v20, a2, a4);
      if ( FullScreenPositionerHelpers::IsFullScreenModeDisabledForView(
             (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
             v10,
             v11) )
      {
        IsViewFullScreen = -2147024891;
LABEL_19:
        FullScreenManagerTelemetry::FSMEnterFullScreenForView::~FSMEnterFullScreenForView((FullScreenManagerTelemetry::FSMEnterFullScreenForView *)v20);
        return (unsigned int)IsViewFullScreen;
      }
      LOBYTE(v16) = 0;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetImpl'::`2'::impl,
        1u,
        v12);
      v13 = *(a1 - 9);
      *((_QWORD *)&ppvOut + 1) = &v16;
      *(_QWORD *)&ppvOut = a2;
      ShellPositionerHelpers::PerformCallbackOnView__lambda_a615657928c36cfbb9f81a716113003f___(
        v13,
        (__int64)a2,
        &ppvOut);
      if ( !(_BYTE)v16 )
      {
        *(_QWORD *)&ppvOut = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        Service = IUnknown_QueryService(
                    *(a1 - 9),
                    &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                    &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                    (void **)&ppvOut);
        IsViewFullScreen = Service;
        if ( Service < 0 )
        {
          v15 = 176LL;
LABEL_16:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v15,
            (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
            (const char *)(unsigned int)Service);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
          goto LABEL_19;
        }
        Service = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(*(_QWORD *)ppvOut + 24LL))(
                    ppvOut,
                    a2,
                    3LL);
        IsViewFullScreen = Service;
        if ( Service < 0 )
        {
          v15 = 177LL;
          goto LABEL_16;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      }
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v20);
      IsViewFullScreen = 0;
      goto LABEL_19;
    }
  }
  return 2147942487LL;
}
