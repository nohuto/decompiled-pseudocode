/*
 * XREFs of ?GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAUIDXGIResource@@PEAUD2D_SIZE_U@@PEAW4DXGI_FORMAT@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180292904
 * Callers:
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x1802916D4 (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180291F60 (-ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800CCC80 (-CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DE.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CConversionSwapChain::GetAppOverlayShaderResourceView(
        CD3DDevice **this,
        struct IDXGIResource *a2,
        struct D2D_SIZE_U *a3,
        enum DXGI_FORMAT *a4,
        struct ID3D11ShaderResourceView **a5)
{
  struct IDXGIResourceVtbl *lpVtbl; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  struct ID3D11Resource *v14; // rdx
  int ShaderResourceView; // eax
  __int64 v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-31h] BYREF
  struct ID3D11Resource *v19; // [rsp+38h] [rbp-29h] BYREF
  __int64 v20; // [rsp+40h] [rbp-21h] BYREF
  __int128 v21; // [rsp+48h] [rbp-19h] BYREF
  __int128 v22; // [rsp+58h] [rbp-9h]
  __int64 v23; // [rsp+68h] [rbp+7h]
  int v24; // [rsp+70h] [rbp+Fh]

  v18 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v23 = 0LL;
  v24 = 0;
  lpVtbl = a2->lpVtbl;
  v21 = 0LL;
  v22 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, struct ID3D11Resource **))lpVtbl->QueryInterface)(
         a2,
         &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
         &v19);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x271u);
  }
  else
  {
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v18);
    v12 = ((__int64 (__fastcall *)(struct ID3D11Resource *, GUID *, __int64 *))v19->lpVtbl->QueryInterface)(
            v19,
            &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
            &v18);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x273u);
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v18 + 80LL))(v18, &v21);
      v14 = v19;
      *a3 = (struct D2D_SIZE_U)v21;
      *a4 = v22;
      ShaderResourceView = CD3DDevice::CreateShaderResourceView(this[8], v14, 0LL, a5);
      v11 = ShaderResourceView;
      if ( ShaderResourceView < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, ShaderResourceView, 0x27Fu);
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  return v11;
}
