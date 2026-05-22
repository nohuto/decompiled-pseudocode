/*
 * XREFs of ??$as@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AUUniversalAppModel@WindowManagement@ApplicationModel@Internal@23@XZ @ 0x1800BC654
 * Callers:
 *     ?GetPresentationModeFromViewId@ViewHelper@@SA?AW4AppModelHolographicPresentationMode@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x180041EE0 (-GetPresentationModeFromViewId@ViewHelper@@SA-AW4AppModelHolographicPresentationMode@WindowManag.c)
 * Callees:
 *     ??$as@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@@impl@winrt@@YA?AUUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800BC678 (--$as@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype@-$abi@U.c)
 */

__int64 __fastcall winrt::Windows::Foundation::IUnknown::as<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>(
        _QWORD *a1,
        __int64 a2)
{
  winrt::impl::as<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>(
    a2,
    *a1);
  return a2;
}
