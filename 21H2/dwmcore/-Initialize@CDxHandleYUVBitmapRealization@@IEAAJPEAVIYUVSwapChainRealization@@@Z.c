/*
 * XREFs of ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x1802A5EB0
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802A52AC (-Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIB.c)
 *     ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802A53C0 (-CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUC.c)
 * Callees:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006ACA0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@QEAAPEAPEAVIDeviceResourceNotify@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800D5CA8 (--$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$all.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180199FD0 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802A5538 (-EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?GetAdapterLuid@CDxHandleYUVBitmapRealization@@UEBA?AU_LUID@@XZ @ 0x1802A56BC (-GetAdapterLuid@CDxHandleYUVBitmapRealization@@UEBA-AU_LUID@@XZ.c)
 *     ?Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1802B3BCC (-Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z.c)
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
  char *v11; // r14
  __int64 v12; // rax
  CD3DDevice *v13; // rbx
  bool v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  _BYTE *v18; // rax
  CD3DDevice *v19; // r8
  __int64 v20; // rcx
  CD3DDevice *v21; // rcx
  CD3DDevice *v23; // [rsp+58h] [rbp+10h] BYREF
  __int64 v24; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
  {
    v4 = CDxHandleYUVBitmapRealization::EnsureTexture(this);
    v6 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0x9Bu);
    return v6;
  }
  v23 = 0LL;
  AdapterLuid = (struct _LUID *)CDxHandleYUVBitmapRealization::GetAdapterLuid(
                                  (CDxHandleYUVBitmapRealization *)((char *)this + 488),
                                  &v24);
  Device = CDeviceManager::GetDevice(v8, *AdapterLuid, &v23);
  v6 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, Device, 0xA6u);
    v21 = v23;
    if ( !v23 )
      return v6;
LABEL_13:
    CD3DDevice::Release(v21);
    return v6;
  }
  v11 = (char *)this + 376;
  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((volatile signed __int32 **)this + 47);
  v12 = *((_QWORD *)a2 + 2);
  v13 = v23;
  v15 = CD3DVidMemOnlyTexture::Create(
          *(struct ID3D11Texture2D **)(v12 + 96),
          *((_DWORD *)this + 68),
          v14,
          v23,
          (struct CD3DVidMemOnlyTexture **)this + 47);
  v6 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0xACu);
  }
  else
  {
    v17 = *(_QWORD *)v11;
    v18 = *(_BYTE **)(*(_QWORD *)v11 + 80LL);
    v19 = (CDxHandleYUVBitmapRealization *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16);
    v20 = *(_QWORD *)v11 + 72LL;
    v23 = v19;
    if ( v18 == *(_BYTE **)(v17 + 88) )
    {
      std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>(
        (const void **)v20,
        v18,
        &v23);
    }
    else
    {
      *(_QWORD *)v18 = v19;
      *(_QWORD *)(v20 + 8) += 8LL;
    }
  }
  if ( v13 )
  {
    v21 = v13;
    goto LABEL_13;
  }
  return v6;
}
