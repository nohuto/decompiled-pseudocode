/*
 * XREFs of ?ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@_N@Z @ 0x1803D41EC
 * Callers:
 *     ?AddPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1803D3FA0 (-AddPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE.c)
 *     ?RemovePositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1803D54E0 (-RemovePositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_T.c)
 * Callees:
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x180018AB8 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180025180 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002CB98 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801A959C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801AC0B4 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??1ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAA@XZ @ 0x1803D3958 (--1ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAA@XZ.c)
 *     ??4ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803D3AEC (--4ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@1@Z @ 0x1803D4BB4 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?StartActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAXPEAUIApplicationView@@W4CompactOverlayExitReason@2@@Z @ 0x1803D56AC (-StartActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAXPEAUIApplicationView@@W4.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x18047206C (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ShellPositionerManager::ChangePositionerForView(
        __int64 a1,
        struct IApplicationView *a2,
        unsigned int a3,
        char a4)
{
  int PositionerPriorityForView; // eax
  unsigned int v9; // ebx
  struct IShellPositionerPriority *v10; // rbx
  unsigned int v11; // r15d
  __int64 v12; // rax
  unsigned int v13; // r12d
  int v14; // eax
  struct IApplicationView *v15; // rdx
  struct IImmersiveApplication *ApplicationFromView; // rbx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  WINBOOL v20; // edx
  __int64 v22; // [rsp+20h] [rbp-E0h] BYREF
  struct IShellPositionerPriority *v23; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v24[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v25[40]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v26[40]; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  v23 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                (ShellPositionerManager *)a1,
                                a2,
                                &v23);
  v9 = PositionerPriorityForView;
  if ( PositionerPriorityForView >= 0 )
  {
    v10 = v23;
    v11 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v23 + 24LL))(v23);
    v12 = *(_QWORD *)v10;
    if ( a4 )
      (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(v12 + 48))(v10, a3);
    else
      (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(v12 + 40))(v10, a3);
    v13 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v10 + 24LL))(v10);
    if ( v13 != v11 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
        1u);
      v22 = 0LL;
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(a1 + 176) + 32LL))(
              *(_QWORD *)(a1 + 176),
              (unsigned int)(*(_DWORD *)(a1 + 144) != 0) + 1,
              &v22);
      if ( v14 >= 0 )
      {
        ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, v15);
        v24[0] = (__int64)ApplicationFromView;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v24);
        if ( ApplicationFromView )
        {
          v17 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64))(*(_QWORD *)ApplicationFromView
                                                                                   + 400LL))(
                  ApplicationFromView,
                  v22);
          if ( v17 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x3FF,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
              (const char *)(unsigned int)v17);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3FA,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v14);
      }
      v18 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v25,
        (__int64)"ExitCompactOverlayModeForView");
      v25[0] = &OverlayModeTelemetry::ExitCompactOverlayModeForView::`vftable';
      if ( v11 == 6 )
      {
        wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)v26,
          (__int64)"ExitCompactOverlayModeForView");
        v26[0] = &OverlayModeTelemetry::ExitCompactOverlayModeForView::`vftable';
        OverlayModeTelemetry::ExitCompactOverlayModeForView::StartActivity(v26, a2, 1LL);
        OverlayModeTelemetry::ExitCompactOverlayModeForView::operator=((__int64)v25, (__int64)v26);
        OverlayModeTelemetry::ExitCompactOverlayModeForView::~ExitCompactOverlayModeForView((OverlayModeTelemetry::ExitCompactOverlayModeForView *)v26);
      }
      v19 = ShellPositionerManager::PerformPositionerHandoff(a1, a2, v11, v13);
      v9 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x40B,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v19);
        OverlayModeTelemetry::ExitCompactOverlayModeForView::~ExitCompactOverlayModeForView((OverlayModeTelemetry::ExitCompactOverlayModeForView *)v25);
        goto LABEL_23;
      }
      if ( *(_DWORD *)v25[6] == 1 )
        wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)v25,
          v20);
      OverlayModeTelemetry::ExitCompactOverlayModeForView::~ExitCompactOverlayModeForView((OverlayModeTelemetry::ExitCompactOverlayModeForView *)v25);
    }
    ShellPositionerManager::PersistPositionerPriority((ShellPositionerManager *)a1, a2);
    v9 = 0;
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3DF,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)PositionerPriorityForView);
LABEL_23:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  return v9;
}
