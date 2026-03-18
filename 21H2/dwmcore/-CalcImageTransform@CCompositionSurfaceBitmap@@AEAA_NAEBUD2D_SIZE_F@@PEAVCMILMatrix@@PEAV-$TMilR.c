/*
 * XREFs of ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180006798
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180005720 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z @ 0x180005F50 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180006280 (-IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180006310 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800064F4 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 *     ?DrawLetterboxingMargins@CCompositionSurfaceBitmap@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180210064 (-DrawLetterboxingMargins@CCompositionSurfaceBitmap@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?GetLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAUMilRectF@@@Z @ 0x1800061EC (-GetLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAUMilRectF@@@Z.c)
 *     ?UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x18000687C (-UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x1800068A4 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@AEBA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800068E4 (-GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@AEBA_NPEAV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ @ 0x1800069D4 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x1800ACDF0 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800D9AAC (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x1800D9B40 (-Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::CalcImageTransform(
        CCompositionSurfaceBitmap *this,
        struct D2D_SIZE_F *a2,
        CMILMatrix *a3,
        __int128 *a4)
{
  char v5; // si
  struct IBitmapRealization *RenderingRealization; // r12
  int SizePreference; // r13d
  float v11; // xmm6_4
  char LetterboxingMargins; // al
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm4_4
  float v18; // xmm4_4
  float v19; // xmm2_4
  float width; // xmm1_4
  float height; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm3_4
  char v24; // al
  _OWORD v25[4]; // [rsp+48h] [rbp-89h] BYREF
  char v26; // [rsp+88h] [rbp-49h]
  char v27; // [rsp+89h] [rbp-48h]
  __int128 v28; // [rsp+98h] [rbp-39h] BYREF
  float v29; // [rsp+A8h] [rbp-29h] BYREF
  float v30; // [rsp+ACh] [rbp-25h]
  float v31; // [rsp+B0h] [rbp-21h]
  float v32; // [rsp+B4h] [rbp-1Dh]
  __int128 v33; // [rsp+B8h] [rbp-19h] BYREF

  v5 = 0;
  RenderingRealization = CCompositionSurfaceBitmap::GetRenderingRealization(this);
  if ( RenderingRealization )
  {
    SizePreference = CCompositionSurfaceBitmap::GetSizePreference(this);
    v5 = (*(__int64 (__fastcall **)(struct IBitmapRealization *, CMILMatrix *, __int128 *))(*(_QWORD *)RenderingRealization
                                                                                          + 8LL))(
           RenderingRealization,
           a3,
           a4);
    v33 = 0LL;
    v11 = 0.0;
    if ( (unsigned __int8)CCompositionSurfaceBitmap::GetScaledLetterboxingMargins(this, &v33) )
    {
      CMILMatrix::PrependTranslate(a3, *(float *)&v33, *((float *)&v33 + 1), 0.0);
      v5 = 1;
    }
    if ( CCompositionSurfaceBitmap::UseLayoutSizeForBounds(this, a2) && SizePreference != 1 )
    {
      v28 = 0LL;
      if ( v5 )
        CMILMatrix::Transform2DBoundsHelper<0>(a3, a4, &v28);
      else
        v28 = *a4;
      LetterboxingMargins = CCompositionSurfaceBitmap::GetLetterboxingMargins(this, (struct MilRectF *)&v29);
      v14 = *(float *)&v28;
      v15 = *((float *)&v28 + 1);
      v16 = *((float *)&v28 + 3);
      if ( LetterboxingMargins )
      {
        v14 = *(float *)&v28 - v29;
        v15 = *((float *)&v28 + 1) - v30;
        v16 = *((float *)&v28 + 3) + v32;
        *(float *)&v28 = *(float *)&v28 - v29;
        *((float *)&v28 + 2) = *((float *)&v28 + 2) + v31;
        *((float *)&v28 + 1) = *((float *)&v28 + 1) - v30;
        *((float *)&v28 + 3) = *((float *)&v28 + 3) + v32;
      }
      if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v28) )
      {
        v18 = v17 - v14;
        v19 = v16 - v15;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2->width - v18) & _xmm) > 0.00390625
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(a2->height - v19) & _xmm) > 0.00390625 )
        {
          v25[1] = _xmm;
          v25[0] = _xmm;
          v25[3] = _xmm;
          width = a2->width;
          v25[2] = _xmm;
          height = a2->height;
          v26 = 85;
          v27 = v27 & 0xC0 | 0x17;
          v22 = width / v18;
          if ( SizePreference )
          {
            v23 = 0.0;
            if ( height < (float)(v22 * v19) )
            {
              v22 = height / v19;
              v11 = (float)(a2->width - (float)((float)(height / v19) * v18)) * 0.5;
            }
            else
            {
              v23 = (float)(height - (float)(v22 * v19)) * 0.5;
            }
            CMILMatrix::Set2DScaleAndOffset((CMILMatrix *)v25, v22, v22, v11, v23);
          }
          else
          {
            CMILMatrix::SetScale((CMILMatrix *)v25, v22, height / v19, 1.0, 0.0, 0.0, 0.0);
          }
          CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v25);
          return 1;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)a3 = 1065353216LL;
    *((_QWORD *)a3 + 1) = 0LL;
    *((_DWORD *)a3 + 4) = 0;
    *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
    *(_QWORD *)((char *)a3 + 28) = 0LL;
    *((_DWORD *)a3 + 9) = 0;
    *((_QWORD *)a3 + 5) = 1065353216LL;
    *((_QWORD *)a3 + 6) = 0LL;
    *((_DWORD *)a3 + 14) = 0;
    *((_DWORD *)a3 + 15) = 1065353216;
    v24 = *((_BYTE *)a3 + 65);
    *((_BYTE *)a3 + 64) = 85;
    *((_BYTE *)a3 + 65) = v24 & 0xC0 | 0x17;
    *((_QWORD *)a4 + 1) = 0LL;
    *(_QWORD *)a4 = 0LL;
  }
  return v5;
}
