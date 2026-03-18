/*
 * XREFs of ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02AFEE0
 * Callers:
 *     GreAngleArc @ 0x1C029F010 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C02B0210 (NtGdiArcInternal.c)
 * Callees:
 *     bFToL @ 0x1C00F05F8 (bFToL.c)
 *     eFraction @ 0x1C02DE9D0 (eFraction.c)
 */

__int64 __fastcall vCosSin(int a1, float *a2, float *a3)
{
  float v3; // xmm2_4
  int v6; // edi
  int v7; // ebx
  int v8; // r8d
  double v9; // xmm0_8
  int v10; // xmm4_4
  unsigned int v11; // edx
  __int64 v12; // r9
  int v13; // r10d
  __int64 v14; // rdi
  float v15; // xmm3_4
  char v16; // r10
  __int64 v17; // rdx
  __int64 result; // rax
  float v19; // xmm3_4
  int v20; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(float *)&a1;
  if ( *(float *)&a1 >= 0.0 )
  {
    v6 = 0;
    v7 = 1;
  }
  else
  {
    v6 = 1;
    v7 = 0;
    LODWORD(v3) = a1 ^ _xmm;
  }
  v20 = 0;
  bFToL(FP_SINE_FACTOR * v3, &v20, 5u);
  v9 = eFraction();
  v11 = v20;
  v12 = (unsigned int)(v8 + 26);
  v13 = v20 >> 5;
  if ( ((v20 >> 5) & 2) == 0 )
    v7 = v6;
  v14 = (unsigned int)(v8 + 27);
  if ( (v13 & 1) != 0 )
  {
    v15 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                         (float)(gaefSin[(unsigned int)v14 - (unsigned __int64)((unsigned int)v12 & v20)]
                               - gaefSin[(unsigned int)v12 - (unsigned __int64)((unsigned int)v12 & v20)])
                       * *(float *)&v9) ^ v10)
        + gaefSin[(unsigned int)v14 - (unsigned __int64)((unsigned int)v12 & v20)];
  }
  else
  {
    v11 = v12 & v20;
    v15 = (float)((float)(gaefSin[(int)((v12 & v20) + 1)] - gaefSin[v11]) * *(float *)&v9) + gaefSin[v11];
  }
  if ( v7 )
    LODWORD(v15) ^= v10;
  v16 = v13 + 1;
  *a3 = v15;
  v17 = (unsigned int)v12 & v11;
  if ( (v16 & 1) != 0 )
  {
    result = (unsigned int)v17;
    v19 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(gaefSin[v14 - (unsigned int)v17] - gaefSin[v12 - (unsigned int)v17]) * *(float *)&v9) ^ v10)
        + gaefSin[v14 - (unsigned int)v17];
  }
  else
  {
    result = (unsigned int)(v17 + 1);
    v19 = (float)((float)(gaefSin[(int)result] - gaefSin[v17]) * *(float *)&v9) + gaefSin[v17];
  }
  if ( (v16 & 2) != 0 )
    LODWORD(v19) ^= v10;
  *a2 = v19;
  return result;
}
