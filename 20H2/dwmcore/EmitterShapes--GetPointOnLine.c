/*
 * XREFs of EmitterShapes::GetPointOnLine @ 0x1802065B4
 * Callers:
 *     ?GetPointOnEdge@Figure@CPathEmitterEdge@EmitterShapes@@QEBA?AUfloat2@Numerics@Foundation@Windows@@MM@Z @ 0x1802064E8 (-GetPointOnEdge@Figure@CPathEmitterEdge@EmitterShapes@@QEBA-AUfloat2@Numerics@Foundation@Windows.c)
 * Callees:
 *     sqrtf_0 @ 0x1800EE99B (sqrtf_0.c)
 */

float *__fastcall EmitterShapes::GetPointOnLine(float *a1, __int64 a2, __int64 a3, float a4, float a5)
{
  float v6; // xmm8_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float *result; // rax

  v6 = *(float *)&a3 - *(float *)&a2;
  v7 = *((float *)&a3 + 1) - *((float *)&a2 + 1);
  v8 = 1.0 / sqrtf_0((float)(v7 * v7) + (float)(v6 * v6));
  result = a1;
  a1[1] = (float)((float)(v6 * v8) * a5) + (float)((float)(v7 * a4) + *((float *)&a2 + 1));
  *a1 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v7 * v8) * a5) ^ _xmm) + (float)((float)(v6 * a4) + *(float *)&a2);
  return result;
}
