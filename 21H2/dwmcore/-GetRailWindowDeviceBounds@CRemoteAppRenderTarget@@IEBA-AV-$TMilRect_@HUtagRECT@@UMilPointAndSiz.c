/*
 * XREFs of ?GetRailWindowDeviceBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1801C276C
 * Callers:
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@@Z @ 0x1801C2BF8 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800882E4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

_DWORD *__fastcall CRemoteAppRenderTarget::GetRailWindowDeviceBounds(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 i; // rdx
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  float v8[4]; // [rsp+30h] [rbp-28h] BYREF

  for ( i = 0LL; i < 4; ++i )
    v8[i] = (float)*(int *)(a1 + 4 * i + 264);
  v7 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>(a3, (__int64)v8, (float *)&v7, a4);
  PixelAlign(a2, (__int64)&v7);
  return a2;
}
