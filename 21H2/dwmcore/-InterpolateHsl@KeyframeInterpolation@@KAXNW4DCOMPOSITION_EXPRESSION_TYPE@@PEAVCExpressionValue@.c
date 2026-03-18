/*
 * XREFs of ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1802575B8
 * Callers:
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18001BC8C (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___ @ 0x180256B48 (InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___.c)
 * Callees:
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x18000426C (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x180004320 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     _o_fmodf_0 @ 0x180101910 (_o_fmodf_0.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

__int64 __fastcall KeyframeInterpolation::InterpolateHsl(double a1, __int64 a2, float *a3, float *a4, __int64 a5)
{
  float v7; // xmm7_4
  ColorSpaceHelpers *v8; // rcx
  ColorSpaceHelpers *v9; // rcx
  ColorSpaceHelpers *v10; // rcx
  float v12; // [rsp+48h] [rbp-41h] BYREF
  float v13; // [rsp+4Ch] [rbp-3Dh] BYREF
  float v14; // [rsp+50h] [rbp-39h] BYREF
  float v15; // [rsp+54h] [rbp-35h] BYREF
  __int128 v16; // [rsp+58h] [rbp-31h] BYREF
  _OWORD v17[4]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+1Fh] BYREF
  int v19; // [rsp+B0h] [rbp+27h]
  char v20; // [rsp+B4h] [rbp+2Bh]

  v7 = a1;
  memset_0(v17, 0, sizeof(v17));
  v18 = 0LL;
  ColorSpaceHelpers::Color_HSLAfromRGBA(v8, a3[1], a3[2], a3[3], &v12, &v13, &v14, &v15);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    v9,
    a4[1],
    a4[2],
    a4[3],
    (float *)&v16,
    (float *)&v16 + 1,
    (float *)&v16 + 2,
    (float *)&v16 + 3);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - *(float *)&v16) & _xmm) >= 3.1415927 )
    o_fmodf_0((__int64)v10);
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v10,
    (float)((float)(1.0 - v7) * v13) + (float)(*((float *)&v16 + 1) * v7),
    (float)((float)(1.0 - v7) * v14) + (float)(*((float *)&v16 + 2) * v7),
    (float)((float)(1.0 - v7) * v15) + (float)(*((float *)&v16 + 3) * v7),
    (float *)&v16,
    (float *)&v16 + 1,
    (float *)&v16 + 2,
    (float *)&v16 + 3);
  v19 = 70;
  v17[0] = v16;
  v20 = 1;
  CExpressionValue::operator=(a5, (__int64)v17);
  return Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v18);
}
