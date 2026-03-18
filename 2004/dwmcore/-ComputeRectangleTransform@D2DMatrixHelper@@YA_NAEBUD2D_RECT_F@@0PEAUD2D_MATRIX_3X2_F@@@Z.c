/*
 * XREFs of ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800C3328
 * Callers:
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x1800082E8 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18000AAD4 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M@Z @ 0x1800C2FBC (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_1800C2FBC.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EC7F0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800ED520 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18019F2B8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z @ 0x1801E4F2C (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180049218 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x1800C343C (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

char __fastcall D2DMatrixHelper::ComputeRectangleTransform(
        const struct D2D_RECT_F *this,
        const struct D2D_RECT_F *a2,
        const struct D2D_RECT_F *a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  float *v4; // rdx
  float *v5; // rcx
  __int64 v6; // r9
  char v7; // r10
  float v8; // xmm2_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  __int64 v15; // xmm1_8
  __int64 v16; // r9
  __int128 v18; // [rsp+20h] [rbp-50h] BYREF
  __int64 v19; // [rsp+30h] [rbp-40h]
  float v20[6]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF
  int v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+64h] [rbp-Ch]

  if ( AreEqual(this, a2) )
  {
    *(_QWORD *)v6 = 1065353216LL;
    *(_DWORD *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 12) = 1065353216LL;
    *(_DWORD *)(v6 + 20) = 0;
  }
  else
  {
    v8 = *v5;
    v9 = v5[1];
    v10 = v5[2] - *v5;
    v11 = v5[3] - v9;
    if ( v10 == 0.0 && v11 == 0.0 )
    {
      return 0;
    }
    else
    {
      v12 = v4[1];
      v20[1] = 0.0;
      v20[2] = 0.0;
      v21 = _xmm;
      v13 = v4[2];
      v22 = LODWORD(v8) ^ _xmm;
      v14 = *v4;
      v23 = LODWORD(v9) ^ _xmm;
      v20[4] = v14;
      v20[5] = v12;
      v20[0] = (float)(v13 - v14) / v10;
      v20[3] = (float)(v4[3] - v12) / v11;
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v18,
        (const struct D2D1::Matrix3x2F *)&v21,
        (const struct D2D1::Matrix3x2F *)v20);
      v15 = v19;
      *(_OWORD *)v16 = v18;
      *(_QWORD *)(v16 + 16) = v15;
    }
  }
  return v7;
}
