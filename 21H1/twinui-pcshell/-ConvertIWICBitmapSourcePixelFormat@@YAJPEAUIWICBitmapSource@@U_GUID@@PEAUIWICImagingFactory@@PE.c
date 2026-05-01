/*
 * XREFs of ?ConvertIWICBitmapSourcePixelFormat@@YAJPEAUIWICBitmapSource@@U_GUID@@PEAUIWICImagingFactory@@PEAPEAU1@@Z @ 0x18024B6CC
 * Callers:
 *     ?CreateSurfaceBrushUsingWIC@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIStream@@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x18024C3EC (-CreateSurfaceBrushUsingWIC@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIUn.c)
 *     ?ConvertIWICBitmapSourceTo32bppHBITMAP@@YAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAUHBITMAP__@@@Z @ 0x1803641F8 (-ConvertIWICBitmapSourceTo32bppHBITMAP@@YAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ConvertIWICBitmapSourcePixelFormat(
        struct IWICBitmapSource *a1,
        struct _GUID *a2,
        struct IWICImagingFactory *a3,
        struct IWICBitmapSource **a4)
{
  int v8; // ebx
  __int64 v9; // rcx
  HRESULT (__stdcall *CreateFormatConverter)(IWICImagingFactory *, IWICFormatConverter **); // rbx
  struct IWICBitmapSource *v11; // rax
  struct IWICBitmapSource *v13; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-40h] BYREF

  *a4 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, _QWORD *))a1->lpVtbl->GetPixelFormat)(a1, v14);
  v9 = v14[0] - *(_QWORD *)&a2->Data1;
  if ( v14[0] == *(_QWORD *)&a2->Data1 )
    v9 = v14[1] - *(_QWORD *)a2->Data4;
  if ( v9 )
  {
    v13 = 0LL;
    CreateFormatConverter = a3->lpVtbl->CreateFormatConverter;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    v8 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource **))CreateFormatConverter)(
           a3,
           &v13);
    if ( v8 >= 0 )
    {
      v8 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, struct IWICBitmapSource *, struct _GUID *, _QWORD, _QWORD, _QWORD, _DWORD))v13->lpVtbl[1].QueryInterface)(
             v13,
             a1,
             a2,
             0LL,
             0LL,
             0LL,
             0);
      if ( v8 >= 0 )
      {
        v11 = v13;
        v13 = 0LL;
        *a4 = v11;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    *a4 = a1;
    ((void (__fastcall *)(struct IWICBitmapSource *))a1->lpVtbl->AddRef)(a1);
  }
  return (unsigned int)v8;
}
