/*
 * XREFs of ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180025E70
 * Callers:
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000C13C (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800253FC (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180028BA8 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z @ 0x18002F948 (-GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z.c)
 *     ?GetAnimationDuration@@YAJHHPEAK@Z @ 0x180030984 (-GetAnimationDuration@@YAJHHPEAK@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x180047A10 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180047B78 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x180047F08 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x180048FCC (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x180049404 (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x1800939F0 (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x18009BD68 (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800A12C0 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJXZ @ 0x1800A1CD0 (-Initialize@CTextTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x1800A3BC0 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 *     ?Initialize@CTetherVisual@@MEAAJXZ @ 0x1800A4B50 (-Initialize@CTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800A5340 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x1800A5A74 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800A6198 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800A6520 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800AD180 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::GetTheme(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 76);
  v1 = a1 - 1;
  if ( !v1 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 78);
  v2 = v1 - 1;
  if ( !v2 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 79);
  v3 = v2 - 1;
  if ( !v3 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 80);
  if ( v3 == 1 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 81);
  return 0LL;
}
