/*
 * XREFs of ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180188C08
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18006BCD8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180188CCC (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180188FA8 (-RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?DesktopRectToRenderTargetRect@CLegacyRenderTarget@@IEAAX_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180188878 (-DesktopRectToRenderTargetRect@CLegacyRenderTarget@@IEAAX_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 */

__int64 __fastcall CLegacyRenderTarget::NotifyRenderedRect(__int64 a1, _DWORD *a2, char a3)
{
  __int64 v4; // rcx
  __int128 *v5; // rdx
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  int v8[4]; // [rsp+30h] [rbp-28h] BYREF

  if ( a2 )
  {
    v7 = 0LL;
    if ( a3 )
      CLegacyRenderTarget::DesktopRectToRenderTargetRect(a1, (__int64)a2, (__int64)a2, &v7);
    else
      v7 = *(_OWORD *)PixelAlign(v8, a2);
    v4 = *(_QWORD *)(a1 + 160);
    v5 = &v7;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 160);
    v5 = 0LL;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 16LL))(v4, v5);
  *(_BYTE *)(a1 + 18586) = 1;
  return result;
}
