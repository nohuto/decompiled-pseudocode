/*
 * XREFs of ?IsHighContrast@@YAHXZ @ 0x180067BE0
 * Callers:
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800656D0 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x1801B03A4 (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B49F0 (-OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x1801CDC38 (-UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 *     ?OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801D9580 (-OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ??B?$HighContrastAwareOpacity@N@@QEBANXZ @ 0x1803A9008 (--B-$HighContrastAwareOpacity@N@@QEBANXZ.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x1803AA2CC (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 *     ?GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x1803B63F0 (-GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x1803B6444 (-GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ @ 0x1803B6BA0 (-UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ.c)
 *     ?AnimatePositionChanged@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x1803C3CD0 (-AnimatePositionChanged@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@Item.c)
 *     s_DrawGlyph @ 0x18047B638 (s_DrawGlyph.c)
 * Callees:
 *     <none>
 */

__int64 IsHighContrast(void)
{
  unsigned int v0; // ebx
  int pvParam; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+24h] [rbp-14h]
  int v4; // [rsp+2Ch] [rbp-Ch]

  v0 = 0;
  v3 = 0LL;
  v4 = 0;
  pvParam = 16;
  if ( SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0) )
    return v3 & 1;
  return v0;
}
