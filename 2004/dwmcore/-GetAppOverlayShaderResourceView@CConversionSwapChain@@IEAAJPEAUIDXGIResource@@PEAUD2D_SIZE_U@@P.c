/*
 * XREFs of ?GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAUIDXGIResource@@PEAUD2D_SIZE_U@@PEAW4DXGI_FORMAT@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18024D9A8
 * Callers:
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18024C91C (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x18024D174 (-ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800BF208 (-CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DE.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CCCB4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CConversionSwapChain::GetAppOverlayShaderResourceView(
        CD3DDevice **this,
        struct IDXGIResource *a2,
        struct D2D_SIZE_U *a3,
        enum DXGI_FORMAT *a4,
        struct ID3D11ShaderResourceView **a5)
{
  struct IDXGIResourceVtbl *lpVtbl; // rax
  HRESULT (__stdcall *QueryInterface)(IDXGIResource *, const IID *const, void **); // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  struct ID3D11Resource *v15; // rdx
  int ShaderResourceView; // eax
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-31h] BYREF
  struct ID3D11Resource *v20; // [rsp+38h] [rbp-29h] BYREF
  __int64 v21; // [rsp+40h] [rbp-21h] BYREF
  __int128 v22; // [rsp+48h] [rbp-19h] BYREF
  __int128 v23; // [rsp+58h] [rbp-9h]
  __int64 v24; // [rsp+68h] [rbp+7h]
  int v25; // [rsp+70h] [rbp+Fh]

  v19 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v24 = 0LL;
  v25 = 0;
  lpVtbl = a2->lpVtbl;
  v22 = 0LL;
  QueryInterface = lpVtbl->QueryInterface;
  v23 = 0LL;
  v10 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, struct ID3D11Resource **))QueryInterface)(
          a2,
          &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
          &v20);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x24Cu, 0LL);
  }
  else
  {
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v19);
    v13 = ((__int64 (__fastcall *)(struct ID3D11Resource *, GUID *, __int64 *))v20->lpVtbl->QueryInterface)(
            v20,
            &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
            &v19);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x24Eu, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v19 + 80LL))(v19, &v22);
      v15 = v20;
      *a3 = (struct D2D_SIZE_U)v22;
      *a4 = v23;
      ShaderResourceView = CD3DDevice::CreateShaderResourceView(this[8], v15, 0LL, a5);
      v12 = ShaderResourceView;
      if ( ShaderResourceView < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, ShaderResourceView, 0x25Au, 0LL);
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
  return v12;
}
