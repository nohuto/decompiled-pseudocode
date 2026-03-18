/*
 * XREFs of ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CGaussianBlurEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x18000F570
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180049364 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18007EF08 (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 */

_OWORD *__fastcall CGaussianBlurEffect::CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6)
{
  char IsEmpty; // al
  _OWORD *v7; // r8
  _OWORD *v8; // r9
  __int64 v9; // rdx
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  _OWORD *result; // rax
  float v16[6]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v16 = *a3;
  IsEmpty = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v16);
  v9 = 0LL;
  if ( !IsEmpty )
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(v16);
  v10 = v16[0];
  *(_OWORD *)a5 = *v8;
  if ( v10 > *(float *)a5 )
    *(float *)a5 = v10;
  if ( v16[1] > *(float *)(a5 + 4) )
    *(float *)(a5 + 4) = v16[1];
  v11 = *(float *)(a5 + 8);
  v12 = v16[2];
  if ( v11 > v16[2] )
  {
    *(float *)(a5 + 8) = v16[2];
    v11 = v12;
  }
  v13 = *(float *)(a5 + 12);
  v14 = v16[3];
  if ( v13 > v16[3] )
  {
    *(float *)(a5 + 12) = v16[3];
    v13 = v14;
    v11 = *(float *)(a5 + 8);
  }
  if ( v11 <= *(float *)a5 || v13 <= *(float *)(a5 + 4) )
  {
    *(_QWORD *)(a5 + 8) = v9;
    *(_QWORD *)a5 = v9;
  }
  result = a6;
  *a6 = *v7;
  return result;
}
