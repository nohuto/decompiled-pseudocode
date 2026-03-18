/*
 * XREFs of ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x180263640
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180262B88 (-Create@CDxHandleYUVBitmapRealization@@SAJU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180262C8C (-CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUC.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x180052124 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006A610 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18006AEF0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18006AF20 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180168860 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180262DEC (-EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?GetAdapterLuid@CDxHandleYUVBitmapRealization@@UEBA?AU_LUID@@XZ @ 0x180262F74 (-GetAdapterLuid@CDxHandleYUVBitmapRealization@@UEBA-AU_LUID@@XZ.c)
 *     ?Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x18026A668 (-Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::Initialize(
        CDxHandleYUVBitmapRealization *this,
        struct IYUVSwapChainRealization *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  struct _LUID *AdapterLuid; // rax
  CDeviceManager *v8; // rcx
  int Device; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  CD3DDevice *v12; // rbx
  bool v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  CD3DDevice *v16; // rax
  __int64 v17; // rcx
  _BYTE *v18; // rdx
  CD3DDevice *v19; // rcx
  CD3DDevice *v21; // [rsp+58h] [rbp+10h] BYREF
  __int64 v22; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
  {
    v4 = CDxHandleYUVBitmapRealization::EnsureTexture(this);
    v6 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x95u, 0LL);
    return v6;
  }
  v21 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v21);
  AdapterLuid = (struct _LUID *)CDxHandleYUVBitmapRealization::GetAdapterLuid(
                                  (CDxHandleYUVBitmapRealization *)((char *)this + 456),
                                  &v22);
  Device = CDeviceManager::GetDevice(v8, *AdapterLuid, &v21);
  v6 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, Device, 0xA0u, 0LL);
    v19 = v21;
    if ( !v21 )
      return v6;
LABEL_13:
    CD3DDevice::Release(v19);
    return v6;
  }
  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((CMILPoolResource **)this + 43);
  v11 = *((_QWORD *)a2 + 2);
  v12 = v21;
  v14 = CD3DVidMemOnlyTexture::Create(
          *(struct ID3D11Texture2D **)(v11 + 112),
          *((_DWORD *)this + 60),
          v13,
          v21,
          (struct CD3DVidMemOnlyTexture **)this + 43);
  v6 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xA6u, 0LL);
  }
  else
  {
    v16 = (CDxHandleYUVBitmapRealization *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16);
    v17 = *((_QWORD *)this + 43) + 88LL;
    v21 = v16;
    v18 = *(_BYTE **)(v17 + 8);
    if ( *(_BYTE **)(v17 + 16) == v18 )
    {
      std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>(
        (const void **)v17,
        v18,
        &v21);
    }
    else
    {
      *(_QWORD *)v18 = v16;
      *(_QWORD *)(v17 + 8) += 8LL;
    }
  }
  if ( v12 )
  {
    v19 = v12;
    goto LABEL_13;
  }
  return v6;
}
