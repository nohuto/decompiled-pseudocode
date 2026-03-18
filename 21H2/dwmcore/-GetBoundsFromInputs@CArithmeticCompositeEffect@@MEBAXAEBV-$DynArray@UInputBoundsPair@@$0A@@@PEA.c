/*
 * XREFs of ?GetBoundsFromInputs@CArithmeticCompositeEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802457D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180204B60 (-GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-$TMilRect_@.c)
 */

char __fastcall CArithmeticCompositeEffect::GetBoundsFromInputs(_DWORD *a1, _DWORD *a2, float *a3)
{
  float v4; // xmm3_4
  char result; // al
  float *v6; // r11
  float *v7; // rcx
  float v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float *v18; // rdx

  if ( a2[6] != 2 )
    return CFilterEffect::GetBoundsFromInputs((__int64)a1, (__int64)a2, a3);
  LODWORD(v4) = a1[40] & _xmm;
  if ( v4 <= 0.0000099999997
    || COERCE_FLOAT(a1[41] & _xmm) >= 0.0000099999997
    || COERCE_FLOAT(a1[42] & _xmm) >= 0.0000099999997
    || COERCE_FLOAT(a1[43] & _xmm) >= 0.0000099999997 )
  {
    if ( v4 < 0.0000099999997 )
    {
      LODWORD(v17) = a1[41] & _xmm;
      if ( v17 > 0.0000099999997
        && COERCE_FLOAT(a1[42] & _xmm) < 0.0000099999997
        && COERCE_FLOAT(a1[43] & _xmm) < 0.0000099999997 )
      {
        v18 = (float *)(*(_QWORD *)a2 + 4LL);
        return TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v18);
      }
      if ( v17 < 0.0000099999997 )
      {
        if ( COERCE_FLOAT(a1[42] & _xmm) > 0.0000099999997 && COERCE_FLOAT(a1[43] & _xmm) < 0.0000099999997 )
        {
          v18 = (float *)(*(_QWORD *)a2 + 24LL);
          return TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v18);
        }
        if ( v17 < 0.0000099999997
          && COERCE_FLOAT(a1[42] & _xmm) < 0.0000099999997
          && COERCE_FLOAT(a1[43] & _xmm) < 0.0000099999997 )
        {
          return result;
        }
      }
    }
    return CFilterEffect::GetBoundsFromInputs((__int64)a1, (__int64)a2, a3);
  }
  result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
             a3,
             (float *)(*(_QWORD *)a2 + 4LL));
  v7 = *(float **)a2;
  v8 = *v6;
  v9 = *(float *)(*(_QWORD *)a2 + 24LL);
  if ( v9 > *v6 )
  {
    *v6 = v9;
    v8 = v9;
  }
  v10 = v7[7];
  v11 = v6[1];
  if ( v10 > v11 )
  {
    v6[1] = v10;
    v11 = v10;
  }
  v12 = v6[2];
  v13 = v7[8];
  v14 = v12;
  if ( v12 > v13 )
  {
    v6[2] = v13;
    v12 = v13;
    v14 = v13;
  }
  v15 = v7[9];
  v16 = v6[3];
  if ( v16 > v15 )
  {
    v6[3] = v15;
    v12 = v14;
    v16 = v15;
  }
  if ( v12 <= v8 || v16 <= v11 )
  {
    result = 0;
    *((_QWORD *)v6 + 1) = 0LL;
    *(_QWORD *)v6 = 0LL;
  }
  return result;
}
