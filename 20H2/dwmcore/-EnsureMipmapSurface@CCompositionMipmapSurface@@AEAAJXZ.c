/*
 * XREFs of ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1801B9A3C
 * Callers:
 *     ?OnSceneReady@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801B9D10 (-OnSceneReady@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x180052124 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006AB34 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CFC44 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B8BB8 (-InternalRelease@-$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x180247C3C (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 */

__int64 __fastcall CCompositionMipmapSurface::EnsureMipmapSurface(struct _LUID *this)
{
  unsigned int v1; // ebx
  __int64 *v2; // rsi
  CDeviceManager *v4; // rcx
  int ExistingDevice; // eax
  __int64 v6; // rcx
  LONG HighPart; // eax
  struct D3D11_SUBRESOURCE_DATA *v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  _BYTE *v12; // rdx
  struct CD3DDevice *v14; // [rsp+38h] [rbp-19h] BYREF
  __int128 v15; // [rsp+40h] [rbp-11h] BYREF
  _DWORD v16[12]; // [rsp+58h] [rbp+7h] BYREF
  __int128 v17; // [rsp+88h] [rbp+37h]

  v1 = 0;
  v2 = (__int64 *)&this[20];
  if ( !*(_QWORD *)&this[20] )
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease(&v14);
    ExistingDevice = CDeviceManager::GetExistingDevice(v4, this[14], &v14);
    v1 = ExistingDevice;
    if ( ExistingDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, ExistingDevice, 0x144u, 0LL);
    }
    else
    {
      v16[6] = 0;
      v16[7] = 0;
      v16[9] = 0;
      v16[10] = 0;
      *(_QWORD *)&v15 = "DWM Composition Mipmap Surface";
      v16[0] = this[15].LowPart;
      v16[1] = this[15].HighPart;
      v16[2] = this[16].LowPart;
      HighPart = this[16].HighPart;
      DWORD2(v15) = 30;
      v16[4] = HighPart;
      v16[3] = 1;
      v17 = v15;
      v16[5] = 1;
      v16[8] = 8;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v2);
      v9 = CD3DSurface::Create(
             (struct CD3DDevice *)((char *)v14 + 1136),
             (const struct DWM_TEXTURE2D_DESC *)v16,
             v8,
             (struct CD3DSurface **)v2);
      v1 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x156u, 0LL);
      }
      else
      {
        v11 = *v2 + 88;
        *(_QWORD *)&v15 = this + 9;
        v12 = *(_BYTE **)(v11 + 8);
        if ( *(_BYTE **)(v11 + 16) == v12 )
        {
          std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>(
            (const void **)v11,
            v12,
            &v15);
        }
        else
        {
          *(_QWORD *)v12 = this + 9;
          *(_QWORD *)(v11 + 8) += 8LL;
        }
        LOBYTE(this[19].LowPart) = 1;
      }
    }
    Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease(&v14);
  }
  return v1;
}
