/*
 * XREFs of ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800600C0
 * Callers:
 *     ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x18005F2A4 (-GetSearchboxTaskbarMode@@YA-AW4SearchboxTaskbarMode@@XZ.c)
 *     ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x180079D50 (-ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANG.c)
 *     _lambda_e7233f2d7fbbc8c446f08901eacadde9_::operator() @ 0x1802FD5D0 (_lambda_e7233f2d7fbbc8c446f08901eacadde9_--operator().c)
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802FF9F0 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180306440 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 *     ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x180307AD0 (-ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x180308220 (-ViewLoaded@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x180318B44 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISw.c)
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x180319D84 (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchI.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x18032B8B4 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     ?OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z @ 0x18039C9F0 (-OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z.c)
 *     ?OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ @ 0x1803F9CE4 (-OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ.c)
 *     ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x180402080 (-MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z.c)
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x180411EEC (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x1804157FC (-InitializeInstance@TabletModeCoverWindow@@AEAAJXZ.c)
 * Callees:
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x1800600F0 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
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
