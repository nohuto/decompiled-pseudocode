/*
 * XREFs of ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18008EE10
 * Callers:
 *     ?ResetBackBuffer@CLegacySwapChain@@MEAAJXZ @ 0x18008EC90 (-ResetBackBuffer@CLegacySwapChain@@MEAAJXZ.c)
 *     ?UpdateBackBufferTextureTarget@CDDisplaySwapChain@@IEAAJXZ @ 0x180239140 (-UpdateBackBufferTextureTarget@CDDisplaySwapChain@@IEAAJXZ.c)
 *     ?Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z @ 0x18024E968 (-Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?ResetBackBuffer@CCompSwapChain@@IEAAJXZ @ 0x18024FC2C (-ResetBackBuffer@CCompSwapChain@@IEAAJXZ.c)
 *     ?EnsureRenderTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180261C98 (-EnsureRenderTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x180090E30 (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::CreateDeviceTextureTarget(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        _QWORD *a8)
{
  int v11; // ebx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-89h]
  unsigned __int64 v20; // [rsp+58h] [rbp-51h] BYREF
  int v21; // [rsp+60h] [rbp-49h]
  int v22; // [rsp+64h] [rbp-45h]
  int v23; // [rsp+68h] [rbp-41h]
  __int64 v24; // [rsp+6Ch] [rbp-3Dh]
  int v25; // [rsp+74h] [rbp-35h]
  __int128 v26; // [rsp+78h] [rbp-31h] BYREF
  __int128 v27; // [rsp+88h] [rbp-21h]
  __int64 v28; // [rsp+98h] [rbp-11h]
  int v29; // [rsp+A0h] [rbp-9h]

  v24 = 0LL;
  v25 = 0;
  v28 = 0LL;
  *a8 = 0LL;
  v11 = *(_DWORD *)(a1 + 1128);
  v29 = 0;
  v26 = 0LL;
  v27 = 0LL;
  if ( v11 < 0 )
  {
    v18 = 1703;
    goto LABEL_10;
  }
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 80LL))(a2, &v26);
  if ( (v28 & 0x20) == 0 )
  {
    v11 = -2147024809;
    v18 = 1708;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_1802AB078, 2u, v11, v18, 0LL);
    return (unsigned int)v11;
  }
  v20 = __PAIR64__(a3, v27);
  v13 = 1;
  v21 = 1119879168;
  v22 = 1119879168;
  if ( (v28 & 8) == 0 )
    v13 = 3;
  v14 = *(_QWORD *)(a1 + 224);
  v23 = v13;
  v15 = CDeviceTextureTarget::Create(v14, a2, &v26, &v20, a4, a5, a6, a7, a8);
  v11 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802AB078, 2u, v15, 0x6C2u, 0LL);
  return (unsigned int)v11;
}
