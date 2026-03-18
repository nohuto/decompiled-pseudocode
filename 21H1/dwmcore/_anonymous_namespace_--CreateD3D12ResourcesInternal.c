/*
 * XREFs of _anonymous_namespace_::CreateD3D12ResourcesInternal @ 0x18023F080
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_88358cf897930614284adb3422b4c545__long_CD3DDevice::D3D12Resources___::_Do_call @ 0x180241AE0 (std--_Func_impl_no_alloc__lambda_88358cf897930614284adb3422b4c545__long_CD3DDevice-_ea_180241AE0.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E04C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180155DC4 (McTemplateU0q_EventWriteTransfer.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VailSuperWetInk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801999E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VailSuperWetInk@@@details@wil@@QEAAX_NW4R.c)
 *     ??4?$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradientStop@@@Z @ 0x1801A0A6C (--4-$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradi.c)
 */

__int64 __fastcall anonymous_namespace_::CreateD3D12ResourcesInternal(IUnknown **a1, __int64 *a2, __int64 *a3)
{
  unsigned int v4; // esi
  __int64 v7; // rcx
  HRESULT v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // rbx
  __int64 (__fastcall *v13)(void *, _DWORD *, GUID *, __int64 *); // rdi
  void *v14; // rcx
  __int64 v15; // rbx
  void *ppDevice; // [rsp+30h] [rbp-40h] BYREF
  __int64 v18; // [rsp+38h] [rbp-38h] BYREF
  int v19; // [rsp+40h] [rbp-30h] BYREF
  __int64 v20; // [rsp+44h] [rbp-2Ch]
  _DWORD v21[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v4 = 0;
  ppDevice = 0LL;
  v18 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&ppDevice);
  v8 = D3D12CreateDevice(*a1, D3D_FEATURE_LEVEL_12_0, &GUID_189819f1_1db6_4b57_be54_1821339b85f7, &ppDevice);
  if ( v8 == -2005270524 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
      McTemplateU0q_EventWriteTransfer(v7, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 6LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(a3);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(a3 + 1);
    goto LABEL_22;
  }
  if ( v8 < 0 )
  {
    v10 = 4172LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
      (const char *)(unsigned int)v8);
    v4 = v8;
    goto LABEL_22;
  }
  v22 = 0LL;
  v21[0] = 2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VailSuperWetInk>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VailSuperWetInk>::GetImpl'::`2'::impl,
    0,
    v9);
  v19 = v21[0];
  v21[1] = 10000;
  v20 = 10000LL;
  v8 = (*(__int64 (__fastcall **)(void *, __int64, int *, __int64))(*(_QWORD *)ppDevice + 104LL))(
         ppDevice,
         20LL,
         &v19,
         12LL);
  if ( v8 < 0 )
  {
    v10 = 4208LL;
    goto LABEL_7;
  }
  if ( HIDWORD(v20) )
  {
    v12 = ppDevice;
    v13 = *(__int64 (__fastcall **)(void *, _DWORD *, GUID *, __int64 *))(*(_QWORD *)ppDevice + 64LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v18);
    v8 = v13(v12, v21, &GUID_0ec870a6_5d7e_4c22_8cfc_5baae07616ed, &v18);
    if ( v8 < 0 )
    {
      v10 = 4213LL;
      goto LABEL_7;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)*a2 + 32LL))(*a2, ppDevice, v18);
    if ( v8 < 0 )
    {
      v10 = 4217LL;
      goto LABEL_7;
    }
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
  {
    McTemplateU0q_EventWriteTransfer(v11, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 2LL);
  }
  v14 = ppDevice;
  v15 = *a3;
  *a3 = (__int64)ppDevice;
  if ( v14 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 8LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=(a3 + 1, v18);
LABEL_22:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&ppDevice);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)a1);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(a2);
  return v4;
}
