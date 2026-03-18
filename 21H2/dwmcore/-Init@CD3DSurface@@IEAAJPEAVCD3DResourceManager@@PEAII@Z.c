/*
 * XREFs of ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x18028C6C8
 * Callers:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x18028C458 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180060C2C (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?CreateRenderTargetView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@PEAPEAUID3D11RenderTargetView@@@Z @ 0x18006B6B8 (-CreateRenderTargetView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800CCC80 (-CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180277788 (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 *     ?GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x18028C52C (-GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18028C5D0 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall CD3DSurface::Init(
        CD3DSurface *this,
        struct CD3DResourceManager *a2,
        struct IDXGIResource *a3,
        int a4)
{
  __int64 v5; // rcx
  __int64 v7; // rcx
  unsigned int v8; // edi
  int v9; // ecx
  int v10; // ecx
  int PixelFormatColorSpace; // eax
  __int64 v12; // rcx
  int v13; // eax
  struct CD3DResourceManager *v14; // rax
  struct CD3DResourceManager **v15; // r8
  unsigned int v16; // eax
  bool v17; // cc
  const struct D3D11_RENDER_TARGET_VIEW_DESC *v18; // r8
  bool v19; // cc
  const struct D3D11_SHADER_RESOURCE_VIEW_DESC *v20; // r8
  unsigned int v22; // [rsp+20h] [rbp-30h]
  int v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+34h] [rbp-1Ch]
  int v25; // [rsp+3Ch] [rbp-14h]
  int v26; // [rsp+40h] [rbp-10h]
  int v27; // [rsp+44h] [rbp-Ch]
  struct IDXGIResource *v28; // [rsp+80h] [rbp+30h] BYREF
  int v29; // [rsp+88h] [rbp+38h] BYREF

  v29 = a4;
  v28 = a3;
  v5 = *((_QWORD *)this + 14);
  v28 = 0LL;
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 80LL))(v5, (char *)this + 124);
  if ( !*((_DWORD *)this + 34) )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024809, 0x9Du);
    goto LABEL_34;
  }
  v9 = *((_DWORD *)this + 35);
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 42) = HasAlphaChannel(v9) ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v10, (enum DXGI_COLOR_SPACE_TYPE *)this + 43);
  v8 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v22 = 176;
    goto LABEL_33;
  }
  v13 = (*(__int64 (__fastcall **)(CD3DSurface *))(*(_QWORD *)this + 88LL))(this);
  *((_BYTE *)this + 70) = 1;
  *((_DWORD *)this + 16) = v13;
  v14 = (CD3DSurface *)((char *)this + 32);
  *((_QWORD *)this + 3) = a2;
  v15 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 5);
  if ( *v15 != (struct CD3DResourceManager *)((char *)a2 + 32) )
    __fastfail(3u);
  *(_QWORD *)v14 = (char *)a2 + 32;
  *((_QWORD *)this + 5) = v15;
  *v15 = v14;
  *((_QWORD *)a2 + 5) = v14;
  if ( (*(unsigned __int8 (__fastcall **)(CD3DSurface *))(*(_QWORD *)this + 24LL))(this) )
    *((_BYTE *)this + 69) = 1;
  if ( *((_BYTE *)this + 68) )
  {
    *((_BYTE *)this + 68) = 1;
    ++*((_DWORD *)a2 + 18);
    if ( *((_BYTE *)this + 69) )
      CD2DContext::AddHwProtectedResource((CD2DContext *)(*((_QWORD *)a2 + 10) + 16LL));
  }
  *((_DWORD *)a2 + 12) += *((_DWORD *)this + 16);
  v16 = *((_DWORD *)a2 + 12);
  if ( *((_DWORD *)a2 + 13) < v16 )
    *((_DWORD *)a2 + 13) = v16;
  PixelFormatColorSpace = CD3DSurface::GetDXGIResource(this, &v28);
  v8 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v22 = 190;
    goto LABEL_33;
  }
  PixelFormatColorSpace = ((__int64 (__fastcall *)(struct IDXGIResource *, int *))v28->lpVtbl->GetUsage)(v28, &v29);
  v8 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v22 = 192;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, PixelFormatColorSpace, v22);
    goto LABEL_34;
  }
  if ( (*((_BYTE *)this + 156) & 0x20) != 0 && (v29 & 0x100) == 0 )
  {
    v17 = *((_DWORD *)this + 34) <= 1u;
    if ( *((_DWORD *)this + 34) > 1u )
    {
      v23 = *((_DWORD *)this + 35);
      v25 = *((_DWORD *)this + 30);
      v24 = 5LL;
      v26 = 1;
    }
    v18 = (const struct D3D11_RENDER_TARGET_VIEW_DESC *)&v23;
    if ( v17 )
      v18 = 0LL;
    PixelFormatColorSpace = CD3DDevice::CreateRenderTargetView(
                              *(CD3DDevice **)(*((_QWORD *)this + 3) + 80LL),
                              *((struct ID3D11Resource **)this + 14),
                              v18,
                              (struct ID3D11RenderTargetView **)this + 22);
    v8 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v22 = 216;
      goto LABEL_33;
    }
  }
  if ( (*((_BYTE *)this + 156) & 8) != 0 )
  {
    v19 = *((_DWORD *)this + 34) <= 1u;
    if ( *((_DWORD *)this + 34) > 1u )
    {
      v23 = *((_DWORD *)this + 35);
      v25 = *((_DWORD *)this + 33);
      v26 = *((_DWORD *)this + 30);
      v24 = 5LL;
      v27 = 1;
    }
    v20 = (const struct D3D11_SHADER_RESOURCE_VIEW_DESC *)&v23;
    if ( v19 )
      v20 = 0LL;
    PixelFormatColorSpace = CD3DDevice::CreateShaderResourceView(
                              *(CD3DDevice **)(*((_QWORD *)this + 3) + 80LL),
                              *((struct ID3D11Resource **)this + 14),
                              v20,
                              (struct ID3D11ShaderResourceView **)this + 23);
    v8 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v22 = 238;
      goto LABEL_33;
    }
  }
LABEL_34:
  if ( v28 )
    ((void (__fastcall *)(struct IDXGIResource *))v28->lpVtbl->Release)(v28);
  return v8;
}
