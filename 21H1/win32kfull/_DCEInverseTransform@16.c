/*
 * XREFs of _DCEInverseTransform@16 @ 0x150822
 * Callers:
 *     _DCEHitTestWindow@16 @ 0x150745 (_DCEHitTestWindow@16.c)
 * Callees:
 *     __ftol2_sse @ 0xF9210 (__ftol2_sse.c)
 *     _FixedPointSubPixel@8 @ 0x151063 (_FixedPointSubPixel@8.c)
 */

int __fastcall DCEInverseTransform(int *a1, float *a2, int *a3, int *a4)
{
  double v6; // st7
  int v8; // ecx
  long double v9; // st6
  long double v10; // st5
  double v11; // st6
  double v12; // rt0
  double v13; // st4
  double v14; // st4
  int v15; // eax
  double v16; // st6
  double v17; // st6
  double v18; // st6
  double v19; // st6
  double v20; // st4
  double v21; // st7
  double v23; // [esp+Ch] [ebp-24h]
  float v25; // [esp+14h] [ebp-1Ch]
  double v26; // [esp+18h] [ebp-18h]
  float v27; // [esp+1Ch] [ebp-14h]
  float v28; // [esp+20h] [ebp-10h]
  float v29; // [esp+24h] [ebp-Ch]
  float v30; // [esp+28h] [ebp-8h]
  float v31; // [esp+2Ch] [ebp-4h]
  float v32; // [esp+2Ch] [ebp-4h]
  float v33; // [esp+38h] [ebp+8h]
  float v34; // [esp+38h] [ebp+8h]
  float v35; // [esp+38h] [ebp+8h]
  float v36; // [esp+38h] [ebp+8h]
  float v37; // [esp+38h] [ebp+8h]
  float v38; // [esp+38h] [ebp+8h]
  float v39; // [esp+38h] [ebp+8h]
  float v40; // [esp+38h] [ebp+8h]
  float v41; // [esp+38h] [ebp+8h]
  float v42; // [esp+38h] [ebp+8h]
  float v43; // [esp+38h] [ebp+8h]
  float v44; // [esp+38h] [ebp+8h]
  float v45; // [esp+38h] [ebp+8h]
  float v46; // [esp+38h] [ebp+8h]
  float v47; // [esp+3Ch] [ebp+Ch]
  float v48; // [esp+3Ch] [ebp+Ch]
  float v49; // [esp+3Ch] [ebp+Ch]
  float v50; // [esp+3Ch] [ebp+Ch]
  int v51; // [esp+3Ch] [ebp+Ch]

  v26 = *a2;
  v31 = a2[8] - v26;
  v23 = a2[1];
  v29 = a2[9] - v23;
  v30 = a2[16] - v26;
  v28 = a2[17] - v23;
  v6 = 0.0;
  if ( a3 )
  {
    v33 = FixedPointSubPixel(*a3);
    v6 = 0.0;
  }
  else
  {
    v33 = 0.0;
  }
  v47 = (float)*a4;
  v27 = v47 + v33 - v26;
  if ( a3 )
  {
    v34 = FixedPointSubPixel(a3[1]);
    v6 = 0.0;
  }
  else
  {
    v34 = v6;
  }
  v8 = 0;
  v48 = (float)a4[1];
  v49 = v48 + v34 - v23;
  v9 = v31;
  if ( fabs(v31) <= 0.00000011920929 )
  {
    v8 = 1;
    v35 = v31;
    v32 = v30;
    v30 = v35;
    v36 = v29;
    v29 = v28;
    v28 = v36;
    v9 = v32;
  }
  if ( fabs(v9) <= 0.00000011920929 )
    return 0;
  v37 = v28 * v9 - v29 * v30;
  if ( fabs(v37) <= 0.00000011920929 )
    return 0;
  v38 = (v49 * v9 - v29 * v27) / v37;
  v10 = (v27 - v30 * v38) / v9;
  v11 = v38;
  v50 = v10;
  if ( v8 )
  {
    v39 = v10;
    v50 = v11;
    v11 = v39;
  }
  v12 = v50;
  v40 = (a2[14] - a2[6]) * v50 + a2[6] + (a2[22] - a2[6]) * v11;
  v13 = v40;
  v41 = (float)(a1[2] - *a1);
  v14 = v13 * v41;
  v42 = (float)*a1;
  v15 = a1[3] - a1[1];
  v51 = a1[1];
  v25 = v14 + v42;
  v43 = v11 * (a2[23] - a2[7]) + v12 * (a2[15] - a2[7]) + a2[7];
  v16 = v43;
  v44 = (float)v15;
  v17 = v16 * v44;
  v45 = (float)v51;
  v46 = v17 + v45;
  v18 = v25;
  if ( v25 < v6 )
    v19 = v18 - 0.5;
  else
    v19 = v18 + 0.5;
  v20 = v46;
  *a4 = (int)v19;
  if ( v46 < v6 )
    v21 = v20 - 0.5;
  else
    v21 = v20 + 0.5;
  a4[1] = (int)v21;
  return 1;
}
