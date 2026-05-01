/*
 * XREFs of ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x1804029A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800508C4 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z @ 0x1800B4E9C (-IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1800B4FA8 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18039C760 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsViewFullScreen@TabletModeViewManager@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804028FC (-IsViewFullScreen@TabletModeViewManager@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x180403030 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
 */

__int64 __fastcall TabletModeViewManager::MoveSizeAttempted(__int64 a1, struct IApplicationView *a2, int a3)
{
  enum _TABLETMODESTATE *v6; // rdx
  TabletModeHelpers *v7; // rcx
  bool v8; // si
  struct IApplicationView *v9; // rdx
  bool IsViewFullScreen; // al
  struct tagPOINT Point; // [rsp+78h] [rbp+20h] BYREF

  v8 = IsSurfaceHubWithWin32VtcEnabled() && PPISideBarHelpers::IsSideBarView(a2);
  if ( TabletModeHelpers::IsTabletMode(v7, v6)
    && TabletModePositionerHelpers::IsOperableView(
         (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
         v9)
    && !v8 )
  {
    if ( a3 == 2 )
      goto LABEL_12;
    if ( a3 > 2 )
    {
      if ( a3 <= 4 )
      {
        GetPhysicalCursorPos(&Point);
        (*(void (__fastcall **)(__int64, struct IApplicationView *, _QWORD, struct tagPOINT))(*(_QWORD *)a1 + 72LL))(
          a1,
          a2,
          (unsigned int)a3,
          Point);
        return 0LL;
      }
      if ( a3 <= 7 )
      {
LABEL_12:
        IsViewFullScreen = TabletModeViewManager::IsViewFullScreen((IUnknown **)(a1 - 88), a2);
        TabletModeViewManager::ShowWindowArrangementView(a1 - 88, a2, 0LL, 0LL, 0LL, 0LL, IsViewFullScreen, 1, 0LL);
      }
    }
  }
  return 0LL;
}
