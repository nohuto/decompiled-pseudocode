/*
 * XREFs of ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801C8868
 * Callers:
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801C90AC (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1801C93C0 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$spa.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800882E4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?NotifyRenderedRect@CDDisplaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18027BCF0 (-NotifyRenderedRect@CDDisplaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3.c)
 */

__int64 __fastcall CDDisplayRenderTarget::NotifyRenderedRect(__int64 a1, __int128 *a2, char a3, __int64 a4)
{
  bool v5; // cf
  _DWORD *v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v10[4]; // [rsp+30h] [rbp-28h] BYREF

  if ( a2 )
  {
    if ( !a3 )
    {
      v5 = *(_BYTE *)(a1 + 11209) != 0;
      v9 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>(a1 + (v5 ? 18336LL : 18200LL), (__int64)a2, (float *)&v9, a4);
      a2 = &v9;
    }
    v6 = PixelAlign(v10, (__int64)a2);
    v7 = *(_QWORD *)(a1 + 176);
    a2 = &v9;
    v9 = *(_OWORD *)v6;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 176);
  }
  result = CDDisplaySwapChain::NotifyRenderedRect(v7, a2);
  *(_BYTE *)(a1 + 18576) = 1;
  return result;
}
