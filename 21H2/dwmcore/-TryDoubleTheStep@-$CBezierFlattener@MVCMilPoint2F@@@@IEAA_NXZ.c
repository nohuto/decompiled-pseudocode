/*
 * XREFs of ?TryDoubleTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAA_NXZ @ 0x1800B67D4
 * Callers:
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x1800B6188 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 *     ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x180191B34 (-Flatten@-$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CBezierFlattener<float,CMilPoint2F>::TryDoubleTheStep(__int64 a1)
{
  char v1; // r8
  float v3; // xmm5_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm3_4
  float v7; // xmm1_4
  float v8; // xmm0_4

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 80) & 1) == 0 )
  {
    v3 = *(float *)(a1 + 72);
    v4 = *(float *)(a1 + 40);
    v5 = (float)(*(float *)(a1 + 68) + *(float *)(a1 + 68)) - *(float *)(a1 + 76);
    v6 = (float)(*(float *)(a1 + 64) + *(float *)(a1 + 64)) - v3;
    if ( v4 >= COERCE_FLOAT(LODWORD(v3) & _xmm)
      && v4 >= COERCE_FLOAT(*(_DWORD *)(a1 + 76) & _xmm)
      && v4 >= COERCE_FLOAT(LODWORD(v6) & _xmm)
      && v4 >= COERCE_FLOAT(LODWORD(v5) & _xmm) )
    {
      v1 = 1;
      v7 = (float)(*(float *)(a1 + 60) + *(float *)(a1 + 60)) + *(float *)(a1 + 68);
      *(float *)(a1 + 56) = (float)(*(float *)(a1 + 56) + *(float *)(a1 + 56)) + *(float *)(a1 + 64);
      *(float *)(a1 + 60) = v7;
      *(float *)(a1 + 76) = *(float *)(a1 + 76) * 4.0;
      *(float *)(a1 + 72) = v3 * 4.0;
      *(float *)(a1 + 64) = v6 * 4.0;
      *(float *)(a1 + 68) = v5 * 4.0;
      v8 = *(float *)(a1 + 88) + *(float *)(a1 + 88);
      *(int *)(a1 + 80) /= 2;
      *(float *)(a1 + 88) = v8;
    }
  }
  return v1;
}
