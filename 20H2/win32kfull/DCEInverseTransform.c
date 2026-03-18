/*
 * XREFs of DCEInverseTransform @ 0x1C01E45A0
 * Callers:
 *     DCEHitTestWindow @ 0x1C01E44C4 (DCEHitTestWindow.c)
 * Callees:
 *     FixedPointSubPixel @ 0x1C01E4ECC (FixedPointSubPixel.c)
 */

__int64 __fastcall DCEInverseTransform(int *a1, float *a2, int *a3, int *a4)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  int *v6; // r10
  float v7; // xmm3_4
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm6_4
  float v13; // xmm10_4
  float v14; // xmm5_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  float v20; // xmm0_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm4_4
  float v24; // xmm3_4

  v5 = *a2;
  v6 = a1;
  v7 = a2[8] - *a2;
  v8 = a2[16] - *a2;
  v9 = a2[1];
  v10 = a2[9] - v9;
  v11 = a2[17] - v9;
  if ( a3 )
    FixedPointSubPixel(*a3);
  else
    v4 = 0.0;
  v12 = (float)((float)*a4 + v4) - v5;
  if ( a3 )
    FixedPointSubPixel(a3[1]);
  else
    v4 = 0.0;
  LODWORD(v13) = LODWORD(v7) & _xmm;
  v14 = (float)((float)a4[1] + v4) - v9;
  if ( COERCE_FLOAT(LODWORD(v7) & _xmm) <= 0.00000011920929 )
  {
    v15 = v7;
    v16 = v10;
    v7 = v8;
    v10 = v11;
    v8 = v15;
    v11 = v16;
  }
  if ( COERCE_FLOAT(LODWORD(v7) & _xmm) <= 0.00000011920929 )
    return 0LL;
  v17 = (float)(v11 * v7) - (float)(v8 * v10);
  if ( COERCE_FLOAT(LODWORD(v17) & _xmm) <= 0.00000011920929 )
    return 0LL;
  v18 = (float)((float)(v14 * v7) - (float)(v12 * v10)) / v17;
  v19 = (float)(v12 - (float)(v18 * v8)) / v7;
  if ( v13 <= 0.00000011920929 )
  {
    v20 = v19;
    v19 = v18;
    v18 = v20;
  }
  v21 = (float)((float)((float)((float)((float)(a2[14] - a2[6]) * v19) + a2[6]) + (float)((float)(a2[22] - a2[6]) * v18))
              * (float)(v6[2] - *v6))
      + (float)*v6;
  v22 = (float)((float)((float)((float)((float)(a2[15] - a2[7]) * v19) + a2[7]) + (float)((float)(a2[23] - a2[7]) * v18))
              * (float)(v6[3] - v6[1]))
      + (float)v6[1];
  if ( v21 < 0.0 )
    v23 = v21 - 0.5;
  else
    v23 = v21 + 0.5;
  *a4 = (int)v23;
  if ( v22 < 0.0 )
    v24 = v22 - 0.5;
  else
    v24 = v22 + 0.5;
  a4[1] = (int)v24;
  return 1LL;
}
