/*
 * XREFs of ?GetCurrentRealization@CDrawListBitmap@@IEBAJPEAPEAVIBitmapRealization@@@Z @ 0x18004ECB8
 * Callers:
 *     ?RecordContentInfo@CDrawListBitmap@@QEBAXPEAVCDrawingContext@@@Z @ 0x18003AE50 (-RecordContentInfo@CDrawListBitmap@@QEBAXPEAVCDrawingContext@@@Z.c)
 *     ?GetD2DBitmap@CDrawListBitmap@@QEBAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18003AEC0 (-GetD2DBitmap@CDrawListBitmap@@QEBAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x18003F3C0 (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18004C5B8 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?IsProtected@CDrawListBitmap@@QEBA_NXZ @ 0x18004C768 (-IsProtected@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?GetShaderResourceView@CDrawListBitmap@@QEBAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@Z @ 0x18004E24C (-GetShaderResourceView@CDrawListBitmap@@QEBAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@.c)
 *     ?UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x18004EA90 (-UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x18004F084 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUMil.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListBitmap::GetCurrentRealization(CDrawListBitmap *this, struct IBitmapRealization **a2)
{
  __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = *(_QWORD *)this;
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, struct IBitmapRealization **))(*(_QWORD *)v4 + 48LL))(v4, a2);
  v6 = *((_QWORD *)this + 1);
  *a2 = (struct IBitmapRealization *)v6;
  v7 = v6 + 8 + *(int *)(*(_QWORD *)(v6 + 8) + 4LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  return 0LL;
}
