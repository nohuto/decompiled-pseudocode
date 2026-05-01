/*
 * XREFs of ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x1801AA280
 * Callers:
 *     ?ExitFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x1801AA1E0 (-ExitFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_EXIT_REASON@@@.c)
 * Callees:
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x18000A6A0 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000A760 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioner.c)
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1800244E4 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_1543a9792f02a1d62c3d653b63fdee88___ @ 0x1801A8CE0 (ShellPositionerHelpers--PerformCallbackOnView__lambda_1543a9792f02a1d62c3d653b63fdee88___.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801A916C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??1FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ @ 0x1801A97B4 (--1FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x1801AB7A0 (-StartActivity@FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801ABC84 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 */

__int64 __fastcall CFullScreenManager::ExitFullScreenForView(
        IUnknown **a1,
        FullScreenPositionerHelpers *a2,
        unsigned int a3)
{
  struct IApplicationView *v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ebx
  IUnknown *v9; // rcx
  HRESULT Service; // eax
  __int64 v11; // rdx
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  __int128 ppvOut; // [rsp+28h] [rbp-D8h] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v16[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  if ( (int)CFullScreenManager::IsViewFullScreen(a1, a2, &v15) >= 0 && v15 )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v16,
      (__int64)"FSMExitFullScreenForView");
    v16[0] = &FullScreenManagerTelemetry::FSMExitFullScreenForView::`vftable';
    FullScreenManagerTelemetry::FSMExitFullScreenForView::StartActivity(v16, a2, a3);
    if ( FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(a2, v6) )
    {
      v8 = -2147024809;
LABEL_11:
      FullScreenManagerTelemetry::FSMExitFullScreenForView::~FSMExitFullScreenForView((FullScreenManagerTelemetry::FSMExitFullScreenForView *)v16);
      return v8;
    }
    LOBYTE(v13) = 0;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetImpl'::`2'::impl,
      1u,
      v7);
    v9 = *(a1 - 9);
    *((_QWORD *)&ppvOut + 1) = &v13;
    *(_QWORD *)&ppvOut = a2;
    ShellPositionerHelpers::PerformCallbackOnView__lambda_1543a9792f02a1d62c3d653b63fdee88___(v9, (__int64)a2, &ppvOut);
    if ( !(_BYTE)v13 )
    {
      *(_QWORD *)&ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      Service = IUnknown_QueryService(
                  *(a1 - 9),
                  &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                  &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                  (void **)&ppvOut);
      v8 = Service;
      if ( Service < 0 )
      {
        v11 = 215LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
          (const char *)(unsigned int)Service);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_11;
      }
      Service = (*(__int64 (__fastcall **)(_QWORD, FullScreenPositionerHelpers *, __int64))(*(_QWORD *)ppvOut + 32LL))(
                  ppvOut,
                  a2,
                  3LL);
      v8 = Service;
      if ( Service < 0 )
      {
        v11 = 216LL;
        goto LABEL_10;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v16);
    FullScreenManagerTelemetry::FSMExitFullScreenForView::~FSMExitFullScreenForView((FullScreenManagerTelemetry::FSMExitFullScreenForView *)v16);
  }
  return 0LL;
}
