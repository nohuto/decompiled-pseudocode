/*
 * XREFs of ?CalcOcclusion@CVisualTree@@UEBAJAEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x1800DCA60
 * Callers:
 *     ?CalcOcclusion@CDesktopTree@@UEBAJAEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x1800DCA00 (-CalcOcclusion@CDesktopTree@@UEBAJAEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x18008BD78 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 */

__int64 __fastcall CVisualTree::CalcOcclusion(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  struct CComposition *CurrentFrameId; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  COcclusionContext *v7; // r9
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  CurrentFrameId = GetCurrentFrameId();
  if ( *(struct CComposition **)(v6 + 112) == CurrentFrameId )
  {
    v12 = 0uLL;
    v8 = COcclusionContext::Compute(v7, v6, v5, a4, &v12);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x126u);
  }
  else
  {
    v10 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, -2003292412, 0x12Au);
  }
  return v10;
}
