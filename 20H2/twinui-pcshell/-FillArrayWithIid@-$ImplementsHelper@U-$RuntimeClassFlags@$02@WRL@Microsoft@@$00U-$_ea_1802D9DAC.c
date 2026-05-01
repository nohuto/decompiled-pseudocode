/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VWindowWrapperBase@@@Details@23@UIWeakReferenceSource@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1802D9DAC
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1802D9E50 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_1802D9E50.c)
 * Callees:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIViewResourcePolicies@5789@UIClientWindowState@5789@UIViewRecoveryState@5789@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1802A27E4 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewVisibility.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<WindowWrapperBase>,IWeakReferenceSource,ILegacyViewWrapper>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  __int64 v3; // rcx
  _DWORD *v4; // rdx
  __int64 v5; // r8
  __int64 result; // rax
  _DWORD *v7; // r10

  v3 = *a2;
  *(GUID *)(a3 + 16 * v3) = GUID_6d043cea_6cdf_43a3_b9d0_d755297c11d2;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_f4a53d68_890b_4931_bdbf_71158377eece;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_175d1cfe_6fbc_42ba_81e5_e3bc56d5aae9;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_9fab3399_4736_4f3d_8419_41d0ae23f2bc;
  *a2 = v3 + 4;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::FillArrayWithIid(
    v3,
    a2,
    a3);
  LODWORD(v4) = *v4;
  *(GUID *)(v5 + 16LL * (unsigned int)v4) = GUID_00000038_0000_0000_c000_000000000046;
  *(GUID *)(v5 + 16LL * (unsigned int)((_DWORD)v4 + 1)) = GUID_2dd4e662_f456_4daf_aeff_84a1c012e15f;
  result = (unsigned int)((_DWORD)v4 + 2);
  *v7 = result;
  return result;
}
