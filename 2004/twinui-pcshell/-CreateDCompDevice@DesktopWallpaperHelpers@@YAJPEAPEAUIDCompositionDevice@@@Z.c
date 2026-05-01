/*
 * XREFs of ?CreateDCompDevice@DesktopWallpaperHelpers@@YAJPEAPEAUIDCompositionDevice@@@Z @ 0x1801D3488
 * Callers:
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x1801D53CC (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DesktopWallpaperHelpers::CreateDCompDevice(
        DesktopWallpaperHelpers *this,
        struct IDCompositionDevice **a2)
{
  unsigned int v3; // edi
  D3D_DRIVER_TYPE *v4; // rsi
  HRESULT Device2; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  ID3D11Device *v8; // rbx
  HRESULT (__stdcall *QueryInterface)(ID3D11Device *, const IID *const, void **); // rdi
  _DWORD v11[4]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+90h] [rbp+30h] BYREF
  ID3D11Device *ppDevice; // [rsp+98h] [rbp+38h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+40h] BYREF
  ID3D11DeviceContext *ppImmediateContext; // [rsp+A8h] [rbp+48h] BYREF

  *(_QWORD *)this = 0LL;
  v15 = 0LL;
  ppDevice = 0LL;
  ppImmediateContext = 0LL;
  v11[0] = 1;
  v11[1] = 5;
  v3 = 0;
  v4 = (D3D_DRIVER_TYPE *)v11;
  while ( 1 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppImmediateContext);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppDevice);
    Device2 = D3D11CreateDevice(0LL, *v4, 0LL, 0x20u, 0LL, 0, 7u, &ppDevice, &pFeatureLevel, &ppImmediateContext);
    v6 = Device2;
    if ( Device2 >= 0 )
      break;
    ++v3;
    ++v4;
    if ( v3 >= 2 )
    {
      v7 = 107LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"internal\\pcshellshell\\private\\inc\\DesktopWallpaperHelpers.h",
        (const char *)(unsigned int)Device2);
      goto LABEL_11;
    }
  }
  v8 = ppDevice;
  QueryInterface = ppDevice->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  Device2 = ((__int64 (__fastcall *)(ID3D11Device *, GUID *, __int64 *))QueryInterface)(
              v8,
              &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,
              &v15);
  v6 = Device2;
  if ( Device2 < 0 )
  {
    v7 = 108LL;
    goto LABEL_7;
  }
  Device2 = DCompositionCreateDevice2(v15, &GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3, this);
  v6 = Device2;
  if ( Device2 < 0 )
  {
    v7 = 109LL;
    goto LABEL_7;
  }
  v6 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppImmediateContext);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppDevice);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return v6;
}
