/*
 * XREFs of ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x180400740
 * Callers:
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x1803FAEF0 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180036718 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180192674 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18039BEA0 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ??1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ @ 0x1803F3608 (--1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1803F6570 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?FullScreenAppIgnored@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x1803F6A30 (-FullScreenAppIgnored@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?GetFrameRectForView@TabletModePositioner@@CAXPEAUIApplicationView@@PEAUtagRECT@@@Z @ 0x1803F75D4 (-GetFrameRectForView@TabletModePositioner@@CAXPEAUIApplicationView@@PEAUtagRECT@@@Z.c)
 *     ?IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1803F8D8C (-IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsViewRectValid@TabletModePositioner@@AEAA_NAEBUtagRECT@@0@Z @ 0x1803F8EE4 (-IsViewRectValid@TabletModePositioner@@AEAA_NAEBUtagRECT@@0@Z.c)
 *     ?ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x1803FA3C8 (-ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?Restored@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x1803FA4A4 (-Restored@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?RestoredAppAddedToLayout@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x1803FA5B8 (-RestoredAppAddedToLayout@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1803FEFE0 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1803FFEA0 (-ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView.c)
 *     ?ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x18040009C (-ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationVi.c)
 *     ?ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x18040033C (-ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplication.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TabletModePositioner::ViewRestored(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        TabletModeTraceLogging::ShellTrackedWindowPosChanged *a3)
{
  bool v6; // bl
  struct IApplicationView *v7; // rdx
  HRESULT Service; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  int v17; // eax
  void *ppvOut[2]; // [rsp+38h] [rbp-38h] BYREF
  struct _GUID v19; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v20; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  TabletModeTraceLogging::ShellTrackedWindowPosChanged::Restored(a3);
  v6 = 0;
  if ( TabletModePositioner::IsOldFullScreenView((TabletModePositioner *)a1, (struct IUnknown *)a2) )
  {
    ppvOut[0] = 0LL;
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
    Service = IUnknown_QueryService(
                *(IUnknown **)(a1 + 16),
                &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                ppvOut);
    v9 = retaddr;
    if ( Service >= 0 )
    {
      Service = (*(__int64 (__fastcall **)(void *, struct _GUID *))(*(_QWORD *)ppvOut[0] + 72LL))(ppvOut[0], &v19);
      v9 = retaddr;
      if ( Service >= 0 )
      {
        v20 = 0LL;
        TabletModePositioner::GetFrameRectForView(a2, &v20);
        v6 = Platform::Guid::Equals((Platform::Guid *)&v20, &v19);
        if ( v6 )
          TabletModeTraceLogging::ShellTrackedWindowPosChanged::FullScreenAppIgnored(a3);
LABEL_9:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
        if ( v6 )
          goto LABEL_28;
        goto LABEL_10;
      }
      v10 = 2150LL;
    }
    else
    {
      v10 = 2149LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v9,
      (void *)v10,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)Service);
    goto LABEL_9;
  }
LABEL_10:
  if ( TabletModePositionerHelpers::IsOperableView(a2, v7) )
  {
    *(_QWORD *)&v20.left = 0LL;
    v11 = *(_QWORD *)(a1 + 248);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20.left);
    if ( (*(int (__fastcall **)(__int64, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), struct tagRECT *, _QWORD))(*(_QWORD *)v11 + 152LL))(
           v11,
           a2,
           &v20,
           0LL) < 0 )
    {
      ppvOut[0] = 0LL;
      v16 = *(_QWORD *)(a1 + 336);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
      if ( (*(int (__fastcall **)(__int64, void **))(*(_QWORD *)v16 + 72LL))(v16, ppvOut) >= 0 )
      {
        if ( (unsigned int)SHIsSameObject((struct IUnknown *)ppvOut[0], (struct IUnknown *)a2) )
        {
          TabletModeTraceLogging::ShellTrackedWindowPosChanged::RestoredAppAddedToLayout(a3);
          v17 = TabletModePositioner::SwitchToAppHelper(a1, (struct IApplicationView *)a2, 1u, 0LL, 0LL);
          if ( v17 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x8B0,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v17);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
      goto LABEL_27;
    }
    v19 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, struct _GUID *))(**(_QWORD **)&v20.left + 56LL))(
      *(_QWORD *)&v20.left,
      0LL,
      &v19);
    *(_OWORD *)ppvOut = 0LL;
    TabletModePositioner::GetFrameRectForView(a2, (struct tagRECT *)ppvOut);
    if ( !TabletModePositioner::IsViewRectValid(
            (TabletModePositioner *)a1,
            (const struct tagRECT *)ppvOut,
            (const struct tagRECT *)&v19) )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(**(_QWORD **)(a1 + 320) + 24LL))(
              *(_QWORD *)(a1 + 320),
              a2)
          - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          TabletModeTraceLogging::ShellTrackedWindowPosChanged::ViewForceEvicted(
            a3,
            (struct IApplicationView *)a2,
            (const struct tagRECT *)&v19,
            (const struct tagRECT *)ppvOut);
          v13 = TabletModePositioner::EvictAppHelper((IUnknown *)a1, (__int64)a2, 8u);
          v14 = retaddr;
          if ( v13 < 0 )
          {
            v15 = 2210LL;
            goto LABEL_21;
          }
        }
        else
        {
          TabletModeTraceLogging::ShellTrackedWindowPosChanged::ViewPositionAdjusted(
            a3,
            (struct IApplicationView *)a2,
            (const struct tagRECT *)&v19,
            (const struct tagRECT *)ppvOut);
          v13 = TabletModePositioner::ResizeViewHelper(
                  (IUnknown *)a1,
                  (struct IApplicationView *)a2,
                  LODWORD(ppvOut[1]) - LODWORD(ppvOut[0]));
          v14 = retaddr;
          if ( v13 < 0 )
          {
            v15 = 2194LL;
LABEL_21:
            wil::details::in1diag3::_Log_Hr(
              v14,
              (void *)v15,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v13);
          }
        }
      }
      else
      {
        TabletModeTraceLogging::ShellTrackedWindowPosChanged::ViewForceMaximized(
          a3,
          (struct IApplicationView *)a2,
          (const struct tagRECT *)&v19,
          (const struct tagRECT *)ppvOut);
        v13 = TabletModePositioner::SwitchToAppHelper(a1, (struct IApplicationView *)a2, 4u, 0LL, 0LL);
        v14 = retaddr;
        if ( v13 < 0 )
        {
          v15 = 2203LL;
          goto LABEL_21;
        }
      }
    }
LABEL_27:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20.left);
  }
LABEL_28:
  TabletModeTraceLogging::ShellTrackedWindowPosChanged::~ShellTrackedWindowPosChanged((volatile signed __int32 **)a3);
}
