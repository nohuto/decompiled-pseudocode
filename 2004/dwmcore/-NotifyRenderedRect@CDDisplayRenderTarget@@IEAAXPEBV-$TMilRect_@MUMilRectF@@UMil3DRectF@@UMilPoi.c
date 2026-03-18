/*
 * XREFs of ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18018D894
 * Callers:
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18018DD30 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18018E05C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 * Callees:
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x1800803F8 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?DesktopRectToRenderTargetRect@CDDisplayRenderTarget@@IEAAX_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18018D684 (-DesktopRectToRenderTargetRect@CDDisplayRenderTarget@@IEAAX_NAEBV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     ?NotifyRenderedRect@CDDisplaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180238940 (-NotifyRenderedRect@CDDisplaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3.c)
 */

__int64 __fastcall CDDisplayRenderTarget::NotifyRenderedRect(__int64 a1, float *a2, char a3)
{
  int v4; // eax
  __int64 v5; // r8
  float v6; // xmm0_4
  int v7; // edx
  int v8; // eax
  __int64 v9; // r8
  float v10; // xmm0_4
  int v11; // eax
  __int64 v12; // r8
  float v13; // xmm0_4
  int v14; // edx
  __int64 v15; // rcx
  __int128 *v16; // rdx
  __int64 result; // rax
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    v18 = 0LL;
    if ( a3 )
    {
      CDDisplayRenderTarget::DesktopRectToRenderTargetRect(a1, (__int64)a2, (__int64)a2, &v18);
    }
    else
    {
      v4 = PixelAlign(*a2, 0);
      v6 = *(float *)(v5 + 4);
      LODWORD(v18) = v4;
      v8 = PixelAlign(v6, v7);
      v10 = *(float *)(v9 + 8);
      DWORD1(v18) = v8;
      v11 = PixelAlign(v10, 1);
      v13 = *(float *)(v12 + 12);
      DWORD2(v18) = v11;
      HIDWORD(v18) = PixelAlign(v13, v14);
    }
    v15 = *(_QWORD *)(a1 + 168);
    v16 = &v18;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 168);
    v16 = 0LL;
  }
  result = CDDisplaySwapChain::NotifyRenderedRect(v15 + 64, v16);
  *(_BYTE *)(a1 + 18620) = 1;
  return result;
}
