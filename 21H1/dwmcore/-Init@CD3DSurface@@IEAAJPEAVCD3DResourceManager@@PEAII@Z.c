/*
 * XREFs of ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x18024B930
 * Callers:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x18024B718 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18009009C (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800B94A0 (-CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DE.c)
 *     ?CreateRenderTargetView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@PEAPEAUID3D11RenderTargetView@@@Z @ 0x1800D6F5C (-CreateRenderTargetView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x18023BE9C (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 *     ?GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x18024B7E8 (-GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18024B880 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall CD3DSurface::Init(
        CD3DSurface *this,
        struct CD3DResourceManager *a2,
        struct IDXGIResource *a3,
        int a4)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // edi
  int v9; // ecx
  int PixelFormatColorSpace; // eax
  __int64 v11; // rcx
  int v12; // eax
  struct CD3DResourceManager *v13; // rax
  struct CD3DResourceManager **v14; // r8
  unsigned int v15; // eax
  bool v16; // cc
  const struct D3D11_RENDER_TARGET_VIEW_DESC *v17; // r8
  bool v18; // cc
  const struct D3D11_SHADER_RESOURCE_VIEW_DESC *v19; // r8
  unsigned int v21; // [rsp+20h] [rbp-30h]
  int v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+34h] [rbp-1Ch]
  int v24; // [rsp+3Ch] [rbp-14h]
  int v25; // [rsp+40h] [rbp-10h]
  int v26; // [rsp+44h] [rbp-Ch]
  struct IDXGIResource *v27; // [rsp+80h] [rbp+30h] BYREF
  int v28; // [rsp+88h] [rbp+38h] BYREF

  v28 = a4;
  v27 = a3;
  v6 = *((_QWORD *)this + 16);
  v27 = 0LL;
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 80LL))(v6, (char *)this + 140);
  if ( !*((_DWORD *)this + 38) )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0x9Du, 0LL);
    goto LABEL_34;
  }
  v9 = *((_DWORD *)this + 39);
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 46) = HasAlphaChannel(v9) ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(*((_DWORD *)this + 39), (enum DXGI_COLOR_SPACE_TYPE *)this + 47);
  v8 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v21 = 176;
    goto LABEL_33;
  }
  v12 = (*(__int64 (__fastcall **)(CD3DSurface *))(*(_QWORD *)this + 32LL))(this);
  *((_BYTE *)this + 86) = 1;
  *((_DWORD *)this + 20) = v12;
  v13 = (CD3DSurface *)((char *)this + 40);
  *((_QWORD *)this + 2) = a2;
  v14 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 5);
  if ( *v14 != (struct CD3DResourceManager *)((char *)a2 + 32) )
    __fastfail(3u);
  *(_QWORD *)v13 = (char *)a2 + 32;
  *((_QWORD *)this + 6) = v14;
  *v14 = v13;
  *((_QWORD *)a2 + 5) = v13;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 24LL))((char *)this + 24) )
    *((_BYTE *)this + 85) = 1;
  if ( *((_BYTE *)this + 84) )
  {
    *((_BYTE *)this + 84) = 1;
    ++*((_DWORD *)a2 + 18);
    if ( *((_BYTE *)this + 85) )
      CD2DContext::AddHwProtectedResource((CD2DContext *)(*((_QWORD *)a2 + 10) + 16LL));
  }
  *((_DWORD *)a2 + 12) += *((_DWORD *)this + 20);
  v15 = *((_DWORD *)a2 + 12);
  if ( *((_DWORD *)a2 + 13) < v15 )
    *((_DWORD *)a2 + 13) = v15;
  PixelFormatColorSpace = CD3DSurface::GetDXGIResource(this, &v27);
  v8 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v21 = 190;
    goto LABEL_33;
  }
  PixelFormatColorSpace = ((__int64 (__fastcall *)(struct IDXGIResource *, int *))v27->lpVtbl->GetUsage)(v27, &v28);
  v8 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v21 = 192;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, PixelFormatColorSpace, v21, 0LL);
    goto LABEL_34;
  }
  if ( (*((_BYTE *)this + 172) & 0x20) != 0 && (v28 & 0x100) == 0 )
  {
    v16 = *((_DWORD *)this + 38) <= 1u;
    if ( *((_DWORD *)this + 38) > 1u )
    {
      v22 = *((_DWORD *)this + 39);
      v24 = *((_DWORD *)this + 34);
      v23 = 5LL;
      v25 = 1;
    }
    v17 = (const struct D3D11_RENDER_TARGET_VIEW_DESC *)&v22;
    if ( v16 )
      v17 = 0LL;
    PixelFormatColorSpace = CD3DDevice::CreateRenderTargetView(
                              *(CD3DDevice **)(*((_QWORD *)this + 2) + 80LL),
                              *((struct ID3D11Resource **)this + 16),
                              v17,
                              (struct ID3D11RenderTargetView **)this + 24);
    v8 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v21 = 216;
      goto LABEL_33;
    }
  }
  if ( (*((_BYTE *)this + 172) & 8) != 0 )
  {
    v18 = *((_DWORD *)this + 38) <= 1u;
    if ( *((_DWORD *)this + 38) > 1u )
    {
      v22 = *((_DWORD *)this + 39);
      v24 = *((_DWORD *)this + 37);
      v25 = *((_DWORD *)this + 34);
      v23 = 5LL;
      v26 = 1;
    }
    v19 = (const struct D3D11_SHADER_RESOURCE_VIEW_DESC *)&v22;
    if ( v18 )
      v19 = 0LL;
    PixelFormatColorSpace = CD3DDevice::CreateShaderResourceView(
                              *(CD3DDevice **)(*((_QWORD *)this + 2) + 80LL),
                              *((struct ID3D11Resource **)this + 16),
                              v19,
                              (struct ID3D11ShaderResourceView **)this + 25);
    v8 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v21 = 238;
      goto LABEL_33;
    }
  }
LABEL_34:
  if ( v27 )
    ((void (__fastcall *)(struct IDXGIResource *))v27->lpVtbl->Release)(v27);
  return v8;
}
