/*
 * XREFs of ?GetPresentationModeFromViewId@ViewHelper@@SA?AW4AppModelHolographicPresentationMode@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x180042580
 * Callers:
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800B8900 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180042680 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??1AppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180087558 (--1AppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$as@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AUUniversalAppModel@WindowManagement@ApplicationModel@Internal@23@XZ @ 0x1800BCBB4 (--$as@UUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@IUnknown@Fou.c)
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUIAppModel@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x1800BCFB0 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@Window.c)
 *     ?GetView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@I@Z @ 0x1800BE220 (-GetView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@Intern.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewHelper::GetPresentationModeFromViewId(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned int v4; // eax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v7[16]; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  ViewHierarchyWithWindowManager::GetView(a1, &v9, a2);
  if ( v9 )
  {
    v3 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::AppModel(
           &v9,
           v7);
    winrt::Windows::Foundation::IUnknown::as<winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalAppModel>(
      v3,
      &v6);
    winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher::~AppViewWatcher((winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *)v7);
    if ( v6 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v6 + 256LL))(v6, &v8);
      winrt::check_hresult(v4);
      v2 = v8;
    }
    winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher::~AppViewWatcher((winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *)&v6);
  }
  winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher::~AppViewWatcher((winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *)&v9);
  return v2;
}
