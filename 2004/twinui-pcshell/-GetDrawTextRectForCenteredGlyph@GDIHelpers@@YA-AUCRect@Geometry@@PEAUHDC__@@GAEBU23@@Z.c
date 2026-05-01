/*
 * XREFs of ?GetDrawTextRectForCenteredGlyph@GDIHelpers@@YA?AUCRect@Geometry@@PEAUHDC__@@GAEBU23@@Z @ 0x1804211B0
 * Callers:
 *     ?RenderTransparentCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKAEBUCRect@Geometry@@@Z @ 0x1800D5724 (-RenderTransparentCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKAEBUCRect@Geometry@@@Z.c)
 *     ?RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z @ 0x1804214DC (-RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 */

_DWORD *__fastcall GDIHelpers::GetDrawTextRectForCenteredGlyph(_DWORD *a1, HDC a2, unsigned __int16 a3, __int64 a4)
{
  UINT v7; // ebp
  float v8; // xmm1_4
  float v9; // xmm3_4
  _GLYPHMETRICS gm; // [rsp+40h] [rbp-148h] BYREF
  _OUTLINETEXTMETRICW potm; // [rsp+60h] [rbp-128h] BYREF

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  v7 = a3;
  if ( GetOutlineTextMetricsW(a2, 0xE8u, &potm)
    && GetGlyphOutlineW(a2, v7, 0, &gm, 0, 0LL, &`GDIHelpers::GetDrawTextRectForCenteredGlyph'::`2'::identityMatrix) )
  {
    v8 = (float)(int)gm.gmBlackBoxY * 0.5;
    v9 = (float)((float)(*(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4)) * 0.5) + (float)*(int *)(a4 + 4);
    *(_OWORD *)a1 = *(_OWORD *)a4;
    a1[1] = (int)(float)((float)((float)(v9 - v8) + (float)gm.gmptGlyphOrigin.y) - (float)potm.otmTextMetrics.tmAscent);
  }
  return a1;
}
