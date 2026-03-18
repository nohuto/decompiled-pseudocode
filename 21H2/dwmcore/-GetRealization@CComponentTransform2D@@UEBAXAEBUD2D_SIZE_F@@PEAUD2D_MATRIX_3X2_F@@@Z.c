/*
 * XREFs of ?GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800A7FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CComponentTransform2D::GetRealization(
        CComponentTransform2D *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  FLOAT v5; // xmm2_4
  FLOAT v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  __int64 v11; // xmm1_8
  float v12; // xmm0_4
  __int64 v13; // xmm1_8
  __int64 v14; // xmm1_8
  __int128 v15; // [rsp+28h] [rbp-38h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+40h] [rbp-20h] BYREF

  v5 = COERCE_FLOAT(*((_DWORD *)this + 40) ^ _xmm) * a2->width;
  v6 = COERCE_FLOAT(*((_DWORD *)this + 41) ^ _xmm) * a2->height;
  *(_QWORD *)&a3->m11 = 1065353216LL;
  a3->m21 = 0.0;
  a3->m22 = 1.0;
  a3->dx = v5;
  a3->dy = v6;
  v7 = *((float *)this + 46);
  v8 = *((float *)this + 42);
  v9 = *((float *)this + 43);
  if ( v7 != 1.0 || *((float *)this + 47) != 1.0 )
  {
    v12 = *((float *)this + 47);
    matrix.m21 = 0.0;
    matrix.m22 = v12;
    *(_QWORD *)&matrix.m11 = LODWORD(v7);
    matrix.dy = v9 - (float)(v12 * v9);
    matrix.dx = v8 - (float)(v7 * v8);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v15,
      (const struct D2D1::Matrix3x2F *)a3,
      (const struct D2D1::Matrix3x2F *)&matrix);
    v13 = v16;
    *(_OWORD *)&a3->m11 = v15;
    *(_QWORD *)&a3->m[2][0] = v13;
  }
  v10 = *((float *)this + 48);
  if ( v10 != 0.0 )
  {
    D2D1MakeRotateMatrix(v10 * 57.295776, (D2D1_POINT_2F)__PAIR64__(LODWORD(v9), LODWORD(v8)), &matrix);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v15,
      (const struct D2D1::Matrix3x2F *)a3,
      (const struct D2D1::Matrix3x2F *)&matrix);
    v14 = v16;
    *(_OWORD *)&a3->m11 = v15;
    *(_QWORD *)&a3->m[2][0] = v14;
  }
  a3->dx = *((float *)this + 44) + a3->dx;
  a3->dy = *((float *)this + 45) + a3->dy;
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v15,
    (const struct D2D1::Matrix3x2F *)a3,
    (CComponentTransform2D *)((char *)this + 196));
  v11 = v16;
  *(_OWORD *)&a3->m11 = v15;
  *(_QWORD *)&a3->m[2][0] = v11;
}
