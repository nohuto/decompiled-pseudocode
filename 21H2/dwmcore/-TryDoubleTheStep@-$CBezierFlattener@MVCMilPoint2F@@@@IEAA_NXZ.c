/*
 * XREFs of ?TryDoubleTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAA_NXZ @ 0x18025E39C
 * Callers:
 *     ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x18025DF78 (-Flatten@-$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CBezierFlattener<float,CMilPoint2F>::TryDoubleTheStep(__int64 a1)
{
  char v1; // r8
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm3_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm0_4

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 80) & 1) == 0 )
  {
    v2 = *(float *)(a1 + 72);
    v3 = *(float *)(a1 + 40);
    v4 = (float)(*(float *)(a1 + 64) + *(float *)(a1 + 64)) - v2;
    v5 = (float)(*(float *)(a1 + 68) + *(float *)(a1 + 68)) - *(float *)(a1 + 76);
    if ( v3 >= COERCE_FLOAT(LODWORD(v2) & _xmm)
      && v3 >= COERCE_FLOAT(*(_DWORD *)(a1 + 76) & _xmm)
      && v3 >= COERCE_FLOAT(LODWORD(v4) & _xmm)
      && v3 >= COERCE_FLOAT(LODWORD(v5) & _xmm) )
    {
      v1 = 1;
      v6 = (float)(*(float *)(a1 + 60) + *(float *)(a1 + 60)) + *(float *)(a1 + 68);
      *(float *)(a1 + 56) = (float)(*(float *)(a1 + 56) + *(float *)(a1 + 56)) + *(float *)(a1 + 64);
      *(float *)(a1 + 60) = v6;
      *(float *)(a1 + 72) = *(float *)(a1 + 72) * 4.0;
      *(float *)(a1 + 76) = *(float *)(a1 + 76) * 4.0;
      *(float *)(a1 + 64) = v4 * 4.0;
      *(float *)(a1 + 68) = v5 * 4.0;
      v7 = *(float *)(a1 + 88) + *(float *)(a1 + 88);
      *(int *)(a1 + 80) /= 2;
      *(float *)(a1 + 88) = v7;
    }
  }
  return v1;
}
