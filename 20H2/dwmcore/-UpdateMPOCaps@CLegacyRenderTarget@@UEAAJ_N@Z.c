/*
 * XREFs of ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x18003BCF0
 * Callers:
 *     ?UpdateTransform@CLegacyRenderTarget@@IEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@@Z @ 0x18003BC5C (-UpdateTransform@CLegacyRenderTarget@@IEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 *     ?CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z @ 0x1800BB248 (-CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z.c)
 * Callees:
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_N@Z @ 0x18003C664 (-UpdateMPOCaps@COverlayContext@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CLegacyRenderTarget::UpdateMPOCaps(CLegacyRenderTarget *this, bool a2)
{
  unsigned int v2; // ebx
  int updated; // eax
  unsigned int v4; // ecx

  v2 = 0;
  if ( *((_QWORD *)this + 3) )
  {
    updated = COverlayContext::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 336), a2);
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, updated, 0xD7u, 0LL);
  }
  return v2;
}
