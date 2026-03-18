/*
 * XREFs of ?CalculatePrimitiveToBitmap@CPrimitiveGroupDrawListGenerator@@CAXAEBVCDrawListBitmap@@AEBUD2D_MATRIX_3X2_F@@PEAVMatrix3x3@@@Z @ 0x18026759C
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800C0E40 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180049218 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18004C5B8 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

void __fastcall CPrimitiveGroupDrawListGenerator::CalculatePrimitiveToBitmap(
        const struct CDrawListBitmap *a1,
        const struct D2D_MATRIX_3X2_F *a2,
        struct Matrix3x3 *a3)
{
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // xmm3_4
  int v8; // xmm4_4
  int v9; // xmm0_4
  int v10; // xmm1_4
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  _DWORD v12[6]; // [rsp+28h] [rbp-38h] BYREF
  float v13[6]; // [rsp+40h] [rbp-20h] BYREF

  CDrawListBitmap::GetSize(a1, &v11);
  v13[1] = 0.0;
  v13[2] = 0.0;
  v13[0] = (float)(int)v11;
  v13[3] = (float)SHIDWORD(v11);
  v13[4] = 0.0 - (float)((float)(int)v11 * 0.0);
  v13[5] = 0.0 - (float)((float)SHIDWORD(v11) * 0.0);
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)v12,
    (const struct D2D1::Matrix3x2F *)a2,
    (const struct D2D1::Matrix3x2F *)v13);
  v5 = v12[2];
  v6 = v12[3];
  v7 = v12[0];
  v8 = v12[1];
  *((_DWORD *)a3 + 2) = 0;
  *((_DWORD *)a3 + 5) = 0;
  *((_DWORD *)a3 + 3) = v5;
  v9 = v12[4];
  *((_DWORD *)a3 + 4) = v6;
  v10 = v12[5];
  *((_DWORD *)a3 + 6) = v9;
  *((_DWORD *)a3 + 7) = v10;
  *(_DWORD *)a3 = v7;
  *((_DWORD *)a3 + 1) = v8;
  *((_DWORD *)a3 + 8) = 1065353216;
}
