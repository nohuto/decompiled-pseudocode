/*
 * XREFs of ??$com_weak_query@PEAVAppViewDataSourceAdapter@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVAppViewDataSourceAdapter@@@Z @ 0x18033AA28
 * Callers:
 *     AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs__lambda_8a554fbb7eeadbc5b1f812b57a7003ed___ @ 0x1800AD390 (AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Internal--Composable.c)
 *     AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs__lambda_d6b8a9b1aa1c57c7c343e283d3e0fd07___ @ 0x1800AD480 (AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Interna_ea_1800AD480.c)
 *     AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs__lambda_bad564a0731865a81e67c1ef81fa054c___ @ 0x1800AD570 (AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Interna_ea_1800AD570.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetWeakReference@VAppViewDataSourceAdapter@@@details@wil@@YAJPEAVAppViewDataSourceAdapter@@PEAPEAUIWeakReference@@@Z @ 0x1803397B4 (--$GetWeakReference@VAppViewDataSourceAdapter@@@details@wil@@YAJPEAVAppViewDataSourceAdapter@@PE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_weak_query<AppViewDataSourceAdapter *>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  int Weak; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(a1);
  Weak = wil::details::GetWeakReference<AppViewDataSourceAdapter>(v3, a1);
  if ( Weak < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1774LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)Weak);
    __debugbreak();
  }
  return a1;
}
