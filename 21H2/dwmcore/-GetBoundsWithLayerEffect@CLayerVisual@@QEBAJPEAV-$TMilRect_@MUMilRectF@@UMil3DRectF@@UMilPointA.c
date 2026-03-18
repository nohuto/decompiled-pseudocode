/*
 * XREFs of ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802235D0
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180222DB0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802236D0 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B5DF4 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1800E8734 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x1800F3278 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18021351C (-GetBounds@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNe.c)
 */

__int64 __fastcall CLayerVisual::GetBoundsWithLayerEffect(__int64 a1, float *a2)
{
  _OWORD *v2; // rbp
  int Bounds; // ebx
  CLayerVisual *v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rcx
  float v10; // [rsp+50h] [rbp+8h] BYREF
  float v11; // [rsp+54h] [rbp+Ch]
  float v12; // [rsp+58h] [rbp+10h] BYREF

  v2 = (_OWORD *)(a1 + 172);
  Bounds = 0;
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 172);
  if ( *(_QWORD *)(a1 + 736)
    && (CVisual::GetEffectiveSize((CVisual *)a1, &v10, &v12) || CLayerVisual::GetAutomaticBoundsExpansion(v6)) )
  {
    v7 = *(__int64 **)(a1 + 736);
    v11 = v12;
    v8 = *v7;
    if ( *v7 )
      Bounds = CEffectBrush::GetBounds(v8, v2, (__int64)&v10, a2);
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, Bounds, 0x1C7u);
    }
    else if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a2) )
    {
      *(_OWORD *)a2 = *v2;
    }
  }
  return (unsigned int)Bounds;
}
