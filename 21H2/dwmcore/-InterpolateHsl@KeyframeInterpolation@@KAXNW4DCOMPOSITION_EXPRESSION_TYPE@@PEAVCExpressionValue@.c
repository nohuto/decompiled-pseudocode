/*
 * XREFs of ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180206E98
 * Callers:
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800298E8 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___ @ 0x180206510 (InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___.c)
 * Callees:
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x180004704 (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1800047B8 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     fmodf_0 @ 0x1800F477B (fmodf_0.c)
 */

__int64 __fastcall KeyframeInterpolation::InterpolateHsl(double a1, __int64 a2, float *a3, float *a4, __int64 a5)
{
  float v7; // xmm7_4
  ColorSpaceHelpers *v8; // rcx
  ColorSpaceHelpers *v9; // rcx
  ColorSpaceHelpers *v10; // rcx
  float v11; // xmm6_4
  float v12; // xmm0_4
  float v14; // [rsp+48h] [rbp-41h] BYREF
  float v15; // [rsp+4Ch] [rbp-3Dh] BYREF
  float v16; // [rsp+50h] [rbp-39h] BYREF
  float v17; // [rsp+54h] [rbp-35h] BYREF
  __int128 v18; // [rsp+58h] [rbp-31h] BYREF
  _OWORD v19[4]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+1Fh]
  int v21; // [rsp+B0h] [rbp+27h]
  char v22; // [rsp+B4h] [rbp+2Bh]

  v7 = a1;
  memset_0(v19, 0, sizeof(v19));
  v20 = 0LL;
  ColorSpaceHelpers::Color_HSLAfromRGBA(v8, a3[1], a3[2], a3[3], &v14, &v15, &v16, &v17);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    v9,
    a4[1],
    a4[2],
    a4[3],
    (float *)&v18,
    (float *)&v18 + 1,
    (float *)&v18 + 2,
    (float *)&v18 + 3);
  v11 = 1.0 - v7;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - *(float *)&v18) & _xmm) >= 3.1415927 )
  {
    if ( v14 <= *(float *)&v18 )
      v12 = (float)((float)(v14 + 6.2831855) * v11) + (float)(*(float *)&v18 * v7);
    else
      v12 = (float)((float)(*(float *)&v18 + 6.2831855) * v7) + (float)(v11 * v14);
    fmodf_0(v12, 6.2831855);
  }
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v10,
    (float)(v11 * v15) + (float)(*((float *)&v18 + 1) * v7),
    (float)(v11 * v16) + (float)(*((float *)&v18 + 2) * v7),
    (float)(v11 * v17) + (float)(*((float *)&v18 + 3) * v7),
    (float *)&v18,
    (float *)&v18 + 1,
    (float *)&v18 + 2,
    (float *)&v18 + 3);
  v21 = 70;
  v19[0] = v18;
  v22 = 1;
  return CExpressionValue::operator=(a5, (__int64)v19);
}
