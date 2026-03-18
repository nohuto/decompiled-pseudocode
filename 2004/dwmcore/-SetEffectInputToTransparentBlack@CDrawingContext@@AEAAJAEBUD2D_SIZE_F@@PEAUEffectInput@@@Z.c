/*
 * XREFs of ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800212D4
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800058CC (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAUEffectInput@@@Z @ 0x18003AA30 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::SetEffectInputToTransparentBlack(
        CD3DDevice **this,
        const struct D2D_SIZE_F *a2,
        struct EffectInput *a3)
{
  *((_BYTE *)a3 + 69) = 1;
  *((_QWORD *)a3 + 6) = 0LL;
  *((_QWORD *)a3 + 7) = 0LL;
  *((_QWORD *)a3 + 9) = 1065353216LL;
  *((_QWORD *)a3 + 11) = 1065353216LL;
  *((_QWORD *)a3 + 10) = 0LL;
  *((_QWORD *)a3 + 12) = 0LL;
  *((_DWORD *)a3 + 26) = 1065353216;
  *((float *)a3 + 18) = 1.0 / a2->width;
  *((float *)a3 + 22) = 1.0 / a2->height;
  *(_QWORD *)((char *)a3 + 108) = 0LL;
  *((_DWORD *)a3 + 29) = 1065353216;
  *((_DWORD *)a3 + 30) = 1065353216;
  return CDrawListBitmap::SetTransparent(a3, this);
}
