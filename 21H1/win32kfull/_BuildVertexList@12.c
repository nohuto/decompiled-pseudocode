/*
 * XREFs of _BuildVertexList@12 @ 0x1505EE
 * Callers:
 *     _DCEHitTestWindow@16 @ 0x150745 (_DCEHitTestWindow@16.c)
 * Callees:
 *     _D3DXVec4Transform@12 @ 0x1506A6 (_D3DXVec4Transform@12.c)
 */

int __fastcall BuildVertexList(float *a1, int *a2, int a3)
{
  int v3; // esi
  double v4; // st7
  int result; // eax
  int v6; // ecx

  v3 = 6;
  *a1 = (float)*a2;
  a1[1] = (float)a2[1];
  a1[6] = 0.0;
  a1[7] = 0.0;
  a1[8] = (float)a2[2];
  a1[9] = (float)a2[1];
  a1[14] = 1.0;
  a1[15] = 0.0;
  a1[16] = (float)*a2;
  a1[17] = (float)a2[3];
  a1[22] = 0.0;
  a1[23] = 1.0;
  a1[24] = (float)a2[2];
  a1[25] = (float)a2[3];
  a1[30] = 1.0;
  a1[31] = 1.0;
  a1[32] = (float)*a2;
  a1[33] = (float)a2[3];
  a1[38] = 0.0;
  a1[39] = 1.0;
  a1[40] = (float)a2[2];
  a1[41] = (float)a2[1];
  a1[46] = 1.0;
  v4 = 1.0;
  a1[47] = 0.0;
  do
  {
    a1[2] = v4;
    a1[3] = v4;
    result = D3DXVec4Transform(a3);
    v4 = 1.0;
    a1 = (float *)(v6 + 32);
    --v3;
  }
  while ( v3 );
  return result;
}
