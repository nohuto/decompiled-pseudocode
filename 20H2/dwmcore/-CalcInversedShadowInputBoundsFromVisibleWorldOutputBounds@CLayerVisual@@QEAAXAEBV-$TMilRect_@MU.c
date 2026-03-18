/*
 * XREFs of ?CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0PEAV2@1@Z @ 0x1801D162C
 * Callers:
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801D1718 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180065090 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180075CEC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
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
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float *v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(float *)(*(_QWORD *)(a1 + 616) + 96LL);
  v16 = *a2;
  IsEmpty = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v16);
  v9 = 0LL;
  if ( !IsEmpty )
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate((float *)&v16, v5, v5);
  v10 = *(float *)&v16;
  *(_OWORD *)v8 = *v7;
  if ( v10 > *(float *)v8 )
    *(float *)v8 = v10;
  if ( *((float *)&v16 + 1) > *(float *)(v8 + 4) )
    *(_DWORD *)(v8 + 4) = DWORD1(v16);
  v11 = *(float *)(v8 + 8);
  v12 = *((float *)&v16 + 2);
  if ( v11 > *((float *)&v16 + 2) )
  {
    *(_DWORD *)(v8 + 8) = DWORD2(v16);
    v11 = v12;
  }
  v13 = *(float *)(v8 + 12);
  v14 = *((float *)&v16 + 3);
  if ( v13 > *((float *)&v16 + 3) )
  {
    *(_DWORD *)(v8 + 12) = HIDWORD(v16);
    v13 = v14;
    v11 = *(float *)(v8 + 8);
  }
  if ( v11 <= *(float *)v8 || v13 <= *(float *)(v8 + 4) )
  {
    *(_QWORD *)(v8 + 8) = v9;
    *(_QWORD *)v8 = v9;
  }
  *(_OWORD *)a5 = *(_OWORD *)v8;
  if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a5) )
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(v15, v5, v5);
}
