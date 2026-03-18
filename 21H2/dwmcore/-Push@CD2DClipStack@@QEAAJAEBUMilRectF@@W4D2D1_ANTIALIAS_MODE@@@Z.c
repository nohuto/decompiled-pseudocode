/*
 * XREFs of ?Push@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180013404
 * Callers:
 *     ?PushClipBoundsToScope@CScopedClipStack@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x18001057C (-PushClipBoundsToScope@CScopedClipStack@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18009759C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 * Callees:
 *     ?Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x18001346C (-Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 *     ?RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009A334 (-RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CD2DClipStack::Push(CD2DClipStack *this, const struct MilRectF *a2, enum D2D1_ANTIALIAS_MODE a3)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( a3 == D2D1_ANTIALIAS_MODE_ALIASED )
    RoundWithHalvesDown(a2, &v5);
  else
    v5 = *(_OWORD *)a2;
  return CBaseClipStack::Push(this, (const struct MilRectF *)&v5);
}
