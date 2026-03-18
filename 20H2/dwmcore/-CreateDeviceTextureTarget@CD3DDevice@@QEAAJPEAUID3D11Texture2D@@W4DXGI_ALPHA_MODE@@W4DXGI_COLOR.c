/*
 * XREFs of ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1800D94A0
 * Callers:
 *     ?ResetBackBuffer@CLegacySwapChain@@MEAAJXZ @ 0x1800D9320 (-ResetBackBuffer@CLegacySwapChain@@MEAAJXZ.c)
 *     ?UpdateBackBufferTextureTarget@CDDisplaySwapChain@@IEAAJXZ @ 0x1802381B0 (-UpdateBackBufferTextureTarget@CDDisplaySwapChain@@IEAAJXZ.c)
 *     ?Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z @ 0x18024D9D8 (-Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?ResetBackBuffer@CCompSwapChain@@IEAAJXZ @ 0x18024EC9C (-ResetBackBuffer@CCompSwapChain@@IEAAJXZ.c)
 *     ?EnsureRenderTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180260EB8 (-EnsureRenderTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18004963C (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::CreateDeviceTextureTarget(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        unsigned __int64 *a8)
{
  int v11; // ebx
  int v13; // eax
  struct CD2DResourceManager *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  void *v18; // [rsp+20h] [rbp-89h]
  unsigned int v19; // [rsp+20h] [rbp-89h]
  __int128 v20; // [rsp+58h] [rbp-51h] BYREF
  int v21; // [rsp+68h] [rbp-41h]
  __int64 v22; // [rsp+6Ch] [rbp-3Dh]
  int v23; // [rsp+74h] [rbp-35h]
  __int128 v24; // [rsp+78h] [rbp-31h] BYREF
  __int128 v25; // [rsp+88h] [rbp-21h]
  __int64 v26; // [rsp+98h] [rbp-11h]
  int v27; // [rsp+A0h] [rbp-9h]

  v22 = 0LL;
  v23 = 0;
  v26 = 0LL;
  *a8 = 0LL;
  v11 = *(_DWORD *)(a1 + 1128);
  v27 = 0;
  v24 = 0LL;
  v25 = 0LL;
  if ( v11 < 0 )
  {
    v19 = 1703;
    goto LABEL_10;
  }
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 80LL))(a2, &v24);
  if ( (v26 & 0x20) == 0 )
  {
    v11 = -2147024809;
    v19 = 1708;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_1802AA538, 2u, v11, v19, 0LL);
    return (unsigned int)v11;
  }
  *(_QWORD *)&v20 = __PAIR64__(a3, v25);
  v13 = 1;
  *((_QWORD *)&v20 + 1) = 0x42C0000042C00000LL;
  if ( (v26 & 8) == 0 )
    v13 = 3;
  v14 = *(struct CD2DResourceManager **)(a1 + 224);
  v21 = v13;
  LODWORD(v18) = a4;
  v15 = CDeviceTextureTarget::Create(v14, a2, (__int64)&v24, &v20, v18, a5, a6, a7, a8);
  v11 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802AA538, 2u, v15, 0x6C2u, 0LL);
  return (unsigned int)v11;
}
