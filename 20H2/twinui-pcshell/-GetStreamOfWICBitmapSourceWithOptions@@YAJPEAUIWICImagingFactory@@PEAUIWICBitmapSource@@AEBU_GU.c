/*
 * XREFs of ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x18021C824
 * Callers:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x18021C5B0 (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 *     _anonymous_namespace_::GetBitmapStreamFromHICON @ 0x18037B9FC (_anonymous_namespace_--GetBitmapStreamFromHICON.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_GUID@@W4EncodingOptions@@@Z @ 0x18021C128 (-AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetStreamOfWICBitmapSourceWithOptions(
        void *a1,
        struct IWICBitmapSource *a2,
        __int64 a3,
        struct _GUID *a4,
        char a5,
        LPVOID ppv)
{
  _QWORD *v9; // r14
  int v10; // ebx
  IStream *v11; // rdi
  LPVOID v12; // rbx
  __int64 (__fastcall *v13)(LPVOID, __int64, GUID *, __int64 *); // rsi
  struct _GUID v15; // [rsp+40h] [rbp-10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+30h] BYREF

  v9 = ppv;
  *(_QWORD *)ppv = 0LL;
  ppv = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&ppv);
  if ( ppv
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv),
        v10 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv),
        v10 >= 0) )
  {
    v11 = SHCreateMemStream(0LL, 0);
    if ( v11 )
    {
      v16 = 0LL;
      v12 = ppv;
      v13 = *(__int64 (__fastcall **)(LPVOID, __int64, GUID *, __int64 *))(*(_QWORD *)ppv + 64LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      v10 = v13(v12, a3, &GUID_VendorMicrosoft, &v16);
      if ( v10 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, IStream *, __int64))(*(_QWORD *)v16 + 24LL))(v16, v11, 2LL);
        if ( v10 >= 0 )
        {
          v15 = *a4;
          v10 = AddFrameToWICBitmap((struct IWICImagingFactory *)ppv, v16, a2, &v15, a5);
          if ( v10 >= 0 )
          {
            v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 88LL))(v16);
            if ( v10 >= 0 )
            {
              v10 = (*(__int64 (__fastcall **)(IStream *, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 40LL))(
                      v11,
                      `GetStreamOfWICBitmapSourceWithOptions'::`23'::lnBeginning,
                      0LL,
                      0LL);
              if ( v10 >= 0 )
              {
                (*(void (__fastcall **)(IStream *))(*(_QWORD *)v11 + 8LL))(v11);
                *v9 = v11;
                v10 = 0;
              }
            }
          }
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    }
    else
    {
      v10 = -2147024882;
    }
    if ( v11 )
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v10;
}
