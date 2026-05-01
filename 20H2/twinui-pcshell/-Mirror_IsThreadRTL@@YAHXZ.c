/*
 * XREFs of ?Mirror_IsThreadRTL@@YAHXZ @ 0x18000FD48
 * Callers:
 *     _dynamic_initializer_for__PPIWin32VtcLayoutOperation::_sideBarLocation__ @ 0x180002C90 (_dynamic_initializer_for__PPIWin32VtcLayoutOperation--_sideBarLocation__.c)
 *     ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x18000FFB8 (-ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@.c)
 *     ?SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z @ 0x1800A3444 (-SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z.c)
 *     ?EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1800B96E0 (-EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 Mirror_IsThreadRTL(void)
{
  LANGID ThreadUILanguage; // ax

  ThreadUILanguage = GetThreadUILanguage();
  return IsBiDiLocale(ThreadUILanguage);
}
