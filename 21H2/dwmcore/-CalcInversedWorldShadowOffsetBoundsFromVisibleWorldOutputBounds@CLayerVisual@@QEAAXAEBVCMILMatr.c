/*
 * XREFs of ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x180223308
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801DA300 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180222DB0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1800857DC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE2E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180222AD0 (-CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AE.c)
 *     ?CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0PEAV2@1@Z @ 0x180222CB4 (-CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBV-$TMilRect_@MU.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802236D0 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 */

void __fastcall CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(
        CVisual *a1,
        __int64 a2,
        __m128 *a3,
        __m128 *a4,
        __m128 *a5)
{
  float v8; // xmm6_4
  int MaskBounds; // eax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r9
  __m128 v14; // xmm7
  __int32 v15; // xmm8_4
  __int32 v16; // xmm9_4
  float v17; // xmm10_4
  float v18; // xmm8_4
  float v19; // xmm9_4
  float v20; // xmm10_4
  __m128 v21; // [rsp+38h] [rbp-A1h] BYREF
  __m128 v22; // [rsp+48h] [rbp-91h] BYREF
  __int128 v23; // [rsp+58h] [rbp-81h] BYREF
  __int128 v24; // [rsp+68h] [rbp-71h] BYREF
  __int128 v25; // [rsp+78h] [rbp-61h] BYREF
  __int128 v26; // [rsp+88h] [rbp-51h] BYREF

  v8 = *(float *)(*((_QWORD *)a1 + 91) + 88LL);
  v23 = 0LL;
  v21 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  MaskBounds = CLayerVisual::GetMaskBounds(a1);
  if ( MaskBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, MaskBounds, 0x242u);
    *a4 = *a3;
    *a5 = *a3;
  }
  else
  {
    v22 = (__m128)v23;
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v22.m128_f32) )
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(v22.m128_f32, v8, v8);
    CMILMatrix::Transform2DBoundsHelper<1>(a2, (__int64)&v23, (float *)&v26, v12);
    CMILMatrix::Transform2DBoundsHelper<1>(a2, (__int64)&v22, (float *)&v24, v13);
    v22 = *a3;
    CLayerVisual::CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds(
      (__int64)a1,
      a2,
      (__int64)&v22,
      (float *)&v24,
      v21.m128_f32,
      (__int64)&v25);
    v22 = v21;
    CLayerVisual::CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds(
      (__int64)a1,
      (__int128 *)&v22,
      (__int64)&v26,
      (__int64)&v21,
      (float *)&v25);
    v14 = v21;
    v15 = _mm_shuffle_ps(v21, v21, 85).m128_u32[0];
    v16 = _mm_shuffle_ps(v21, v21, 170).m128_u32[0];
    LODWORD(v17) = _mm_shuffle_ps(v21, v21, 255).m128_u32[0];
    *(unsigned __int64 *)((char *)v21.m128_u64 + 4) = __PAIR64__(v16, v15);
    v21.m128_f32[3] = v17;
    *a4 = v14;
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v21.m128_f32) )
    {
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(v21.m128_f32, v8, v8);
      v17 = v21.m128_f32[3];
      v16 = v21.m128_i32[2];
      v15 = v21.m128_i32[1];
      v14.m128_i32[0] = v21.m128_i32[0];
    }
    v21.m128_u64[0] = *(_QWORD *)(*((_QWORD *)a1 + 91) + 96LL);
    v18 = *(float *)&v15 + v21.m128_f32[1];
    v19 = *(float *)&v16 + v21.m128_f32[0];
    v20 = v17 + v21.m128_f32[1];
    a5->m128_f32[0] = v14.m128_f32[0] + v21.m128_f32[0];
    a5->m128_f32[1] = v18;
    a5->m128_f32[2] = v19;
    a5->m128_f32[3] = v20;
  }
}
