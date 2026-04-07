/*
 * XREFs of ?Initialize@CVisual@@MEAAJXZ @ 0x180014F10
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180001860 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?Initialize@CAccentBlurBehind@@EEAAJXZ @ 0x180009C20 (-Initialize@CAccentBlurBehind@@EEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow3D@@MEAAJXZ @ 0x180012490 (-Initialize@CTopLevelWindow3D@@MEAAJXZ.c)
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJXZ @ 0x180014EE0 (-Initialize@CAtlasedRectsVisual@@MEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x180017B00 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 *     ?Initialize@CAnimatedTransitionVisual@@MEAAJXZ @ 0x180035180 (-Initialize@CAnimatedTransitionVisual@@MEAAJXZ.c)
 *     ?Initialize@CThumbnailVisual@@MEAAJXZ @ 0x18003E100 (-Initialize@CThumbnailVisual@@MEAAJXZ.c)
 *     ?Initialize@CImage@@EEAAJXZ @ 0x18003ED30 (-Initialize@CImage@@EEAAJXZ.c)
 *     ?Initialize@CAccent@@MEAAJXZ @ 0x180041790 (-Initialize@CAccent@@MEAAJXZ.c)
 *     ?Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ @ 0x1800452D0 (-Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x180045C20 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x180046160 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CLivePreview@@MEAAJXZ @ 0x18004A480 (-Initialize@CLivePreview@@MEAAJXZ.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x18008AB10 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?Initialize@CProjectionBorderVisual@@MEAAJXZ @ 0x180092EF0 (-Initialize@CProjectionBorderVisual@@MEAAJXZ.c)
 *     ?Initialize@CRippleEffect@@IEAAJPEAPEAVCBitmapSource@@@Z @ 0x18009BEEC (-Initialize@CRippleEffect@@IEAAJPEAPEAVCBitmapSource@@@Z.c)
 *     ?Initialize@CContactStationaryVisual@@MEAAJXZ @ 0x1800A18B0 (-Initialize@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJXZ @ 0x1800A23B0 (-Initialize@CTextTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x1800A42A0 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 *     ?Initialize@CTetherVisual@@MEAAJXZ @ 0x1800A5230 (-Initialize@CTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800A5A20 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?Initialize@CFlickVisual@@MEAAJXZ @ 0x1800A6090 (-Initialize@CFlickVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenPressHoldVisual@@MEAAJXZ @ 0x1800A67D0 (-Initialize@CPenPressHoldVisual@@MEAAJXZ.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800A6C00 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x1800A7520 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800AD860 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CDesktopThumbnailBase@@MEAAJXZ @ 0x1800B68A0 (-Initialize@CDesktopThumbnailBase@@MEAAJXZ.c)
 *     ?Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ @ 0x1800B6990 (-Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800B8120 (-Initialize@CTouchPressHoldVisual@@MEAAJXZ.c)
 *     ?Initialize@UdwmBottomVisual@@MEAAJXZ @ 0x1800BAB20 (-Initialize@UdwmBottomVisual@@MEAAJXZ.c)
 *     ?Initialize@UdwmTopVisual@@MEAAJXZ @ 0x1800BAB60 (-Initialize@UdwmTopVisual@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z @ 0x180019760 (--$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z.c)
 */

__int64 __fastcall CVisual::Initialize(CVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CCompositor::CreateProxy<CVisualProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         (char *)this + 16);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x4Du);
  return v2;
}
