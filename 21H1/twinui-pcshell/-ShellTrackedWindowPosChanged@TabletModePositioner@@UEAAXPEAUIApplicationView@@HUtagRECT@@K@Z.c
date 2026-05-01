/*
 * XREFs of ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x1803DA2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180038D30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003EF48 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1803D2B1C (--0-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803D2BD0 (--0-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0I_ea_1803D2BD0.c)
 *     ??1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ @ 0x1803D3298 (--1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1803D8214 (-IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x1803D8340 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1803D8414 (-IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WIN.c)
 *     ?Maximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x1803D85C4 (-Maximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?StaleState@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x1803DAC1C (-StaleState@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@HAEBUtagRECT@@K@Z @ 0x1803DB51C (-StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@H.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803DBC90 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1803DEF8C (-ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Ta.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1803DF3C4 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 */

void __fastcall TabletModePositioner::ShellTrackedWindowPosChanged(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        int a3,
        struct tagRECT *a4,
        unsigned int a5)
{
  __int64 *v9; // rdi
  __int64 (__fastcall ***v10)(ApplicationViewHelpers *, GUID *, __int64 *); // rdx
  HWND WindowForView; // rax
  struct IUnknown *v12; // rcx
  __int64 v13; // rcx
  _QWORD v14[40]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v15[40]; // [rsp+170h] [rbp+70h] BYREF

  if ( *((_DWORD *)this + 18) != 2 )
  {
    v9 = (__int64 *)((char *)this - 160);
    if ( TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 160)) )
    {
      WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(v10, (struct IApplicationView *)v10);
      if ( !GetPropW(WindowForView, (LPCWSTR)0xA91D) )
      {
        v12 = (struct IUnknown *)*((_QWORD *)this + 33);
        if ( v12
          && (unsigned int)SHIsSameObject(v12, (struct IUnknown *)a2)
          && EqualRect((const RECT *)((char *)this + 296), a4) )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 33);
          SetRectEmpty((LPRECT)((char *)this + 296));
        }
        else
        {
          wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v15);
          v15[0] = &TabletModeTraceLogging::ShellTrackedWindowPosChanged::`vftable';
          TabletModeTraceLogging::ShellTrackedWindowPosChanged::StartActivity(
            (TabletModeTraceLogging::ShellTrackedWindowPosChanged *)v15,
            a2,
            a3,
            a4,
            a5);
          if ( TabletModePositioner::IsWindowStateStale(
                 v13,
                 (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                 (struct _GUID *)a4,
                 a5) )
          {
            TabletModeTraceLogging::ShellTrackedWindowPosChanged::StaleState((TabletModeTraceLogging::ShellTrackedWindowPosChanged *)v15);
          }
          else if ( a5 )
          {
            if ( a5 == 1 )
            {
              wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
                (struct wil::details::IFailureCallback *)v14,
                (__int64)v15);
              v14[0] = &TabletModeTraceLogging::ShellTrackedWindowPosChanged::`vftable';
              TabletModeTraceLogging::ShellTrackedWindowPosChanged::Maximized((TabletModeTraceLogging::ShellTrackedWindowPosChanged *)v14);
              TabletModeTraceLogging::ShellTrackedWindowPosChanged::~ShellTrackedWindowPosChanged((TabletModeTraceLogging::ShellTrackedWindowPosChanged *)v14);
            }
            else if ( a5 == 2 )
            {
              wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
                (struct wil::details::IFailureCallback *)v14,
                (__int64)v15);
              v14[0] = &TabletModeTraceLogging::ShellTrackedWindowPosChanged::`vftable';
              TabletModePositioner::ViewMinimized(v9, a2, v14);
            }
          }
          else
          {
            wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
              (struct wil::details::IFailureCallback *)v14,
              (__int64)v15);
            v14[0] = &TabletModeTraceLogging::ShellTrackedWindowPosChanged::`vftable';
            TabletModePositioner::ViewRestored(v9, a2, v14);
          }
          if ( TabletModePositioner::IsOldFullScreenView((TabletModePositioner *)v9, (struct IUnknown *)a2) )
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9 + 34);
          wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v15);
          TabletModeTraceLogging::ShellTrackedWindowPosChanged::~ShellTrackedWindowPosChanged((TabletModeTraceLogging::ShellTrackedWindowPosChanged *)v15);
        }
      }
    }
  }
}
