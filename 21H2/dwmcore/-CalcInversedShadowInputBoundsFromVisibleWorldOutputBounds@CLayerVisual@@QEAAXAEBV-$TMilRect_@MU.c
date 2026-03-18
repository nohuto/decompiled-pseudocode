/*
 * XREFs of ?CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0PEAV2@1@Z @ 0x180222CB4
 * Callers:
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x180223308 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 * Callees:
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1800857DC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

void __fastcall CLayerVisual::CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        float *a5)
{
  float v5; // xmm6_4
  bool IsEmpty; // al
  _OWORD *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float *v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(float *)(*(_QWORD *)(a1 + 728) + 88LL);
  v17 = *a2;
  IsEmpty = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v17);
  v9 = 0LL;
  if ( !IsEmpty )
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate((float *)&v17, v5, v5);
  *(_OWORD *)v8 = *v7;
  v10 = *(float *)v8;
  v11 = *(float *)&v17;
  if ( *(float *)&v17 > *(float *)v8 )
  {
    *(_DWORD *)v8 = v17;
    v10 = v11;
  }
  if ( *((float *)&v17 + 1) > *(float *)(v8 + 4) )
    *(_DWORD *)(v8 + 4) = DWORD1(v17);
  v12 = *(float *)(v8 + 8);
  v13 = *((float *)&v17 + 2);
  if ( v12 > *((float *)&v17 + 2) )
  {
    *(_DWORD *)(v8 + 8) = DWORD2(v17);
    v12 = v13;
  }
  v14 = *(float *)(v8 + 12);
  v15 = *((float *)&v17 + 3);
  if ( v14 > *((float *)&v17 + 3) )
  {
    *(_DWORD *)(v8 + 12) = HIDWORD(v17);
    v14 = v15;
    v12 = *(float *)(v8 + 8);
  }
  if ( v12 <= v10 || v14 <= *(float *)(v8 + 4) )
  {
    *(_QWORD *)(v8 + 8) = v9;
    *(_QWORD *)v8 = v9;
  }
  *(_OWORD *)a5 = *(_OWORD *)v8;
  if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a5) )
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(v16, v5, v5);
}
