/*
 * XREFs of ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1801C47C4
 * Callers:
 *     ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJXZ @ 0x1801C4198 (-CheckOcclusionState@CCaptureRenderTarget@@UEAAJXZ.c)
 *     ?Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C53B8 (-Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIResource@@@Z @ 0x1800088CC (--0-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIResource@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x18005FF68 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x18006AB88 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_N.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800A7C48 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801C1D6C (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1801C3C34 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 *     ??$_Emplace_reallocate@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAPEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801C3D2C (--$_Emplace_reallocate@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x1801C522C (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801C5AA4 (-clear@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Cl.c)
 *     ?CreateFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@@Z @ 0x18027D550 (-CreateFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@@Z.c)
 */

__int64 __fastcall CCaptureRenderTarget::EnsureResources(
        CCaptureRenderTarget *this,
        struct CD3DDevice *a2,
        unsigned __int64 a3)
{
  int v3; // ebx
  struct ID3D11Fence **v4; // r9
  int Fence; // eax
  __int64 v7; // rcx
  __int64 i; // r14
  struct D3D11_SUBRESOURCE_DATA *v9; // r8
  int v10; // eax
  __int64 v11; // rcx
  int v12; // ecx
  int updated; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  const char **v21; // rdx
  __int64 v22; // r13
  unsigned int v24; // [rsp+30h] [rbp-79h] BYREF
  struct ID3D11Texture2D *v25; // [rsp+38h] [rbp-71h] BYREF
  __int64 v26; // [rsp+40h] [rbp-69h] BYREF
  const char *v27; // [rsp+48h] [rbp-61h] BYREF
  const char *v28; // [rsp+50h] [rbp-59h] BYREF
  int v29; // [rsp+58h] [rbp-51h]
  CD3DDevice *v30; // [rsp+60h] [rbp-49h]
  __int128 v31; // [rsp+68h] [rbp-41h] BYREF
  enum DXGI_FORMAT v32[4]; // [rsp+78h] [rbp-31h]
  __int64 v33; // [rsp+88h] [rbp-21h]
  int v34; // [rsp+90h] [rbp-19h]
  struct D3D11_TEXTURE2D_DESC v35; // [rsp+98h] [rbp-11h] BYREF

  v3 = 0;
  v30 = a2;
  v4 = (struct ID3D11Fence **)((char *)this + 1936);
  v24 = 0;
  if ( *((_QWORD *)this + 242) )
    goto LABEL_4;
  *v4 = 0LL;
  v28 = "CaptureRenderFence";
  v29 = 18;
  Fence = CD3DDevice::CreateFence(a2, (const struct CResourceTag *)&v28, a3, v4);
  v24 = Fence;
  v3 = Fence;
  if ( Fence >= 0 )
  {
    *((_QWORD *)this + 243) = 0LL;
LABEL_4:
    for ( i = (__int64)(*((_QWORD *)this + 249) - *((_QWORD *)this + 248)) >> 3; ; LODWORD(i) = i + 1 )
    {
      v22 = *((_QWORD *)this + 251);
      if ( (unsigned int)i >= (unsigned __int64)((*((_QWORD *)this + 252) - v22) >> 3) )
        goto LABEL_33;
      v25 = 0LL;
      wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v25);
      v10 = CD3DDevice::OpenSharedTexture(v30, &v35, v9, *(void **)(v22 + 8LL * (unsigned int)i), 1, &v25);
      v24 = v10;
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x15Au);
        goto LABEL_32;
      }
      v33 = 0LL;
      v31 = 0LL;
      v34 = 0;
      *(_OWORD *)v32 = 0LL;
      ((void (__fastcall *)(struct ID3D11Texture2D *, __int128 *))v25->lpVtbl->GetDesc)(v25, &v31);
      if ( !IsValidPixelFormat(v32[0]) )
      {
        std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::clear((char *)this + 2008);
        CCaptureRenderTarget::ReleaseRenderingResources(this);
        goto LABEL_32;
      }
      if ( ((*((_QWORD *)this + 249) - *((_QWORD *)this + 248)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      {
        updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, v12);
        v24 = updated;
        v3 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, updated, 0x16Cu);
          goto LABEL_32;
        }
        if ( !*((_BYTE *)this + 1897) )
          *((_QWORD *)this + 13) = v31;
        *((_BYTE *)this + 1898) = HIDWORD(v31) > 1;
      }
      v26 = 0LL;
      v15 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))v25->lpVtbl->QueryInterface)(
              v25,
              &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
              &v26);
      v24 = v15;
      v3 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x17Cu);
LABEL_27:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
LABEL_32:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
        goto LABEL_33;
      }
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 245) + 48LL))(
              *((_QWORD *)this + 245),
              0LL,
              0LL,
              *(_QWORD *)(v22 + 8LL * (unsigned int)i),
              *((_QWORD *)this + 235));
      v24 = v17;
      v3 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x182u);
        goto LABEL_27;
      }
      if ( *((_QWORD *)this + 249) == *((_QWORD *)this + 250) )
      {
        std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy> const &>(
          (__int64 **)this + 248,
          *((__int64 **)this + 249),
          &v26);
      }
      else
      {
        wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::com_ptr_t<IDXGIResource,wil::err_returncode_policy>(
          *((_QWORD **)this + 249),
          v26);
        *((_QWORD *)this + 249) += 8LL;
      }
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const char **))(**((_QWORD **)this + 245) + 64LL))(
              *((_QWORD *)this + 245),
              *(_QWORD *)(v22 + 8LL * (unsigned int)i),
              &v28);
      v24 = v19;
      v3 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v19, 0x189u);
        goto LABEL_27;
      }
      v21 = (const char **)*((_QWORD *)this + 255);
      v27 = v28;
      if ( v21 == *((const char ***)this + 256) )
      {
        std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::_Emplace_reallocate<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(
          (__int64 *)this + 254,
          (__int64)v21,
          &v27);
      }
      else
      {
        v27 = 0LL;
        *v21 = v28;
        *((_QWORD *)this + 255) += 8LL;
      }
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v27);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, Fence, 0x146u);
LABEL_33:
  if ( v3 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v3, 0, &v24);
    CCaptureRenderTarget::ReleaseRenderingResources(this);
    return v24;
  }
  return (unsigned int)v3;
}
