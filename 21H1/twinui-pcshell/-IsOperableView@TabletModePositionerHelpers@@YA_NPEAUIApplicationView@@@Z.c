/*
 * XREFs of ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18037B510
 * Callers:
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x18007DEA0 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 *     ?IsDraggable@CPPIAllUpViewController@@UEAA?AW4DragEffects@@PEAUISwitchItem@@@Z @ 0x18037D0B0 (-IsDraggable@CPPIAllUpViewController@@UEAA-AW4DragEffects@@PEAUISwitchItem@@@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1803D39B4 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D5F40 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetForegroundOperableView@TabletModePositioner@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x1803D6B10 (-GetForegroundOperableView@TabletModePositioner@@AEAAJPEAPEAUIApplicationView@@@Z.c)
 *     ?GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1803D6C74 (-GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z.c)
 *     ?GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z @ 0x1803D6FE4 (-GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z.c)
 *     ?HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803D7770 (-HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1803DF3C4 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 *     ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x1803E0BC0 (-MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180038D30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18037B468 (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18037B49C (-IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x18037B5A4 (-IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18044E1C8 (-HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

char __fastcall TabletModePositionerHelpers::IsOperableView(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2)
{
  char v3; // bl
  struct IApplicationView *v4; // rdx
  TabletModePositionerHelpers *WindowForView; // rax
  HWND v6; // rdx
  struct IApplicationView *v7; // rdx
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( TabletModePositionerHelpers::IsControlledView((TabletModePositionerHelpers *)this, a2) )
  {
    WindowForView = (TabletModePositionerHelpers *)ApplicationViewHelpers::GetWindowForView(this, v4);
    if ( (TabletModePositionerHelpers::IsOperableWindow(WindowForView, v6)
       || (int)GetViewLayoutBehaviorFlags((struct IApplicationView *)this, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v9) >= 0
       && (v9 & 2) != 0)
      && !ApplicationViewHelpers::HasRootSwitchableOwner((struct IUnknown *)this, v7)
      && ((int (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), int *))(*this)[27])(
           this,
           &v9) >= 0 )
    {
      return v9 != 0;
    }
  }
  return v3;
}
