/*
 * XREFs of ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ @ 0x180007998
 * Callers:
 *     ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x18000DDF8 (-ComputeShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800096E4 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x18000DF5C (-IsRectangular@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x18009F1C8 (-IsCloseRealZero@@YA_NMM@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

char __fastcall CProjectedShadow::IsShadowAxisAlignedRectToReceiver(CProjectedShadow *this)
{
  bool IsRectangular; // al
  char v3; // r8
  const struct D2D_MATRIX_3X2_F *v4; // rdx
  int v5; // xmm1_4
  int v6; // xmm0_4
  int v7; // xmm1_4
  int v8; // xmm0_4
  int v9; // xmm1_4
  _DWORD v11[6]; // [rsp+20h] [rbp-28h] BYREF

  IsRectangular = CProjectedShadowCaster::IsRectangular(*((CProjectedShadowCaster **)this + 9));
  v3 = 0;
  if ( IsRectangular
    && IsCloseRealZero(*((float *)this + 45), 0.000081380211)
    && IsCloseRealZero(*((float *)this + 48), 0.000081380211) )
  {
    v5 = *((_DWORD *)this + 44);
    v11[0] = *((_DWORD *)this + 43);
    v6 = *((_DWORD *)this + 46);
    v11[1] = v5;
    v7 = *((_DWORD *)this + 47);
    v11[2] = v6;
    v8 = *((_DWORD *)this + 49);
    v11[3] = v7;
    v9 = *((_DWORD *)this + 50);
    v11[4] = v8;
    v11[5] = v9;
    if ( D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)v11, v4) )
      return 1;
  }
  return v3;
}
