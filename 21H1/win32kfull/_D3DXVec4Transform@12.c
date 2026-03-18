/*
 * XREFs of _D3DXVec4Transform@12 @ 0x1506A6
 * Callers:
 *     _BuildVertexList@12 @ 0x1505EE (_BuildVertexList@12.c)
 *     _GetInertiaRegionInVirtualizedScreen@8 @ 0x17CAF0 (_GetInertiaRegionInVirtualizedScreen@8.c)
 * Callees:
 *     <none>
 */

float *__fastcall D3DXVec4Transform(float *a1, float *a2, float *a3)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st4
  double v8; // st6
  double v9; // st5
  float *result; // eax
  float v11; // [esp+0h] [ebp-8h]
  float v12; // [esp+4h] [ebp-4h]
  float v13; // [esp+10h] [ebp+8h]

  v4 = a2[1];
  v5 = *a2;
  v6 = a2[2];
  v7 = a2[3];
  v13 = a3[1] * v5 + a3[5] * v4 + a3[9] * v6 + a3[13] * v7;
  v12 = a3[2] * v5 + a3[6] * v4 + a3[10] * v6 + a3[14] * v7;
  v11 = a3[3] * v5 + a3[7] * v4 + a3[11] * v6 + a3[15] * v7;
  v8 = v5 * *a3 + v4 * a3[4] + v6 * a3[8];
  v9 = a3[12];
  result = a1;
  *a1 = v7 * v9 + v8;
  a1[1] = v13;
  a1[2] = v12;
  a1[3] = v11;
  return result;
}
