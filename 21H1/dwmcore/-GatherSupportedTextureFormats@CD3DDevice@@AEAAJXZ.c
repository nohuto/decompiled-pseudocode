/*
 * XREFs of ?GatherSupportedTextureFormats@CD3DDevice@@AEAAJXZ @ 0x1800A4000
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x1800A17D0 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckTextureFormatSupported@CD3DDevice@@AEAA_NW4DXGI_FORMAT@@@Z @ 0x1800A4184 (-CheckTextureFormatSupported@CD3DDevice@@AEAA_NW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::GatherSupportedTextureFormats(CD3DDevice *this)
{
  unsigned int v1; // esi
  __int64 v3; // rcx
  __int64 v4; // rcx
  bool v5; // di
  int v6; // edi
  int v7; // edi
  int v9; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  if ( CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R8_UNORM) )
    *((_DWORD *)this + 270) = 61;
  *((_DWORD *)this + 271) = CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_A8_UNORM) ? 65 : 87;
  if ( !CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R8G8B8A8_UNORM) )
  {
    v10 = 708;
    goto LABEL_29;
  }
  *((_DWORD *)this + 272) = 28;
  if ( !CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_B8G8R8A8_UNORM) )
  {
    v10 = 718;
    goto LABEL_29;
  }
  *((_DWORD *)this + 274) = 87;
  if ( !CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_B8G8R8X8_UNORM) )
  {
    v10 = 737;
LABEL_29:
    v1 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2003292288, v10, 0LL);
    return v1;
  }
  v4 = *((_QWORD *)this + 74);
  *((_DWORD *)this + 275) = 88;
  v5 = (*(int (__fastcall **)(__int64, __int64, int *, __int64))(*(_QWORD *)v4 + 264LL))(v4, 7LL, &v11, 4LL) >= 0 && v11;
  if ( CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R32G32B32A32_FLOAT) && v5 )
    *((_DWORD *)this + 279) = 2;
  if ( CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R16G16B16A16_FLOAT) && v5 )
  {
    *((_DWORD *)this + 277) = 10;
    if ( !*((_DWORD *)this + 279) )
      *((_DWORD *)this + 279) = 10;
  }
  else
  {
    v9 = *((_DWORD *)this + 279);
    if ( v9 )
    {
      *((_DWORD *)this + 277) = v9;
    }
    else
    {
      *((_DWORD *)this + 279) = 87;
      *((_DWORD *)this + 277) = 87;
    }
  }
  v6 = 11;
  if ( !CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R16G16B16A16_UNORM) )
    v6 = *((_DWORD *)this + 279);
  *((_DWORD *)this + 278) = v6;
  v7 = 24;
  if ( !CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R10G10B10A2_UNORM) )
    v7 = *((_DWORD *)this + 277);
  *((_DWORD *)this + 276) = v7;
  return v1;
}
