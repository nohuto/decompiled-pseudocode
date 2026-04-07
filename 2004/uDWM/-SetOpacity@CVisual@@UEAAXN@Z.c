/*
 * XREFs of ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001D170
 * Callers:
 *     ?UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180006D88 (-UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x180009120 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z @ 0x180010CA8 (-OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800114C0 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001271C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D264 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180023800 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180044970 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x180045DE8 (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180045E80 (-StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?EndTransition@CThumbnailVisual@@UEAAXXZ @ 0x180093D90 (-EndTransition@CThumbnailVisual@@UEAAXXZ.c)
 *     ?Hide@CAnimatedGlassSheet@@QEAAXXZ @ 0x18009AF88 (-Hide@CAnimatedGlassSheet@@QEAAXXZ.c)
 *     ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x18009BA70 (-UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x1800A11DC (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800A12F4 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x1800A14E0 (-Stop@CDirectTouchVisual@@UEAAXXZ.c)
 *     ?UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z @ 0x1800A1504 (-UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x1800A1570 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x1800A17C8 (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800A19A0 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x1800A1E40 (-Stop@CContactStationaryVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x1800A1EF0 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x1800A27B0 (-Stop@CTextTetherVisual@@UEAAXXZ.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800A4980 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x1800A4A18 (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x1800A5BF0 (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 *     ?Stop@CPenBarrelKeyVisual@@UEAAXXZ @ 0x1800A5C80 (-Stop@CPenBarrelKeyVisual@@UEAAXXZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x1800A6154 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x1800A65C0 (-Stop@CFlickVisual@@UEAAXXZ.c)
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x1800A66DC (--1CPenPressHoldVisual@@MEAA@XZ.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800A6878 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Stop@CPenPressHoldVisual@@UEAAXXZ @ 0x1800A6A50 (-Stop@CPenPressHoldVisual@@UEAAXXZ.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800A6DD0 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x1800A7180 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 *     ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x1800ADF80 (-Stop@CIndirectTouchVisual@@UEAAXXZ.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x1800AE10C (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x1800B6ED4 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 *     ?Initialize@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800B8120 (-Initialize@CTouchPressHoldVisual@@MEAAJXZ.c)
 *     ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800B86D0 (-Stop@CTouchPressHoldVisual@@UEAAXXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800B87BC (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetOpacity(CVisual *this, double a2)
{
  float v2; // xmm0_4
  double v3; // rax

  v2 = a2;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)this + 23) - v2) & _xmm) > 0.0000011920929 )
  {
    v3 = *(double *)this;
    *((double *)this + 23) = a2;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)&v3 + 24LL))(this, 32LL);
  }
}
