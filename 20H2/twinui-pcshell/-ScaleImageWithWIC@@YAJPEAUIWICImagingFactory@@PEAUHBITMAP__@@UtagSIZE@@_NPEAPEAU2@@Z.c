/*
 * XREFs of ?ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x1800EFCC0
 * Callers:
 *     ?CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z @ 0x1800EFB7C (-CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z @ 0x1800D57BC (-ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@.c)
 *     ?ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x1800EFD80 (-ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@UtagSIZE@@_NPEAPEAU2@@Z.c)
 *     ?ConvertHBITMAPToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@W4WICBitmapAlphaChannelOption@@PEAPEAUIWICBitmapSource@@@Z @ 0x180384D80 (-ConvertHBITMAPToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@W4WICBitmapAlphaChannelOpt.c)
 */

__int64 __fastcall ScaleImageWithWIC(
        struct IWICImagingFactory *a1,
        HBITMAP a2,
        struct tagSIZE a3,
        __int64 a4,
        HBITMAP *a5)
{
  HBITMAP *v5; // r14
  enum WICBitmapAlphaChannelOption v9; // r8d
  int v10; // edi
  bool v11; // r9
  struct IWICBitmapSource *v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = a5;
  v13[0] = 0LL;
  *a5 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
  v10 = ConvertHBITMAPToWICBitmap(a1, a2, v9, v13);
  if ( v10 >= 0 )
  {
    a5 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
    v10 = ScaleImageWithWIC(a1, v13[0], a3, v11, (struct IWICBitmapSource **)&a5);
    if ( v10 >= 0 )
      v10 = ConvertWICBitmapToHBITMAP(a1, (struct IWICBitmapSource *)a5, v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
  return (unsigned int)v10;
}
