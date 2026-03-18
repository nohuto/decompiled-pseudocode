/*
 * XREFs of ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180190554
 * Callers:
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801909C0 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x180190C9C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?DesktopRectToRenderTargetRect@CDDisplayRenderTarget@@IEAAX_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180190374 (-DesktopRectToRenderTargetRect@CDDisplayRenderTarget@@IEAAX_NAEBV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     ?NotifyRenderedRect@CDDisplaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18023B370 (-NotifyRenderedRect@CDDisplaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3.c)
 */

__int64 __fastcall CDDisplayRenderTarget::NotifyRenderedRect(__int64 a1, _DWORD *a2, char a3)
{
  __int64 v4; // rcx
  __int128 *v5; // rdx
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    v7 = 0LL;
    if ( a3 )
      CDDisplayRenderTarget::DesktopRectToRenderTargetRect(a1, (__int64)a2, (__int64)a2, &v7);
    else
      v7 = *(_OWORD *)PixelAlign((int *)&v7, a2);
    v4 = *(_QWORD *)(a1 + 168);
    v5 = &v7;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 168);
    v5 = 0LL;
  }
  result = CDDisplaySwapChain::NotifyRenderedRect(v4 + 64, v5);
  *(_BYTE *)(a1 + 18620) = 1;
  return result;
}
