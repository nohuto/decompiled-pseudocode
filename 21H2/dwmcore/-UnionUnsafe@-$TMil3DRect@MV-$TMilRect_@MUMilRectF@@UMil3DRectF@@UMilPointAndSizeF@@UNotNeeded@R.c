/*
 * XREFs of ?UnionUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800CA048
 * Callers:
 *     ?AddRectangleToBounds@CWindowBackgroundTreatment@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A530 (-AddRectangleToBounds@CWindowBackgroundTreatment@@QEAAJAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
        float *a1,
        float *a2)
{
  float v2; // xmm0_4
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm5_4
  float v8; // xmm1_4
  float v9; // xmm4_4
  int v10; // eax
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  unsigned int v14; // edx
  float v15; // xmm0_4
  int v16; // ecx
  unsigned int v17; // eax
  char result; // al
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm1_4

  v2 = a1[5];
  v5 = a2[5];
  v6 = a2[4];
  v7 = a2[2];
  v8 = *a2;
  v9 = a2[3];
  v10 = (v2 <= a1[4]) + 1;
  v11 = *a1;
  v12 = a1[1];
  v13 = a1[2];
  if ( v13 > *a1 )
    v10 = v2 <= a1[4];
  v14 = v10 + 1;
  v15 = a2[1];
  if ( a1[3] > v12 )
    v14 = v10;
  v16 = (v5 <= v6) + 1;
  if ( v7 > v8 )
    v16 = v5 <= v6;
  v17 = v16 + 1;
  if ( v9 > v15 )
    v17 = v16;
  if ( v14 <= 1 )
  {
    if ( v17 <= 1 )
    {
      if ( v11 > v8 )
      {
        *a1 = v8;
        v15 = a2[1];
      }
      if ( v12 > v15 )
        a1[1] = v15;
      v19 = a2[2];
      if ( v19 > v13 )
        a1[2] = v19;
      v20 = a2[3];
      if ( v20 > a1[3] )
        a1[3] = v20;
      v21 = a2[5];
      if ( v21 > a1[5] )
        a1[5] = v21;
      v22 = a2[4];
      if ( a1[4] > v22 )
        a1[4] = v22;
    }
    return 1;
  }
  if ( v17 <= 1 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
    return 1;
  }
  *((_QWORD *)a1 + 2) = 0LL;
  result = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
