/*
 * XREFs of ?CreateSurfaceBrushUsingWIC@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIStream@@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x18026E06C
 * Callers:
 *     ?CreateStaticThumbnailVisual@TabViewManager@@AEAA?AV?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIShellTabImage@Tabs@ComposableShell@Internal@7@AEBUSize@Foundation@7@@Z @ 0x18026D788 (-CreateStaticThumbnailVisual@TabViewManager@@AEAA-AV-$com_ptr_t@UIVisual@Composition@UI@Windows@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConvertIWICBitmapSourcePixelFormat@@YAJPEAUIWICBitmapSource@@U_GUID@@PEAUIWICImagingFactory@@PEAPEAU1@@Z @ 0x18026D34C (-ConvertIWICBitmapSourcePixelFormat@@YAJPEAUIWICBitmapSource@@U_GUID@@PEAUIWICImagingFactory@@PE.c)
 *     ?CreateSurfaceBrushFromIWICBitmapSource@@YAJPEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIWICBitmapSource@@PEAPEAUICompositionSurfaceBrush@234@@Z @ 0x18026DAB0 (-CreateSurfaceBrushFromIWICBitmapSource@@YAJPEAUICompositor@Composition@UI@Windows@@PEAUIUnknown.c)
 *     ?LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAUIWICBitmapSource@@PEAPEAUIWICBitmapFrameDecode@@PEAU_GUID@@@Z @ 0x180271F78 (-LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAU.c)
 */

__int64 __fastcall TabViewManager::CreateSurfaceBrushUsingWIC(
        TabViewManager *this,
        __int64 (__fastcall ***a2)(struct Windows::UI::Composition::ICompositor *, GUID *, __int64 *),
        struct IUnknown *a3,
        struct IStream *a4,
        struct IWICBitmapSource *a5)
{
  struct Windows::UI::Composition::ICompositionSurfaceBrush **v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  int SurfaceBrushFromIWICBitmapSource; // eax
  __int64 v12; // rdx
  __int64 v14; // [rsp+20h] [rbp-20h]
  struct _GUID v15; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IWICBitmapSource *v17; // [rsp+60h] [rbp+20h] BYREF

  v8 = (struct Windows::UI::Composition::ICompositionSurfaceBrush **)a5;
  a5->lpVtbl = 0LL;
  v17 = 0LL;
  v9 = LoadImageWithWIC(*((_QWORD *)this + 177), a4, 2LL, &v17, v14);
  v10 = v9;
  if ( v9 >= 0 )
  {
    a5 = 0LL;
    v15 = GUID_WICPixelFormat32bppRGB;
    SurfaceBrushFromIWICBitmapSource = ConvertIWICBitmapSourcePixelFormat(
                                         v17,
                                         &v15,
                                         *((struct IWICImagingFactory **)this + 177),
                                         &a5);
    v10 = SurfaceBrushFromIWICBitmapSource;
    if ( SurfaceBrushFromIWICBitmapSource >= 0 )
    {
      SurfaceBrushFromIWICBitmapSource = CreateSurfaceBrushFromIWICBitmapSource(a2, a3, a5, v8);
      v10 = SurfaceBrushFromIWICBitmapSource;
      if ( SurfaceBrushFromIWICBitmapSource >= 0 )
      {
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&a5);
        v10 = 0;
        goto LABEL_9;
      }
      v12 = 2829LL;
    }
    else
    {
      v12 = 2827LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)SurfaceBrushFromIWICBitmapSource);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&a5);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB07,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v9);
  }
LABEL_9:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
  return v10;
}
