/*
 * XREFs of ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800361E0
 * Callers:
 *     <none>
 * Callees:
 *     pow @ 0x1800E3D6C (pow.c)
 */

__int64 __fastcall CubicBezierInterpolation::Compute(__int64 a1, float a2, unsigned int a3, __int64 a4)
{
  int v7; // edi
  double v8; // xmm12_8
  __int128 v9; // xmm15
  __int128 v10; // xmm9
  double v11; // xmm6_8
  double v12; // xmm3_8
  double v13; // xmm11_8
  float v14; // xmm0_4
  double v15; // xmm3_8
  __int128 v16; // xmm1
  double v17; // xmm3_8
  double v18; // xmm0_8
  __int64 v19; // rdx
  double v21; // [rsp+F0h] [rbp+8h]

  v7 = 0;
  v9 = 0LL;
  v8 = *(float *)(a1 + 32);
  *(double *)&v9 = a2;
  v21 = *(float *)(a1 + 24);
  v10 = v9;
  do
  {
    v11 = (1.0 - *(double *)&v10) * (1.0 - *(double *)&v10) * 3.0;
    v12 = pow(*(double *)&v10, 3.0);
    v13 = (1.0 - *(double *)&v10) * 6.0 * *(double *)&v10 * (v8 - v21)
        + v11 * v21
        + *(double *)&v10 * *(double *)&v10 * 3.0 * (1.0 - v8);
    v14 = v13;
    v15 = v12 + (1.0 - *(double *)&v10) * 3.0 * (*(double *)&v10 * *(double *)&v10) * v8 + v11 * *(double *)&v10 * v21;
    if ( COERCE_FLOAT(LODWORD(v14) & _xmm) < 0.0000011920929 )
      break;
    *((_QWORD *)&v16 + 1) = *((_QWORD *)&v10 + 1);
    v17 = (v15 - *(double *)&v9) / v13;
    *(double *)&v16 = *(double *)&v10 - v17;
    v18 = *(double *)&v10 - (*(double *)&v10 - v17);
    v10 = v16;
    *(float *)&v16 = v18;
    if ( COERCE_FLOAT(v16 & _xmm) < 0.0000011920929 )
      break;
    ++v7;
  }
  while ( v7 < 30 );
  pow(*(double *)&v10, 3.0);
  return KeyframeInterpolation::Interpolate(a1, v19, a3, a4);
}
