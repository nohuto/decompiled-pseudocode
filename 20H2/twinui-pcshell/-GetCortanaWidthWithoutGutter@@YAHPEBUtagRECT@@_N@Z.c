/*
 * XREFs of ?GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z @ 0x180096A20
 * Callers:
 *     ?ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x180060E60 (-ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H_N@Z @ 0x180096E00 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H_N@Z.c)
 *     ?GetTaskbarSearchBoxWidth@@YAHPEBUtagRECT@@_N@Z @ 0x1800A49CC (-GetTaskbarSearchBoxWidth@@YAHPEBUtagRECT@@_N@Z.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x1801D42C0 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x18020A370 (-CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z.c)
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x18020A540 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x18020DC50 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18020F3C8 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?GetWindowsSearchBoxWidth@@YAH_N0@Z @ 0x180096E98 (-GetWindowsSearchBoxWidth@@YAH_N0@Z.c)
 *     ?GetWindowsSearchBoxWidthWithMonParamConsidered@@YAH_N00@Z @ 0x180096F54 (-GetWindowsSearchBoxWidthWithMonParamConsidered@@YAH_N00@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixShortenedSBInNonPrimaryMon@@@details@wil@@QEAA_NXZ @ 0x180097614 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixShortenedSBInNonPrim.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer@@@details@wil@@QEAA_NXZ @ 0x180097718 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSear_ea_180097718.c)
 */

__int64 __fastcall GetCortanaWidthWithoutGutter(LPCRECT lprc, bool a2)
{
  unsigned int v4; // ebx
  bool v5; // zf
  LONG right; // eax
  bool v7; // si
  HMONITOR v9; // rax
  bool v10; // bl
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  v4 = 320;
  v5 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer>::GetImpl'::`2'::impl) == 0;
  right = lprc->right;
  if ( v5 )
  {
    if ( right - lprc->left >= 1196 )
      return 344;
  }
  else
  {
    v7 = right - lprc->left >= 1196;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixShortenedSBInNonPrimaryMon>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_FixShortenedSBInNonPrimaryMon>::GetImpl'::`2'::impl) )
    {
      return (unsigned int)GetWindowsSearchBoxWidth(v7, a2);
    }
    else
    {
      v9 = MonitorFromRect(lprc, 0);
      mi.cbSize = 40;
      memset(&mi.rcMonitor, 0, 36);
      v10 = 1;
      if ( GetMonitorInfoW(v9, &mi) )
        v10 = mi.dwFlags == 1;
      return (unsigned int)GetWindowsSearchBoxWidthWithMonParamConsidered(v10, v7, a2);
    }
  }
  return v4;
}
