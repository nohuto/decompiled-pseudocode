/*
 * XREFs of ?SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F2610
 * Callers:
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18008685C (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRec.c)
 * Callees:
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180057E64 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800882E4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?clear@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1800E8E3C (-clear@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     ?ValidateRealizationSize@CBackdropVisualImage@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F27C0 (-ValidateRealizationSize@CBackdropVisualImage@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CBackdropVisualImage::SetRootAndSourceRectangle(__int64 a1, __int64 a2, float *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  _DWORD *v7; // rax
  struct D2D_RECT_F *v8; // r9
  float v9; // xmm6_4
  float v10; // xmm2_4
  float v11; // xmm2_4
  __int128 v13; // xmm0
  int *v14; // rax
  _BYTE v15[32]; // [rsp+20h] [rbp-50h] BYREF
  struct D2D_RECT_F v16; // [rsp+40h] [rbp-30h] BYREF
  float v17; // [rsp+50h] [rbp-20h]
  float v18; // [rsp+54h] [rbp-1Ch]

  v6 = 0LL;
  if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a3) )
  {
    std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear((_QWORD *)(a1 + 192));
  }
  else
  {
    if ( *(_QWORD *)(a1 + 144) != v5 )
      *(_QWORD *)(a1 + 144) = v5;
    v7 = PixelAlign(&v15[16], (__int64)a3);
    do
    {
      *(float *)&v15[4 * v6] = (float)(int)v7[v6];
      ++v6;
    }
    while ( v6 < 4 );
    v9 = *(float *)(a1 + 1876);
    v10 = *(float *)(a1 + 1880);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)v15;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - 1.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - 1.0) & _xmm) >= 0.000081380211 )
    {
      v13 = *(_OWORD *)a3;
      v16.top = 0.0;
      v16.right = 0.0;
      v16.left = v9;
      *(_OWORD *)v15 = v13;
      *(_OWORD *)&v15[16] = v13;
      v16.bottom = v10;
      v17 = 0.0 - (float)(v9 * 0.0);
      v18 = 0.0 - (float)(v10 * 0.0);
      D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
        (D2DMatrixHelper *)&v15[16],
        &v16,
        (const struct D2D_MATRIX_3X2_F *)v15,
        v8);
      *(_OWORD *)&v15[16] = *(_OWORD *)v15;
      v14 = PixelAlign(v15, (__int64)&v15[16]);
      v11 = (float)v14[3] - (float)v14[1];
      *(double *)(a1 + 120) = (float)((float)v14[2] - (float)*v14);
    }
    else
    {
      v11 = *(float *)&v15[12] - *(float *)&v15[4];
      *(double *)(a1 + 120) = (float)(*(float *)&v15[8] - *(float *)v15);
    }
    *(double *)(a1 + 128) = v11;
    CBackdropVisualImage::ValidateRealizationSize(a1, a3);
  }
  return 0LL;
}
