/*
 * XREFs of ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800066A0
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800064F4 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180105C70 (-GetBounds@CCompositionSurfaceBitmap@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 *     ?HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180113C04 (-HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetBounds@CYCbCrSurface@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180209348 (-GetBounds@CYCbCrSurface@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?GetBounds@CSynchronousSuperWetInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802412F4 (-GetBounds@CSynchronousSuperWetInk@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF.c)
 * Callees:
 *     ?UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x18000687C (-UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     ?GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@AEBA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800068E4 (-GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@AEBA_NPEAV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ @ 0x1800069D4 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetBounds(__int64 a1, __int64 a2, _DWORD *a3)
{
  CCompositionSurfaceBitmap *v3; // rsi
  struct IBitmapRealization *RenderingRealization; // r14
  __int64 v7; // rax
  char v8; // di
  _BYTE v10[64]; // [rsp+20h] [rbp-39h] BYREF
  int v11; // [rsp+60h] [rbp+7h]
  __int128 v12; // [rsp+70h] [rbp+17h] BYREF
  __int128 v13; // [rsp+80h] [rbp+27h] BYREF

  v3 = (CCompositionSurfaceBitmap *)(a1 - 224);
  RenderingRealization = CCompositionSurfaceBitmap::GetRenderingRealization((CCompositionSurfaceBitmap *)(a1 - 224));
  if ( RenderingRealization )
  {
    if ( CCompositionSurfaceBitmap::UseLayoutSizeForBounds(v3, (const struct D2D_SIZE_F *)a2) )
    {
      *a3 = 0;
      a3[1] = 0;
      a3[2] = *(_DWORD *)a2;
      a3[3] = *(_DWORD *)(a2 + 4);
    }
    else
    {
      v11 = 0;
      v7 = *(_QWORD *)RenderingRealization;
      v12 = 0LL;
      v8 = (*(__int64 (__fastcall **)(struct IBitmapRealization *, _BYTE *, __int128 *))(v7 + 8))(
             RenderingRealization,
             v10,
             &v12);
      v13 = 0LL;
      if ( (unsigned __int8)CCompositionSurfaceBitmap::GetScaledLetterboxingMargins(v3, &v13) )
      {
        *((float *)&v12 + 2) = *((float *)&v12 + 2) + (float)(*((float *)&v13 + 2) + *(float *)&v13);
        *((float *)&v12 + 3) = *((float *)&v12 + 3) + (float)(*((float *)&v13 + 3) + *((float *)&v13 + 1));
      }
      if ( v8 )
        CMILMatrix::Transform2DBoundsHelper<0>(v10, &v12, a3);
      else
        *(_OWORD *)a3 = v12;
    }
  }
  else
  {
    a3[3] = 0;
    a3[2] = 0;
    a3[1] = 0;
    *a3 = 0;
  }
  return 0LL;
}
