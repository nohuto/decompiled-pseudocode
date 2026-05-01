/*
 * XREFs of ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18021D020
 * Callers:
 *     ?InitializePositionWithShowCommand@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x18021EBF0 (-InitializePositionWithShowCommand@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknow.c)
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18002A890 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18002AD50 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18021B70C (--0-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 *     ??1ControlGainedForActivation@HolographicPositionerTelemetry@@QEAA@XZ @ 0x18021C2A8 (--1ControlGainedForActivation@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18021FEEC (-StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationV.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180220144 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_.c)
 *     ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180221420 (-_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180221B24 (-_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180221BEC (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     ?_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180221F3C (-_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180222CC0 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::ControlGainedForActivation(
        __int64 a1,
        struct IApplicationView *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  PositionerPropertySetHelpers *v7; // rcx
  int DetailsForActivation; // eax
  unsigned int v9; // edi
  struct Windows::Foundation::Collections::IPropertySet *v10; // rbx
  struct IApplicationView *v11; // rdx
  HolographicPositioner *v12; // rcx
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // r8
  struct IApplicationView *v17; // rdx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  bool v27[4]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v28[12]; // [rsp+24h] [rbp-DCh] BYREF
  int v29; // [rsp+30h] [rbp-D0h]
  int v30; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v31; // [rsp+38h] [rbp-C8h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h]
  _QWORD v34[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v29 = 0;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v34,
    (__int64)"ControlGainedForActivation");
  v34[0] = &HolographicPositionerTelemetry::ControlGainedForActivation::`vftable';
  HolographicPositionerTelemetry::ControlGainedForActivation::StartActivity(
    (HolographicPositionerTelemetry::ControlGainedForActivation *)v34,
    a2,
    a4);
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v7,
                           (struct IApplicationView *)a4,
                           (struct IUnknown *)v28,
                           0LL);
  v9 = DetailsForActivation;
  if ( DetailsForActivation < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35F,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation);
    goto LABEL_39;
  }
  v10 = 0LL;
  v31 = 0LL;
  if ( a4 )
  {
    ((void (__fastcall *)(struct IUnknown *, GUID *, _BYTE *))a4->lpVtbl->QueryInterface)(
      a4,
      &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
      &v28[4]);
    v10 = *(struct Windows::Foundation::Collections::IPropertySet **)&v28[4];
    v31 = *(_QWORD *)&v28[4];
    if ( *(_QWORD *)&v28[4] )
    {
      if ( (v28[0] & 8) != 0 )
      {
        v13 = HolographicPositioner::_HandleAppActivationResponse(
                v12,
                v11,
                *(struct Windows::Foundation::Collections::IPropertySet **)&v28[4]);
        v9 = v13;
        if ( v13 < 0 )
        {
          v14 = (unsigned int)v13;
          v15 = 876LL;
LABEL_31:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v15,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)v14);
          goto LABEL_37;
        }
      }
      *(_QWORD *)&v28[4] = v10;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28[4]);
      v33 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"ClientRequestedNavigationType",
        0x1Eu,
        0x1Du);
      v29 = 1;
      if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v28[4],
                  v33,
                  v16,
                  &v30) >= 0
        && v30 == 1 )
      {
        v19 = HolographicPositioner::_HandleSwitchAsyncActivation((HolographicPositioner *)(a1 - 168), v17, v10);
        v9 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x374,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v19);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28[4]);
          goto LABEL_37;
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28[4]);
    }
  }
  v27[0] = 0;
  v20 = HolographicPositioner::_EnsureShellStateForView((HolographicPositioner *)(a1 - 168), a2, v27);
  v9 = v20;
  if ( v20 < 0 )
  {
    v14 = (unsigned int)v20;
    v15 = 889LL;
    goto LABEL_31;
  }
  if ( !v27[0] )
    goto LABEL_35;
  v21 = HolographicPositioner::_HandleControlGainedForView((HolographicPositioner *)(a1 - 168), a2, v10);
  v9 = v21;
  if ( v21 < 0 )
  {
    v14 = (unsigned int)v21;
    v15 = 895LL;
    goto LABEL_31;
  }
  v22 = HolographicPositioner::_RaiseRequestNavigateToView((HolographicPositioner *)(a1 - 168), a2);
  v9 = v22;
  if ( v22 < 0 )
  {
    v14 = (unsigned int)v22;
    v15 = 901LL;
    goto LABEL_31;
  }
  if ( (v28[0] & 1) == 0 )
  {
    v23 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)a2 + 432LL))(a2, 0LL);
    v9 = v23;
    if ( v23 < 0 )
    {
      v14 = (unsigned int)v23;
      v15 = 907LL;
      goto LABEL_31;
    }
    if ( (v28[0] & 4) == 0
      && (v28[0] & 2) == 0
      && (*(int (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2) < 0 )
    {
      v24 = *(_QWORD *)(a1 + 72);
      if ( !v24 )
      {
        v9 = -2147019873;
        v14 = 2147947423LL;
        v15 = 924LL;
        goto LABEL_31;
      }
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v24 + 48LL))(v24) >= 0 )
      {
        v25 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2);
        if ( v25 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x39F,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v25);
      }
    }
LABEL_35:
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v34);
  }
  v9 = 0;
LABEL_37:
  if ( v10 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_39:
  HolographicPositionerTelemetry::ControlGainedForActivation::~ControlGainedForActivation((HolographicPositionerTelemetry::ControlGainedForActivation *)v34);
  return v9;
}
