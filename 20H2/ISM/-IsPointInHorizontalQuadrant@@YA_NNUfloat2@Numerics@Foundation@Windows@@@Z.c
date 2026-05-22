/*
 * XREFs of ?IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z @ 0x18018D10C
 * Callers:
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018F3D4 (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     atan2f_0 @ 0x18004A5CF (atan2f_0.c)
 */

bool __fastcall IsPointInHorizontalQuadrant(double a1, __int64 a2)
{
  double v2; // xmm6_8
  double v3; // xmm1_8

  v2 = a1 * 0.5;
  *(_QWORD *)&v3 = COERCE_UNSIGNED_INT64(atan2f_0(*((float *)&a2 + 1), *(float *)&a2)) & _xmm;
  return v2 > v3 || v3 > 3.141592741012573 - v2;
}
