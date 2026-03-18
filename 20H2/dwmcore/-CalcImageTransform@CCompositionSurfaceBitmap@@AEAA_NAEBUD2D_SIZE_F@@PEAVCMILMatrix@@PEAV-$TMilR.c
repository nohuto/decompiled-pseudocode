/*
 * XREFs of ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180015288
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180014AB0 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180014D64 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180014EC0 (-IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@.c)
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180014F5C (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z @ 0x1800150F0 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x180015348 (-UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x180015370 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ @ 0x180015430 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18004E668 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180065090 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180091760 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800D07A8 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x18020EC98 (-Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z.c)
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
  float v12; // xmm6_4
  float v13; // xmm5_4
  float height; // xmm4_4
  float width; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  _OWORD v19[4]; // [rsp+48h] [rbp-59h] BYREF
  __int16 v20; // [rsp+88h] [rbp-19h]
  __int128 v21; // [rsp+98h] [rbp-9h] BYREF

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
    if ( CCompositionSurfaceBitmap::UseLayoutSizeForBounds(this, a2) && SizePreference != 1 )
    {
      v21 = 0LL;
      if ( v5 )
        CMILMatrix::Transform2DBoundsHelper<0>(a3);
      else
        v21 = *a4;
      if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v21) )
      {
        v12 = *((float *)&v21 + 2) - *(float *)&v21;
        v13 = *((float *)&v21 + 3) - *((float *)&v21 + 1);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2->width - (float)(*((float *)&v21 + 2) - *(float *)&v21)) & _xmm) > 0.00390625
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(a2->height - v13) & _xmm) > 0.00390625 )
        {
          height = a2->height;
          v19[1] = _xmm;
          v19[3] = _xmm;
          width = a2->width;
          v19[0] = _xmm;
          v19[2] = _xmm;
          v20 = 32085;
          v16 = width / v12;
          if ( SizePreference )
          {
            v17 = 0.0;
            v18 = 0.0;
            if ( height < (float)(v16 * v13) )
            {
              v16 = height / v13;
              v17 = (float)(a2->width - (float)((float)(height / v13) * v12)) * 0.5;
            }
            else
            {
              v18 = (float)(height - (float)(v16 * v13)) * 0.5;
            }
            CMILMatrix::Set2DScaleAndOffset((CMILMatrix *)v19, v16, v16, v17, v18);
          }
          else
          {
            CMILMatrix::SetScale((CMILMatrix *)v19, v16, height / v13, 1.0, 0.0, 0.0, 0.0);
          }
          CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v19);
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
    *((_WORD *)a3 + 32) = 32085;
    *((_QWORD *)a4 + 1) = 0LL;
    *(_QWORD *)a4 = 0LL;
  }
  return v5;
}
