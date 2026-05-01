/*
 * XREFs of ?GetStoreAppPFN@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1801D7200
 * Callers:
 *     ?IsCortanaPackageInstalled@CortanaAvailability@@YAJPEAE@Z @ 0x18009B388 (-IsCortanaPackageInstalled@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?TryGetInstalledPackage@CortanaAvailability@@YAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x1801E2938 (-TryGetInstalledPackage@CortanaAvailability@@YAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z.c)
 * Callees:
 *     ?TryGetCortanaAumid@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1800662D0 (-TryGetCortanaAumid@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800663C0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008BF68 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180094AE0 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaButtonFix_28998388@@@details@wil@@QEAA_NXZ @ 0x18009B630 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaButtonFix_289983.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_28998340@@@details@wil@@QEAA_NXZ @ 0x18009B670 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_28998.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1801C41EC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??$call@AEAV_lambda_38c729b784d0ceaabb1b176d3af54f15_@@@?$factory_cache_entry@UAppInfo@ApplicationModel@Windows@winrt@@UIAppInfoStatics@234@@impl@winrt@@QEAA?AUAppInfo@ApplicationModel@Windows@2@AEAV_lambda_38c729b784d0ceaabb1b176d3af54f15_@@@Z @ 0x1801D6C7C (--$call@AEAV_lambda_38c729b784d0ceaabb1b176d3af54f15_@@@-$factory_cache_entry@UAppInfo@Applicati.c)
 */

// Hidden C++ exception states: #wind=3
winrt::hstring *__fastcall CortanaExperienceHelpers::GetStoreAppPFN(winrt::hstring *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  __int64 *v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  winrt::hstring *v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-28h] BYREF

  v7 = a1;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_28998340>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_CortanaStoreOffer_28998340>::GetImpl'::`2'::impl)
    || wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CortanaButtonFix_28998388>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_CortanaButtonFix_28998388>::GetImpl'::`2'::impl) )
  {
    winrt::hstring::hstring(a1, L"Microsoft.549981C3F5F10_8wekyb3d8bbwe");
  }
  else
  {
    v8 = *CortanaExperienceHelpers::TryGetCortanaAumid(&v7);
    v5 = &v8;
    winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::AppInfo,winrt::Windows::ApplicationModel::IAppInfoStatics>::call<_lambda_38c729b784d0ceaabb1b176d3af54f15_ &>(
      v2,
      (__int64)&v6,
      &v5);
    winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v7);
    v5 = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v6 + 72LL))(v6, &v5);
    winrt::check_hresult(v3);
    *(_QWORD *)a1 = v5;
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v6);
  }
  return a1;
}
