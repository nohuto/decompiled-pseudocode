/*
 * XREFs of ?GetFrameContainsMonitorSpecificContent@CDrawingContext@@QEBA_NXZ @ 0x1800CEF5C
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x180033C94 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x180258D00 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::GetFrameContainsMonitorSpecificContent(CDrawingContext *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_BYTE *)this + 5949) )
    return *((_DWORD *)g_pComposition + 70) != 0;
  return v1;
}
