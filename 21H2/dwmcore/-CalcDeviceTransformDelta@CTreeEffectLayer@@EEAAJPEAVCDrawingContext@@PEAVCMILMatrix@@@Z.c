/*
 * XREFs of ?CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1801D8EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE2E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D17D8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800D842C (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800DD36C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1800E8734 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x1800F32A8 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801AF824 (-CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x1802236A0 (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802237CC (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 */

__int64 __fastcall CTreeEffectLayer::CalcDeviceTransformDelta(
        CTreeEffectLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  char *v3; // r12
  unsigned int v7; // r14d
  __int64 v8; // rcx
  int ShadowBounds; // eax
  __int64 v10; // rcx
  bool FlatteningToLocalSpace; // al
  char *v12; // r8
  unsigned int v13; // eax
  __m128i v14; // xmm2
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r9
  char v19; // al
  __int64 v20; // r9
  float v21; // xmm0_4
  float v22; // xmm3_4
  int v23; // eax
  float v24; // xmm1_4
  float v25; // xmm2_4
  __int128 v26; // xmm1
  int v27; // eax
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  float v31[4]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v32; // [rsp+40h] [rbp-49h] BYREF
  __int128 v33; // [rsp+50h] [rbp-39h]
  __int128 v34; // [rsp+60h] [rbp-29h]
  __int128 v35; // [rsp+70h] [rbp-19h]
  int v36; // [rsp+80h] [rbp-9h]
  __int128 v37; // [rsp+90h] [rbp+7h] BYREF

  v3 = (char *)this + 128;
  v7 = 0;
  CMatrixStack::Top((__int64)a2 + 368, (__int64)this + 128);
  v8 = *((_QWORD *)this + 32);
  if ( v8 )
  {
    v37 = 0LL;
    ShadowBounds = CLayerVisual::GetShadowBounds(v8, &v37);
    v7 = ShadowBounds;
    if ( ShadowBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, ShadowBounds, 0x24Eu);
      return v7;
    }
    if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v37) )
    {
      v37 = *(_OWORD *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      *(_OWORD *)((char *)this + 212) = *(_OWORD *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    }
    else
    {
      FlatteningToLocalSpace = CLayerVisual::GetFlatteningToLocalSpace(*((CLayerVisual **)this + 32));
      v12 = (char *)this + 212;
      if ( FlatteningToLocalSpace )
        CDrawingContext::CalcLocalSpaceClippedBounds((__int64)a2, &v37, (__int64)v12);
      else
        CDrawingContext::CalcWorldSpaceClippedBounds((__int64)a2, (__int64)&v37, (__int64)v12);
    }
  }
  if ( CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(*((CLayerVisual **)this + 32)) )
  {
    BYTE1(v36) = BYTE1(v36) & 0xC0 | 0x17;
    v13 = -*((_DWORD *)this + 5);
    v33 = _xmm;
    v35 = _xmm;
    v32 = _xmm;
    v14 = _mm_cvtsi32_si128(v13);
    v15 = -*((_DWORD *)this + 4);
    v34 = _xmm;
    LOBYTE(v36) = 85;
    CMILMatrix::Translate((CMILMatrix *)&v32, (float)v15, _mm_cvtepi32_ps(v14).m128_f32[0]);
    CMILMatrix::Scale((CMILMatrix *)&v32, *((float *)this + 70), *((float *)this + 70), 1.0);
    v16 = CDrawingContext::PushTransformInternal(
            a2,
            *((const struct CVisual **)this + 32),
            (const struct CMILMatrix *)&v32,
            0,
            1);
    v7 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x275u);
    }
    else
    {
      CVisual::GetEffectiveSize(*((CVisual **)this + 32), v31, &v31[1]);
      *(_QWORD *)&v37 = 0LL;
      *((_QWORD *)&v37 + 1) = *(_QWORD *)v31;
      CMILMatrix::Transform2DBoundsHelper<1>((__int64)&v32, (__int64)&v37, (float *)this + 49, v18);
      *(_QWORD *)a3 = 1065353216LL;
      *((_QWORD *)a3 + 1) = 0LL;
      *((_DWORD *)a3 + 4) = 0;
      *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
      *(_QWORD *)((char *)a3 + 28) = 0LL;
      *((_DWORD *)a3 + 9) = 0;
      *((_QWORD *)a3 + 5) = 1065353216LL;
      *((_QWORD *)a3 + 6) = 0LL;
      *((_DWORD *)a3 + 14) = 0;
      *((_DWORD *)a3 + 15) = 1065353216;
      v19 = *((_BYTE *)a3 + 65) & 0xD7;
      *((_BYTE *)a3 + 64) = 85;
      *((_BYTE *)a3 + 65) = v19 | 0x17;
    }
  }
  else
  {
    CVisual::GetEffectiveSize(*((CVisual **)this + 32), v31, &v31[1]);
    *(_QWORD *)&v37 = 0LL;
    *((_QWORD *)&v37 + 1) = *(_QWORD *)v31;
    CMILMatrix::Transform2DBoundsHelper<1>((__int64)v3, (__int64)&v37, (float *)this + 49, v20);
    v21 = *((float *)this + 51) - *((float *)this + 49);
    v22 = *((float *)this + 70);
    v36 = 5973;
    v23 = -*((_DWORD *)this + 5);
    *((float *)this + 51) = (float)(v21 * v22) + *((float *)this + 49);
    v24 = *((float *)this + 50);
    v25 = *((float *)this + 52) - v24;
    v32 = _xmm;
    v34 = _xmm;
    v33 = _xmm;
    v35 = _xmm;
    *((float *)this + 52) = (float)(v25 * v22) + v24;
    CMILMatrix::Translate((CMILMatrix *)&v32, (float)-*((_DWORD *)this + 4), (float)v23);
    CMILMatrix::Scale((CMILMatrix *)&v32, *((float *)this + 70), *((float *)this + 70), 1.0);
    v26 = v33;
    v27 = v36;
    *(_OWORD *)a3 = v32;
    v28 = v34;
    *((_OWORD *)a3 + 1) = v26;
    v29 = v35;
    *((_OWORD *)a3 + 2) = v28;
    *((_OWORD *)a3 + 3) = v29;
    *((_DWORD *)a3 + 16) = v27;
  }
  return v7;
}
