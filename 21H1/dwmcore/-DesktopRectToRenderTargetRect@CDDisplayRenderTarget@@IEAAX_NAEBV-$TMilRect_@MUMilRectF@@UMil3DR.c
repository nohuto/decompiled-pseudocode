/*
 * XREFs of ?DesktopRectToRenderTargetRect@CDDisplayRenderTarget@@IEAAX_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180190374
 * Callers:
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180190554 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

_DWORD *__fastcall CDDisplayRenderTarget::DesktopRectToRenderTargetRect(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  CMILMatrix *v5; // rcx
  _DWORD *result; // rax
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  int v8[4]; // [rsp+30h] [rbp-28h] BYREF

  v5 = (CMILMatrix *)(a1 + 18312 + (*(_BYTE *)(a1 + 11209) != 0 ? 0x44 : 0));
  v7 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>(v5, a3, (float *)&v7);
  result = PixelAlign(v8, &v7);
  *a4 = *(_OWORD *)result;
  return result;
}
