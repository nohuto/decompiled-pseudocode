/*
 * XREFs of ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180178DA4
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x18017970C (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18002F788 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18005C3D0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008F6EC (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?Intersect@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017BC90 (-Intersect@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1801B1898 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 */

__int64 __fastcall CDrawingContext::CalcClippedNodeWorldSpaceBounds(__int64 a1, __int64 a2, __m128 *a3)
{
  const struct CMILMatrix *TopByReference; // rax
  __int64 v6; // r8
  __int64 v7; // r10
  __int64 Bounds; // rax
  CMILMatrix *v9; // r9
  __int64 result; // rax
  __m128 v11; // [rsp+20h] [rbp-30h] BYREF
  int v12; // [rsp+30h] [rbp-20h]
  int v13; // [rsp+34h] [rbp-1Ch]
  __int128 v14; // [rsp+38h] [rbp-18h] BYREF

  v12 = 0;
  v13 = 0;
  v11 = 0LL;
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 408));
  Bounds = CVisual::GetBounds(v7, *(_QWORD *)(a1 + 5928), v6, TopByReference);
  CMILMatrix::Transform3DBoundsHelper<1>(v9, Bounds, &v11);
  v14 = 0LL;
  CDrawingContext::GetClipBoundsWorld(a1, (__int64)&v14);
  result = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::Intersect(
             &v11,
             &v14);
  *a3 = v11;
  return result;
}
