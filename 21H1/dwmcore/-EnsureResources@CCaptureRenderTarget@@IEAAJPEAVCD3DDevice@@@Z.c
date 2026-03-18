/*
 * XREFs of ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1800E6E24
 * Callers:
 *     ?Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E723C (-Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x180031098 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_N.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180057CE4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x18006F61C (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x18008E700 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5D44 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180152860 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180189E54 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18018B27C (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x18018BFD8 (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?ResetBuffers@CCaptureRenderTarget@@IEAAXXZ @ 0x18018C27C (-ResetBuffers@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?push_back@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x18018C644 (-push_back@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$.c)
 *     ?CreateFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@@Z @ 0x18023F4C0 (-CreateFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@@Z.c)
 */

__int64 __fastcall CCaptureRenderTarget::EnsureResources(
        CCaptureRenderTarget *this,
        struct CD3DDevice *a2,
        unsigned __int64 a3)
{
  int v3; // ebx
  struct ID3D11Fence **v4; // r9
  int Fence; // eax
  __int64 v8; // rcx
  __int64 i; // r14
  __int64 v10; // r12
  struct D3D11_SUBRESOURCE_DATA *v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  enum DXGI_FORMAT v14; // ecx
  int updated; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v24; // [rsp+30h] [rbp-79h] BYREF
  struct ID3D11Texture2D *v25; // [rsp+38h] [rbp-71h] BYREF
  __int64 v26; // [rsp+40h] [rbp-69h] BYREF
  const char *v27; // [rsp+48h] [rbp-61h] BYREF
  const char *v28; // [rsp+50h] [rbp-59h] BYREF
  int v29; // [rsp+58h] [rbp-51h]
  __int128 v30; // [rsp+60h] [rbp-49h] BYREF
  enum DXGI_FORMAT v31[4]; // [rsp+70h] [rbp-39h]
  __int64 v32; // [rsp+80h] [rbp-29h]
  int v33; // [rsp+88h] [rbp-21h]
  struct D3D11_TEXTURE2D_DESC v34; // [rsp+90h] [rbp-19h] BYREF

  v3 = 0;
  v4 = (struct ID3D11Fence **)((char *)this + 1952);
  v24 = 0;
  if ( *((_QWORD *)this + 244) )
    goto LABEL_4;
  *v4 = 0LL;
  v28 = "CaptureRenderFence";
  v29 = 18;
  Fence = CD3DDevice::CreateFence(a2, (const struct CResourceTag *)&v28, a3, v4);
  v24 = Fence;
  v3 = Fence;
  if ( Fence >= 0 )
  {
    *((_QWORD *)this + 245) = 0LL;
LABEL_4:
    for ( i = (__int64)(*((_QWORD *)this + 252) - *((_QWORD *)this + 251)) >> 3; ; LODWORD(i) = i + 1 )
    {
      v10 = *((_QWORD *)this + 254);
      if ( (unsigned int)i >= (unsigned __int64)((*((_QWORD *)this + 255) - v10) >> 3) )
        goto LABEL_28;
      v25 = 0LL;
      wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v25);
      v12 = CD3DDevice::OpenSharedTexture(a2, &v34, v11, *(void **)(v10 + 8LL * (unsigned int)i), 1, &v25);
      v24 = v12;
      v3 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x13Cu, 0LL);
        goto LABEL_27;
      }
      v32 = 0LL;
      v33 = 0;
      v30 = 0LL;
      *(_OWORD *)v31 = 0LL;
      ((void (__fastcall *)(struct ID3D11Texture2D *, __int128 *))v25->lpVtbl->GetDesc)(v25, &v30);
      if ( !IsValidPixelFormat(v31[0]) )
      {
        CCaptureRenderTarget::ResetBuffers(this);
        goto LABEL_27;
      }
      if ( ((*((_QWORD *)this + 252) - *((_QWORD *)this + 251)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      {
        updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, v14);
        v24 = updated;
        v3 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, updated, 0x14Eu, 0LL);
          goto LABEL_27;
        }
        if ( !*((_BYTE *)this + 1913) )
          *((_QWORD *)this + 10) = v30;
      }
      v26 = 0LL;
      v17 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))v25->lpVtbl->QueryInterface)(
              v25,
              &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
              &v26);
      v24 = v17;
      v3 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x15Bu, 0LL);
LABEL_22:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
LABEL_27:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
        goto LABEL_28;
      }
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 247) + 48LL))(
              *((_QWORD *)this + 247),
              0LL,
              0LL,
              *(_QWORD *)(v10 + 8LL * (unsigned int)i),
              *((_QWORD *)this + 237));
      v24 = v19;
      v3 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x161u, 0LL);
        goto LABEL_22;
      }
      if ( *((_QWORD *)this + 253) == *((_QWORD *)this + 252) )
      {
        std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy> const &>(
          (char *)this + 2008,
          *((_QWORD *)this + 252),
          &v26);
      }
      else
      {
        wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
          *((_QWORD **)this + 252),
          v26);
        *((_QWORD *)this + 252) += 8LL;
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const char **))(**((_QWORD **)this + 247) + 64LL))(
              *((_QWORD *)this + 247),
              *(_QWORD *)(v10 + 8LL * (unsigned int)i),
              &v28);
      v24 = v21;
      v3 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x168u, 0LL);
        goto LABEL_22;
      }
      v27 = v28;
      std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::push_back(
        (char *)this + 2056,
        &v27);
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v27);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, Fence, 0x128u, 0LL);
LABEL_28:
  if ( v3 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v3, 0, &v24);
    CCaptureRenderTarget::ReleaseRenderingResources(this);
    return v24;
  }
  return (unsigned int)v3;
}
