/*
 * XREFs of _lambda_ea573f709c56e8aaa4f248405340d00e_::operator() @ 0x1800ADC0C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs____Microsoft::WRL::FtmBase___lambda_ea573f709c56e8aaa4f248405340d00e___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs___::Invoke @ 0x1800ADD50 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800ADD50.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _lambda_bad564a0731865a81e67c1ef81fa054c_::operator() @ 0x1800ADA20 (_lambda_bad564a0731865a81e67c1ef81fa054c_--operator().c)
 *     ??$query@UIInspectable@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@1@XZ @ 0x18033AF08 (--$query@UIInspectable@@@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA-AV-$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_ea573f709c56e8aaa4f248405340d00e_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  try
  {
    wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::query<IInspectable>();
    lambda_bad564a0731865a81e67c1ef81fa054c_::operator()((AppViewDataSourceAdapter **)(a1 + 8), v5, a3);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x62,
      (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      v6);
  }
  return 0LL;
}
