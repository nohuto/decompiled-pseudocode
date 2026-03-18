/*
 * XREFs of ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x1802B3730
 * Callers:
 *     ?Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1802B3BCC (-Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180060C2C (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18028C5D0 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1802B3850 (-InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall CD3DTexture::Init(
        CD3DTexture *this,
        struct CD3DResourceManager *a2,
        struct ID3D11Texture2D *a3,
        unsigned int a4)
{
  int v8; // ecx
  int PixelFormatColorSpace; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-18h]

  ((void (__fastcall *)(struct ID3D11Texture2D *, char *))a3->lpVtbl->GetDesc)(a3, (char *)this + 104);
  *((_DWORD *)this + 38) = HasAlphaChannel(*((_DWORD *)this + 30)) ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v8, (enum DXGI_COLOR_SPACE_TYPE *)this + 39);
  v11 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v14 = 75;
    goto LABEL_9;
  }
  v12 = *((_DWORD *)this + 28);
  *((_DWORD *)this + 40) = v12;
  if ( (unsigned int)(v12 - 1) <= 0x1F )
  {
    *((_DWORD *)this + 37) = a4;
    if ( a4 >= *((_DWORD *)this + 29) )
    {
      v11 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, -2147467259, 0x56u);
      return v11;
    }
    PixelFormatColorSpace = CD3DTexture::InitResource(this, a2, a3);
    v11 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace >= 0 )
      return v11;
    v14 = 92;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, PixelFormatColorSpace, v14);
    return v11;
  }
  v11 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, -2147467259, 0x50u);
  return v11;
}
