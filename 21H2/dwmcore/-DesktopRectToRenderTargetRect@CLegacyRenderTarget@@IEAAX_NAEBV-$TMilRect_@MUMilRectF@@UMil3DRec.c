/*
 * XREFs of ?DesktopRectToRenderTargetRect@CLegacyRenderTarget@@IEAAX_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801847A4
 * Callers:
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180184B78 (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 * Callees:
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x180077274 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800869D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

__int64 __fastcall CLegacyRenderTarget::DesktopRectToRenderTargetRect(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  CMILMatrix *v5; // rcx
  int v6; // edx
  __int64 result; // rax
  int v8; // r10d
  int v9; // r9d
  int v10; // r8d
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF

  v5 = (CMILMatrix *)(a1 + 264 + (*(_BYTE *)(a1 + 11505) != 0 ? 0x44 : 0));
  v11 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>(v5, a3, (float *)&v11);
  PixelAlign(*((float *)&v11 + 1), 0);
  PixelAlign(*((float *)&v11 + 2), 1);
  PixelAlign(*((float *)&v11 + 3), v6);
  result = PixelAlign(*(float *)&v11, 0);
  *a4 = result;
  a4[1] = v8;
  a4[2] = v9;
  a4[3] = v10;
  return result;
}
