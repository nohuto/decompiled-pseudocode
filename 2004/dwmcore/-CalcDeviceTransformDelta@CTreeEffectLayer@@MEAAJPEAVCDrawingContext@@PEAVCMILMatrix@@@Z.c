/*
 * XREFs of ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180006E40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180006DD8 (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x180007970 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x180007CC4 (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003A358 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180049364 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18007FC60 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800828C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008D6F0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1800BBFC8 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800CB03C (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800E5E34 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180176234 (-CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 */

__int64 __fastcall CTreeEffectLayer::CalcDeviceTransformDelta(
        CTreeEffectLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  char *v4; // r12
  unsigned int v7; // r14d
  CVisual *v8; // rcx
  int ShadowBounds; // eax
  unsigned int v10; // ecx
  float v11; // xmm0_4
  int v12; // eax
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm2_4
  __int128 v16; // xmm1
  int v17; // eax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  bool FlatteningToLocalSpace; // al
  char *v22; // r8
  int v23; // eax
  __m128i v24; // xmm2
  int v25; // eax
  int v26; // eax
  unsigned int v27; // ecx
  float v28[4]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v29; // [rsp+40h] [rbp-49h] BYREF
  __int128 v30; // [rsp+50h] [rbp-39h]
  __int128 v31; // [rsp+60h] [rbp-29h]
  __int128 v32; // [rsp+70h] [rbp-19h]
  int v33; // [rsp+80h] [rbp-9h]
  __int128 v34; // [rsp+90h] [rbp+7h] BYREF

  v4 = (char *)this + 128;
  v7 = 0;
  CDrawingContext::GetWorldTransform(a2, (CTreeEffectLayer *)((char *)this + 128));
  v8 = (CVisual *)*((_QWORD *)this + 32);
  if ( v8 )
  {
    v34 = 0LL;
    ShadowBounds = CLayerVisual::GetShadowBounds(v8, &v34);
    v7 = ShadowBounds;
    if ( ShadowBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, ShadowBounds, 0x24Fu, 0LL);
      return v7;
    }
    if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v34) )
    {
      v34 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      *(_OWORD *)((char *)this + 212) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    }
    else
    {
      FlatteningToLocalSpace = CLayerVisual::GetFlatteningToLocalSpace(*((CLayerVisual **)this + 32));
      v22 = (char *)this + 212;
      if ( FlatteningToLocalSpace )
        CDrawingContext::CalcLocalSpaceClippedBounds(a2, &v34, v22);
      else
        CDrawingContext::CalcWorldSpaceClippedBounds(a2, &v34, v22);
    }
  }
  if ( CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(*((CLayerVisual **)this + 32)) )
  {
    v23 = *((_DWORD *)this + 5);
    v30 = _xmm;
    v32 = _xmm;
    v29 = _xmm;
    v24 = _mm_cvtsi32_si128(-v23);
    v25 = -*((_DWORD *)this + 4);
    v31 = _xmm;
    LOWORD(v33) = 32085;
    CMILMatrix::Translate((CMILMatrix *)&v29, (float)v25, _mm_cvtepi32_ps(v24).m128_f32[0]);
    CMILMatrix::Scale((CMILMatrix *)&v29, *((float *)this + 70), *((float *)this + 70), 1.0);
    v26 = CDrawingContext::PushTransformInternal(
            a2,
            *((const struct CVisual **)this + 32),
            (const struct CMILMatrix *)&v29,
            0,
            1);
    v7 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x272u, 0LL);
    }
    else
    {
      CVisual::GetEffectiveSize(*((CVisual **)this + 32), v28, &v28[1]);
      *(_QWORD *)&v34 = 0LL;
      *((_QWORD *)&v34 + 1) = *(_QWORD *)v28;
      CMILMatrix::Transform2DBoundsHelper<1>(&v29, &v34, (char *)this + 196);
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
      *((_WORD *)a3 + 32) = 32085;
    }
  }
  else
  {
    CVisual::GetEffectiveSize(*((CVisual **)this + 32), v28, &v28[1]);
    *(_QWORD *)&v34 = 0LL;
    *((_QWORD *)&v34 + 1) = *(_QWORD *)v28;
    CMILMatrix::Transform2DBoundsHelper<1>(v4, &v34, (char *)this + 196);
    v11 = *((float *)this + 51) - *((float *)this + 49);
    v12 = -*((_DWORD *)this + 5);
    v33 = 32085;
    *((float *)this + 51) = (float)(v11 * *((float *)this + 70)) + *((float *)this + 49);
    v13 = *((float *)this + 50);
    v14 = *((float *)this + 52) - v13;
    v29 = _xmm;
    v31 = _xmm;
    v15 = (float)(v14 * *((float *)this + 70)) + v13;
    v30 = _xmm;
    v32 = _xmm;
    *((float *)this + 52) = v15;
    CMILMatrix::Translate((CMILMatrix *)&v29, (float)-*((_DWORD *)this + 4), (float)v12);
    CMILMatrix::Scale((CMILMatrix *)&v29, *((float *)this + 70), *((float *)this + 70), 1.0);
    v16 = v30;
    v17 = v33;
    *(_OWORD *)a3 = v29;
    v18 = v31;
    *((_OWORD *)a3 + 1) = v16;
    v19 = v32;
    *((_OWORD *)a3 + 2) = v18;
    *((_OWORD *)a3 + 3) = v19;
    *((_DWORD *)a3 + 16) = v17;
  }
  return v7;
}
