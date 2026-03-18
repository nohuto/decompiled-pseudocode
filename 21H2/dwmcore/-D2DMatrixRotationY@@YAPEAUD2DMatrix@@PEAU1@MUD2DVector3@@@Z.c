/*
 * XREFs of ?D2DMatrixRotationY@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x18026D99C
 * Callers:
 *     ?Matrix4x4FromRotationY@CExpressionValueStack@@QEAAJI@Z @ 0x18024D8C4 (-Matrix4x4FromRotationY@CExpressionValueStack@@QEAAJI@Z.c)
 * Callees:
 *     cosf @ 0x1801018C8 (cosf.c)
 *     _o_sinf_0 @ 0x180101964 (_o_sinf_0.c)
 */

__int64 __fastcall D2DMatrixRotationY(__int64 a1, float a2, float *a3)
{
  float v5; // xmm7_4
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm4_4
  __int64 result; // rax

  v5 = o_sinf_0(a2);
  v6 = cosf(a2);
  v7 = *a3;
  v8 = a3[2];
  *(_DWORD *)(a1 + 8) = LODWORD(v5) ^ _xmm;
  *(float *)a1 = v6;
  *(float *)(a1 + 40) = v6;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(float *)(a1 + 32) = v5;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  result = a1;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(float *)(a1 + 48) = (float)(v7 * (float)(1.0 - v6)) - (float)(v8 * v5);
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(float *)(a1 + 56) = (float)(v8 * (float)(1.0 - v6)) + (float)(v7 * v5);
  return result;
}
