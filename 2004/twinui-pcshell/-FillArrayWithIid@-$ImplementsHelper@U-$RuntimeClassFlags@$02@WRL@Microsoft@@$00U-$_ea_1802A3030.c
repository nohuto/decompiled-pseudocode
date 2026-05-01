/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VViewWrapperBase@@@Details@23@UIWeakReferenceSource@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1802A3030
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1802A3AB0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VView_ea_1802A3AB0.c)
 * Callees:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIViewResourcePolicies@5789@UIClientWindowState@5789@UIViewRecoveryState@5789@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1802A30D4 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewVisibility.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<ViewWrapperBase>,IWeakReferenceSource,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::FillArrayWithIid(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 v3; // rcx
  _DWORD *v4; // rdx
  __int64 v5; // r8
  __int64 result; // rax
  _DWORD *v7; // r10

  v3 = (unsigned int)*a2;
  *(GUID *)(a3 + 16 * v3) = GUID_6d043cea_6cdf_43a3_b9d0_d755297c11d2;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_f4a53d68_890b_4931_bdbf_71158377eece;
  *a2 = v3 + 3;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::FillArrayWithIid(
    v3,
    a2,
    a3);
  LODWORD(v4) = *v4;
  *(GUID *)(v5 + 16LL * (unsigned int)v4) = GUID_00000038_0000_0000_c000_000000000046;
  *(GUID *)(v5 + 16LL * (unsigned int)((_DWORD)v4 + 1)) = GUID_a52f5b9b_ee55_4add_b559_55f1c012e15f;
  *(GUID *)(v5 + 16LL * (unsigned int)((_DWORD)v4 + 2)) = GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67;
  result = (unsigned int)((_DWORD)v4 + 3);
  *v7 = result;
  return result;
}
