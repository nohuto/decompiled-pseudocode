/*
 * XREFs of ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800927B4
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18003C2A8 (-Update@CSecondaryD2DBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x18008F15C (-CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x18008F444 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180091280 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?Update@CSecondarySysmemBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800914B4 (-Update@CSecondarySysmemBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x180091708 (-Initialize@CSecondarySysmemBitmap@@IEAAJXZ.c)
 *     ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180091830 (-LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x180091B70 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180091BF0 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180092230 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800923A8 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x1800924B4 (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x180092768 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1800DFF20 (-EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 *     ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18019D6F0 (-CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rect.c)
 *     _lambda_05398b4549421d065ab404e0dbeea144_::operator() @ 0x1801E9D68 (_lambda_05398b4549421d065ab404e0dbeea144_--operator().c)
 *     ?DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18020F684 (-DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     IsSolidColorSurface @ 0x18020FC30 (IsSolidColorSurface.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x18021698C (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x180216A98 (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x180216C40 (-HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x180216FEC (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 *     ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x180217B1C (-HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlag.c)
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180218280 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180246F90 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?GetResourceSize@CD3DSurface@@MEBAIXZ @ 0x180248E60 (-GetResourceSize@CD3DSurface@@MEBAIXZ.c)
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18024AC60 (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ @ 0x1802611B0 (-EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ.c)
 *     ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x18026B9E4 (-InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall GetPixelFormatSize(int a1)
{
  if ( a1 <= 49 )
  {
    if ( a1 != 49 )
    {
      if ( a1 == 2 )
        return 0x80;
      if ( a1 == 6 )
        return 96;
      if ( a1 > 9 )
      {
        if ( a1 <= 11 || a1 == 16 )
          return 64;
        if ( a1 == 24 || a1 == 28 || a1 == 42 )
          return 32;
      }
      return 0;
    }
    return 16;
  }
  if ( a1 == 57 )
    return 16;
  if ( a1 == 61 || a1 == 65 )
    return 8;
  if ( a1 <= 86 )
    return 0;
  if ( a1 <= 88 || a1 == 91 )
    return 32;
  if ( a1 != 103 && (unsigned int)(a1 - 106) > 1 )
    return 0;
  return 12;
}
