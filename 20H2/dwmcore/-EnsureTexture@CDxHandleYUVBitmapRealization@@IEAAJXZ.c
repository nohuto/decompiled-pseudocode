/*
 * XREFs of ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180262DEC
 * Callers:
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x18026325C (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@PEAI@Z.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x180263640 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x180052124 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006A610 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18006AEF0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18006AF20 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180168860 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDevice@@PEAX_NIPEAPEAV1@@Z @ 0x18026A760 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDevice@@PEAX_NIPE.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::EnsureTexture(CDxHandleYUVBitmapRealization *this)
{
  unsigned int v1; // edi
  CMILPoolResource **v2; // r14
  CDeviceManager *v4; // rcx
  int Device; // eax
  __int64 v6; // rcx
  bool v7; // r9
  int v8; // eax
  __int64 v9; // rcx
  char *v10; // rax
  __int64 v11; // rcx
  _BYTE *v12; // rdx
  CD3DDevice *v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-60h]
  CD3DDevice *v16; // [rsp+30h] [rbp-50h] BYREF
  char *v17; // [rsp+38h] [rbp-48h] BYREF
  struct D3D11_TEXTURE2D_DESC v18; // [rsp+40h] [rbp-40h] BYREF

  v1 = 0;
  v2 = (CMILPoolResource **)((char *)this + 344);
  if ( !*((_QWORD *)this + 43) )
  {
    if ( *((_DWORD *)this + 60) )
    {
      v1 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467259, 0x1ADu, 0LL);
      return v1;
    }
    v16 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v16);
    Device = CDeviceManager::GetDevice(v4, *(struct _LUID *)((char *)this + 232), &v16);
    v1 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, Device, 0x19Fu, 0LL);
      v13 = v16;
      if ( v16 )
        goto LABEL_12;
    }
    else
    {
      memset(&v18, 0, sizeof(v18));
      wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(v2);
      v8 = CD3DVidMemOnlyTexture::OpenSharedTexture(&v18, v16, *((void **)this + 28), v7, v15, v2);
      v1 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1A7u, 0LL);
      }
      else
      {
        v10 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16;
        v11 = (__int64)*v2 + 88;
        v17 = v10;
        v12 = *(_BYTE **)(v11 + 8);
        if ( *(_BYTE **)(v11 + 16) == v12 )
        {
          std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>(
            (const void **)v11,
            v12,
            &v17);
        }
        else
        {
          *(_QWORD *)v12 = v10;
          *(_QWORD *)(v11 + 8) += 8LL;
        }
      }
      if ( v16 )
      {
        v13 = v16;
LABEL_12:
        CD3DDevice::Release(v13);
      }
    }
  }
  return v1;
}
