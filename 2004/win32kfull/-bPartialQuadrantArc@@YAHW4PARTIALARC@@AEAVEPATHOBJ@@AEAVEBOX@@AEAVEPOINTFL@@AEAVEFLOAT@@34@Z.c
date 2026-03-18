/*
 * XREFs of ?bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z @ 0x1C02B0F58
 * Callers:
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1C02B0CB4 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 * Callees:
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C00DCFAC (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?ptlXform@EBOX@@QEAA?AU_POINTL@@AEAVEPOINTFL@@@Z @ 0x1C02B1214 (-ptlXform@EBOX@@QEAA-AU_POINTL@@AEAVEPOINTFL@@@Z.c)
 */

__int64 __fastcall bPartialQuadrantArc(int a1, EPATHOBJ *a2, EBOX *a3, float *a4, float *a5, float *a6)
{
  unsigned int *v10; // rdx
  float *v11; // r9
  float v12; // xmm0_4
  __m128i v13; // xmm2
  float v14; // xmm1_4
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm3_4
  float v18; // xmm1_4
  float v19; // xmm5_4
  float v20; // xmm4_4
  float v21; // xmm3_4
  float v22; // xmm5_4
  float v23; // xmm4_4
  float v24; // xmm8_4
  float v25; // xmm0_4
  unsigned int v26; // edi
  int v27; // ebx
  int v28; // eax
  __int64 v30; // [rsp+28h] [rbp-61h] BYREF
  __int64 v31; // [rsp+30h] [rbp-59h] BYREF
  float v32; // [rsp+38h] [rbp-51h]
  float v33; // [rsp+3Ch] [rbp-4Dh]
  struct _POINTL v34; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-41h]
  struct _POINTL v36[3]; // [rsp+50h] [rbp-39h] BYREF

  *(float *)&v31 = (float)(*a4 * a6[1]) - (float)(a4[1] * *a6);
  EFLOAT::vAbs((EFLOAT *)&v31);
  if ( FP_EPSILON < *(float *)&v31 )
  {
    v13 = (__m128i)*v10;
    v14 = *v11;
    v15 = v11[1];
    *(float *)v13.m128i_i32 = *(float *)v13.m128i_i32 - *a5;
    v16 = *a6;
    v32 = a6[1];
    v33 = v14;
    *(float *)v13.m128i_i32 = *(float *)v13.m128i_i32 * 0.5;
    LODWORD(v30) = efCos((unsigned int)_mm_cvtsi128_si32(v13));
    EFLOAT::vAbs((EFLOAT *)&v30);
    v17 = *(float *)&v30;
    v18 = *(float *)&v30 + FP_1_0;
    v30 = *(_QWORD *)a4;
    v19 = (float)(v32 - v15) / *(float *)&v31;
    v20 = (float)(v33 - v16) / *(float *)&v31;
    v21 = (float)(v17 * FP_4DIV3) / v18;
    v31 = v30;
    v22 = v19 * v21;
    v23 = v20 * v21;
    *(float *)&v30 = (float)((float)(FP_1_0 - v21) * *(float *)&v30) + v22;
    v24 = (float)(FP_1_0 - v21) * a6[1];
    v25 = (float)((float)(FP_1_0 - v21) * *a6) + v22;
    *((float *)&v30 + 1) = (float)((float)(FP_1_0 - v21) * *((float *)&v30 + 1)) + v23;
    v32 = v25;
    v35 = *(_QWORD *)a6;
    v33 = v24 + v23;
  }
  else
  {
    v31 = *(_QWORD *)v11;
    v30 = v31;
    v12 = a6[1];
    v32 = *a6;
    v33 = v12;
    v35 = __PAIR64__(LODWORD(v12), LODWORD(v32));
  }
  v26 = 0;
  if ( !a1 )
    goto LABEL_9;
  EBOX::ptlXform(a3, (struct EPOINTFL *)&v34);
  v27 = a1 - 1;
  if ( v27 )
  {
    if ( v27 != 1 )
    {
LABEL_9:
      v36[0] = **(struct _POINTL **)&EBOX::ptlXform(a3, (struct EPOINTFL *)&v34);
      v36[1] = **(struct _POINTL **)&EBOX::ptlXform(a3, (struct EPOINTFL *)&v34);
      v36[2] = **(struct _POINTL **)&EBOX::ptlXform(a3, (struct EPOINTFL *)&v34);
      return (unsigned int)EPATHOBJ::bPolyBezierTo(a2, 0LL, v36, 3u);
    }
    v28 = EPATHOBJ::bPolyLineTo(a2, 0LL, &v34, 1u);
  }
  else
  {
    v28 = EPATHOBJ::bMoveTo(a2, 0LL, &v34);
  }
  if ( v28 )
    goto LABEL_9;
  return v26;
}
