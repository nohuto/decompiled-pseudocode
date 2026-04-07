/*
 * XREFs of ?Initialize@CVisual@@MEAAJXZ @ 0x180027E10
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180003190 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?Initialize@CAccentBlurBehind@@EEAAJXZ @ 0x180009BC0 (-Initialize@CAccentBlurBehind@@EEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x1800223B0 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 *     ?Initialize@CTopLevelWindow3D@@MEAAJXZ @ 0x180027D60 (-Initialize@CTopLevelWindow3D@@MEAAJXZ.c)
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJXZ @ 0x180027DE0 (-Initialize@CAtlasedRectsVisual@@MEAAJXZ.c)
 *     ?Initialize@CThumbnailVisual@@MEAAJXZ @ 0x18002B470 (-Initialize@CThumbnailVisual@@MEAAJXZ.c)
 *     ?Initialize@CAnimatedTransitionVisual@@MEAAJXZ @ 0x180033850 (-Initialize@CAnimatedTransitionVisual@@MEAAJXZ.c)
 *     ?Initialize@CImage@@EEAAJXZ @ 0x18003EC80 (-Initialize@CImage@@EEAAJXZ.c)
 *     ?Initialize@CAccent@@MEAAJXZ @ 0x180042010 (-Initialize@CAccent@@MEAAJXZ.c)
 *     ?Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ @ 0x180045170 (-Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x1800474D0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x180047A10 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CLivePreview@@MEAAJXZ @ 0x180051260 (-Initialize@CLivePreview@@MEAAJXZ.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x18008A430 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?Initialize@CProjectionBorderVisual@@MEAAJXZ @ 0x180092810 (-Initialize@CProjectionBorderVisual@@MEAAJXZ.c)
 *     ?Initialize@CRippleEffect@@IEAAJPEAPEAVCBitmapSource@@@Z @ 0x18009B80C (-Initialize@CRippleEffect@@IEAAJPEAPEAVCBitmapSource@@@Z.c)
 *     ?Initialize@CContactStationaryVisual@@MEAAJXZ @ 0x1800A11D0 (-Initialize@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJXZ @ 0x1800A1CD0 (-Initialize@CTextTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x1800A3BC0 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 *     ?Initialize@CTetherVisual@@MEAAJXZ @ 0x1800A4B50 (-Initialize@CTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800A5340 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?Initialize@CFlickVisual@@MEAAJXZ @ 0x1800A59B0 (-Initialize@CFlickVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenPressHoldVisual@@MEAAJXZ @ 0x1800A60F0 (-Initialize@CPenPressHoldVisual@@MEAAJXZ.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800A6520 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x1800A6E40 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800AD180 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CDesktopThumbnailBase@@MEAAJXZ @ 0x1800B61C0 (-Initialize@CDesktopThumbnailBase@@MEAAJXZ.c)
 *     ?Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ @ 0x1800B62B0 (-Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800B7A40 (-Initialize@CTouchPressHoldVisual@@MEAAJXZ.c)
 *     ?Initialize@UdwmBottomVisual@@MEAAJXZ @ 0x1800BA460 (-Initialize@UdwmBottomVisual@@MEAAJXZ.c)
 *     ?Initialize@UdwmTopVisual@@MEAAJXZ @ 0x1800BA4A0 (-Initialize@UdwmTopVisual@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z @ 0x180024010 (--$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z.c)
 */

__int64 __fastcall CVisual::Initialize(CVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CCompositor::CreateProxy<CVisualProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         (__int64 *)this + 2);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x4Du);
  return v2;
}
