/*
 * XREFs of ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CGaussianBlurEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180245F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1800857DC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

_OWORD *__fastcall CGaussianBlurEffect::CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6)
{
  float v6; // xmm1_4
  bool IsEmpty; // al
  float *v8; // rdx
  _OWORD *v9; // r8
  _OWORD *v10; // r9
  __int64 v11; // r10
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  _OWORD *result; // rax
  float v19[6]; // [rsp+20h] [rbp-18h] BYREF

  v6 = *(float *)(a1 + 160) * 3.0;
  *(_OWORD *)v19 = *a3;
  IsEmpty = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v19);
  v11 = 0LL;
  if ( !IsEmpty )
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(v19, v6, v6);
  *(_OWORD *)v8 = *v10;
  v12 = *v8;
  v13 = v19[0];
  if ( v19[0] > *v8 )
  {
    *v8 = v19[0];
    v12 = v13;
  }
  if ( v19[1] > v8[1] )
    v8[1] = v19[1];
  v14 = v8[2];
  v15 = v19[2];
  if ( v14 > v19[2] )
  {
    v8[2] = v19[2];
    v14 = v15;
  }
  v16 = v8[3];
  v17 = v19[3];
  if ( v16 > v19[3] )
  {
    v8[3] = v19[3];
    v16 = v17;
    v14 = v8[2];
  }
  if ( v14 <= v12 || v16 <= v8[1] )
  {
    *((_QWORD *)v8 + 1) = v11;
    *(_QWORD *)v8 = v11;
  }
  result = a6;
  *a6 = *v9;
  return result;
}
