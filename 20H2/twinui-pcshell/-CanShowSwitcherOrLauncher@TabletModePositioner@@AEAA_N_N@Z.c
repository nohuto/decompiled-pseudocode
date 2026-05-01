/*
 * XREFs of ?CanShowSwitcherOrLauncher@TabletModePositioner@@AEAA_N_N@Z @ 0x1803F4768
 * Callers:
 *     ?ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ @ 0x1803FB3C0 (-ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z @ 0x1803FB404 (-ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z.c)
 * Callees:
 *     ?IsFullScreenViewVisible@TabletModePositioner@@AEAA_NXZ @ 0x1803F8CEC (-IsFullScreenViewVisible@TabletModePositioner@@AEAA_NXZ.c)
 *     ?IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1803F8E68 (-IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x1803F8EC4 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 */

char __fastcall TabletModePositioner::CanShowSwitcherOrLauncher(TabletModePositioner *this, char a2)
{
  __int64 v4; // rcx
  char v5; // bl

  v5 = 0;
  if ( TabletModePositioner::IsTabletMode(this)
    && !*(_QWORD *)(v4 + 288)
    && !GetSystemMetrics(0x2000)
    && (a2 || !(unsigned __int8)TabletModePositioner::IsSwitcherVisible(this, 15LL))
    && !TabletModePositioner::IsFullScreenViewVisible(this) )
  {
    return 1;
  }
  return v5;
}
