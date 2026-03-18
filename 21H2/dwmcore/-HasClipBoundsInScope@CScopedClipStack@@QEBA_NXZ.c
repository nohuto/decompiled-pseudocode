/*
 * XREFs of ?HasClipBoundsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18008A298
 * Callers:
 *     ?PushClipBoundsToScope@CScopedClipStack@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x18001057C (-PushClipBoundsToScope@CScopedClipStack@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18008A11C (-GetTopGpuClipInScope@CScopedClipStack@@QEBAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18009A920 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CScopedClipStack::HasClipBoundsInScope(CScopedClipStack *this)
{
  int v1; // eax
  char v2; // r9

  v1 = *((_DWORD *)this + 6);
  v2 = 0;
  if ( v1 )
    return *(_DWORD *)(88LL * (unsigned int)(v1 - 1) + *(_QWORD *)this + 8) != 0;
  return v2;
}
