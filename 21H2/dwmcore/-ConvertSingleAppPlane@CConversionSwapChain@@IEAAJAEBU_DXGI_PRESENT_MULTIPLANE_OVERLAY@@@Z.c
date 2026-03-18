/*
 * XREFs of ?ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180291F60
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180292F84 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x1802922E8 (-ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@.c)
 *     ?GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAUIDXGIResource@@PEAUD2D_SIZE_U@@PEAW4DXGI_FORMAT@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180292904 (-GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAUIDXGIResource@@PEAUD2D_SIZE_U@@P.c)
 */

__int64 __fastcall CConversionSwapChain::ConvertSingleAppPlane(
        CConversionSwapChain *this,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a2)
{
  unsigned int v2; // ebx
  enum DXGI_FORMAT v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // r8d
  int v9; // eax
  int AppOverlayShaderResourceView; // eax
  __int64 v11; // rcx
  int v12; // edx
  int v13; // eax
  __int64 v14; // rcx
  void *v16; // [rsp+28h] [rbp-21h]
  struct ID3D11ShaderResourceView *v17; // [rsp+40h] [rbp-9h] BYREF
  struct D2D_SIZE_U v18; // [rsp+48h] [rbp-1h] BYREF
  enum DXGI_FORMAT v19[4]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v20; // [rsp+60h] [rbp+17h] BYREF
  int v21; // [rsp+68h] [rbp+1Fh]
  int v22; // [rsp+6Ch] [rbp+23h]
  __int64 v23; // [rsp+70h] [rbp+27h] BYREF
  int v24; // [rsp+78h] [rbp+2Fh]
  int v25; // [rsp+7Ch] [rbp+33h]

  v2 = 0;
  if ( *((_BYTE *)this + 744) )
  {
    v5 = *((_DWORD *)a2 + 25);
    v6 = *((_DWORD *)a2 + 16);
    v17 = 0LL;
    v19[0] = DXGI_FORMAT_UNKNOWN;
    v7 = *((_DWORD *)a2 + 17);
    v8 = *((_DWORD *)a2 + 18);
    v18 = 0LL;
    v19[2] = v5;
    v9 = *((_DWORD *)a2 + 15);
    v19[1] = DXGI_FORMAT_R32G32B32A32_UINT;
    *((_DWORD *)this + 182) = v9;
    *((_DWORD *)this + 183) = v6;
    *((_DWORD *)this + 184) = v7;
    *((_DWORD *)this + 185) = v8;
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v17);
    AppOverlayShaderResourceView = CConversionSwapChain::GetAppOverlayShaderResourceView(
                                     this,
                                     *((struct IDXGIResource **)a2 + 1),
                                     &v18,
                                     v19,
                                     &v17);
    v2 = AppOverlayShaderResourceView;
    if ( AppOverlayShaderResourceView < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, AppOverlayShaderResourceView, 0x2C6u);
    }
    else
    {
      v12 = *((_DWORD *)a2 + 19);
      v20 = *(_QWORD *)((char *)a2 + 44);
      v21 = *((_DWORD *)a2 + 13);
      v22 = *((_DWORD *)a2 + 14);
      v23 = *(_QWORD *)((char *)a2 + 28);
      v24 = *((_DWORD *)a2 + 9);
      v25 = *((_DWORD *)a2 + 10);
      LODWORD(v16) = v12;
      v13 = CConversionSwapChain::ConvertSingleResource(
              (int)this,
              (int)v17,
              (int)&v18,
              (int)v19,
              (__int64)&v23,
              v16,
              (__int64)&v20,
              (__int64)this + 728);
      v2 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x2CEu);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  }
  return v2;
}
