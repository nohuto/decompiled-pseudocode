/*
 * XREFs of ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800508C4
 * Callers:
 *     ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x180050954 (-GetSearchboxTaskbarMode@@YA-AW4SearchboxTaskbarMode@@XZ.c)
 *     ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18007C760 (-ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANG.c)
 *     _lambda_e7233f2d7fbbc8c446f08901eacadde9_::operator() @ 0x1802FDEC0 (_lambda_e7233f2d7fbbc8c446f08901eacadde9_--operator().c)
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1803002E0 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180306D30 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 *     ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x1803083C0 (-ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x180308B10 (-ViewLoaded@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x180319434 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISw.c)
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x18031A674 (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchI.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x18032C224 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     ?OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z @ 0x18039D2B0 (-OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z.c)
 *     ?OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ @ 0x1803FA604 (-OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ.c)
 *     ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x1804029A0 (-MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z.c)
 *     ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x180415F3C (-InitializeInstance@TabletModeCoverWindow@@AEAAJXZ.c)
 * Callees:
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x1800508F4 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 */

char __fastcall TabletModeHelpers::IsTabletMode(TabletModeHelpers *this, enum _TABLETMODESTATE *a2)
{
  char v2; // bl
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (int)TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v4, a2) >= 0 )
    return v4 == 1;
  return v2;
}
