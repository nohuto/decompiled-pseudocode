/*
 * XREFs of ?ScaleWICBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@W4WICBitmapInterpolationMode@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x1800EFE68
 * Callers:
 *     ?ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x1800EFD80 (-ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@UtagSIZE@@_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     MulDiv_0 @ 0x18008E570 (MulDiv_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ScaleWICBitmapSource(
        struct IWICImagingFactory *a1,
        struct IWICBitmapSource *a2,
        int a3,
        struct tagSIZE a4,
        unsigned int nNumerator,
        struct IWICBitmapSource **a6)
{
  struct IWICBitmapSource **v6; // r14
  unsigned int cx; // ebx
  int v10; // esi
  unsigned int cy; // edi
  struct IWICBitmapSource **v12; // rax
  int nDenominator; // [rsp+70h] [rbp+40h] BYREF
  struct tagSIZE v15; // [rsp+78h] [rbp+48h]

  v15 = a4;
  nDenominator = a3;
  v6 = a6;
  cx = a4.cx;
  *a6 = 0LL;
  v10 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, int *, unsigned int *))a2->lpVtbl->GetSize)(
          a2,
          &nDenominator,
          &nNumerator);
  if ( v10 >= 0 )
  {
    if ( nDenominator <= nNumerator )
    {
      if ( MulDiv_0(cx, nDenominator, nNumerator) <= 1 )
        cx = 1;
      else
        cx = MulDiv_0(cx, nDenominator, nNumerator);
      cy = v15.cy;
    }
    else
    {
      cy = 1;
      if ( MulDiv_0(v15.cy, nNumerator, nDenominator) > 1 )
        cy = MulDiv_0(v15.cy, nNumerator, nDenominator);
    }
    a6 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a6);
    v10 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource ***))a1->lpVtbl->CreateBitmapScaler)(
            a1,
            &a6);
    if ( v10 >= 0 )
    {
      v10 = ((__int64 (__fastcall *)(struct IWICBitmapSource **, struct IWICBitmapSource *, _QWORD, _QWORD, int))(*a6)[8].lpVtbl)(
              a6,
              a2,
              cx,
              cy,
              3);
      if ( v10 >= 0 )
      {
        v12 = a6;
        a6 = 0LL;
        *v6 = (struct IWICBitmapSource *)v12;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a6);
  }
  return (unsigned int)v10;
}
