/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18024A3E8
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1800EEAA0 (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NPEBUDXGI_CHECK_MULTIPLANEOVER.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x1800E4014 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_27737997@@@details@wil@@QEAA_NXZ @ 0x1800E5E04 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_27737997@@@detail.c)
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x1800EAD58 (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ?CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1800EADF0 (-CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CLegacySwapChain::CheckMultiplaneOverlaySupport(
        CD3DDevice **this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  bool v5; // bl
  bool result; // al
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  DWORD v13; // edi
  bool v14; // [rsp+30h] [rbp-99h] BYREF
  int v15; // [rsp+34h] [rbp-95h] BYREF
  int v16; // [rsp+38h] [rbp-91h] BYREF
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-89h] BYREF

  v5 = 0;
  v14 = 0;
  *a4 = 0;
  if ( (!wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::GetImpl'::`2'::impl)
     || wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(this - 35))
    && *((int *)this - 41) >= 1 )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::GetImpl'::`2'::impl) )
    {
      if ( CD3DDevice::CheckMPOCache(*(this - 36), a2, a3, &v14) )
      {
        result = v14;
        *a4 = 1;
        return result;
      }
      v5 = v14;
    }
    v10 = (__int64)*(this - 35);
    v15 = 0;
    v16 = 0;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *, int *, int *))(*(_QWORD *)v10 + 176LL))(
            v10,
            a3,
            a2,
            &v15,
            &v16);
    v13 = v11;
    if ( v11 >= 0 )
    {
      if ( v15 )
        v5 = 1;
      if ( v16 )
        *a4 = 1;
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::GetImpl'::`2'::impl) )
        CD3DDevice::AddCheckMPOCache(*(this - 36), a2);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x26Du, 0LL);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::GetImpl'::`2'::impl);
      if ( v13 == -2005270527 || v13 == -2147024809 )
      {
        memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
        pExceptionRecord.ExceptionCode = v13;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
    }
  }
  return v5;
}
