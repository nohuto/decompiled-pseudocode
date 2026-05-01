/*
 * XREFs of ?CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z @ 0x1800EE65C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2 @ 0x1800D6AA0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 * Callees:
 *     CoCreateInstance_0 @ 0x18008E7DF (CoCreateInstance_0.c)
 *     ?ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z @ 0x1800D3F7C (-ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@.c)
 *     ?CreateIconFromBitmap@@YAJIPEAUHBITMAP__@@PEAPEAUHICON__@@@Z @ 0x1800EE510 (-CreateIconFromBitmap@@YAJIPEAUHBITMAP__@@PEAPEAUHICON__@@@Z.c)
 *     ?ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x1800EE7A0 (-ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@UtagSIZE@@_NPEAPEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAUIWICBitmapSource@@PEAPEAUIWICBitmapFrameDecode@@PEAU_GUID@@@Z @ 0x180271F78 (-LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAU.c)
 *     ??1?$CAutoHandle@PEAUHFONT__@@@@QEAA@XZ @ 0x180384F4C (--1-$CAutoHandle@PEAUHFONT__@@@@QEAA@XZ.c)
 */

__int64 __fastcall CreateIconFromStreamWithWIC(HICON *a1, struct IStream *a2, unsigned int a3, __int64 a4, HICON *a5)
{
  HICON *v5; // rsi
  HICON *v8; // rcx
  int Instance_0; // ebx
  bool v10; // r9
  LPVOID *ppv; // [rsp+20h] [rbp-30h]
  HBITMAP v13; // [rsp+30h] [rbp-20h] BYREF
  struct IWICBitmapSource *v14; // [rsp+38h] [rbp-18h] BYREF
  struct tagSIZE v15; // [rsp+40h] [rbp-10h]
  HBITMAP v16; // [rsp+70h] [rbp+20h] BYREF

  v5 = a5;
  a5 = a1;
  *v5 = 0LL;
  if ( !a1 || ((*((void (__fastcall **)(HICON *))*a1 + 1))(a1), (v8 = a5) == 0LL) )
  {
    Instance_0 = CoCreateInstance_0(
                   &CLSID_WICImagingFactory2,
                   0LL,
                   1u,
                   &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
                   (LPVOID *)&a5);
    if ( Instance_0 < 0 )
      goto LABEL_13;
    v8 = a5;
  }
  v14 = 0LL;
  Instance_0 = LoadImageWithWIC(v8, a2, 2LL, &v14, ppv);
  if ( Instance_0 >= 0 )
  {
    v13 = 0LL;
    Instance_0 = ConvertWICBitmapToHBITMAP((struct IWICImagingFactory *)a5, v14, &v13);
    if ( Instance_0 >= 0 )
    {
      v16 = 0LL;
      v15.cx = a3;
      v15.cy = a3;
      Instance_0 = ScaleImageWithWIC((struct IWICImagingFactory *)a5, v13, v15, v10, &v16);
      if ( Instance_0 >= 0 )
        Instance_0 = CreateIconFromBitmap(a3, v16, v5);
      CAutoHandle<HFONT__ *>::~CAutoHandle<HFONT__ *>(&v16);
    }
    CAutoHandle<HFONT__ *>::~CAutoHandle<HFONT__ *>(&v13);
  }
  if ( v14 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v14->lpVtbl->Release)(v14);
LABEL_13:
  if ( a5 )
    (*((void (__fastcall **)(HICON *))*a5 + 2))(a5);
  return (unsigned int)Instance_0;
}
