/*
 * XREFs of ?GetProjectionMatrix@ShadowHelpers@@YA?AVCMILMatrix@@AEBUD2D_VECTOR_3F@@AEBUD2D_VECTOR_4F@@_N@Z @ 0x1802AA4B8
 * Callers:
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x1802AA6D0 (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ShadowHelpers::GetProjectionMatrix(__int64 a1, float *a2, float *a3, char a4)
{
  float v4; // xmm11_4
  float v5; // xmm12_4
  float v6; // xmm13_4
  float v7; // xmm10_4
  __int64 result; // rax
  float v9; // xmm8_4
  __int64 v10; // [rsp+0h] [rbp-80h]
  float v11; // [rsp+8h] [rbp-78h]
  float v12; // [rsp+Ch] [rbp-74h]

  v11 = a3[2];
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v10 = *(_QWORD *)a3;
  v12 = a3[3];
  if ( a4 )
    v7 = *(float *)&FLOAT_1_0;
  else
    v7 = 0.0;
  *(_DWORD *)(a1 + 64) = 0;
  result = a1;
  *(float *)(a1 + 8) = v6 * *(float *)&v10;
  *(float *)(a1 + 16) = v4 * *((float *)&v10 + 1);
  *(float *)(a1 + 28) = v7 * *((float *)&v10 + 1);
  *(float *)(a1 + 36) = v5 * v11;
  LODWORD(v9) = COERCE_UNSIGNED_INT(
                  (float)((float)((float)(v4 * *(float *)&v10) + (float)(v5 * *((float *)&v10 + 1))) + (float)(v6 * v11))
                + (float)(v7 * v12)) ^ _xmm;
  *(float *)a1 = (float)(v4 * *(float *)&v10) + v9;
  *(float *)(a1 + 52) = v5 * v12;
  *(float *)(a1 + 4) = v5 * *(float *)&v10;
  *(float *)(a1 + 12) = v7 * *(float *)&v10;
  *(float *)(a1 + 44) = v7 * v11;
  *(float *)(a1 + 24) = v6 * *((float *)&v10 + 1);
  *(float *)(a1 + 48) = v4 * v12;
  *(float *)(a1 + 56) = v6 * v12;
  *(float *)(a1 + 60) = (float)(v7 * v12) + v9;
  *(float *)(a1 + 32) = v4 * v11;
  *(float *)(a1 + 20) = (float)(v5 * *((float *)&v10 + 1)) + v9;
  *(float *)(a1 + 40) = (float)(v6 * v11) + v9;
  return result;
}
