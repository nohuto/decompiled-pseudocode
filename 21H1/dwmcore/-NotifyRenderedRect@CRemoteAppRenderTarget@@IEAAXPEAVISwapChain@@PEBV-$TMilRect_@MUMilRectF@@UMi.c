/*
 * XREFs of ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018A514
 * Callers:
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z @ 0x18018ACDC (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::NotifyRenderedRect(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  int *v5; // rdx
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  int v8[4]; // [rsp+30h] [rbp-28h] BYREF

  if ( a3 )
  {
    v7 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + 184), a3, (float *)&v7);
    PixelAlign(v8, &v7);
    v4 = *a2;
    v5 = v8;
  }
  else
  {
    v4 = *a2;
    v5 = 0LL;
  }
  return (*(__int64 (__fastcall **)(__int64 *, int *))(v4 + 16))(a2, v5);
}
