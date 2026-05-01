/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs____Microsoft::WRL::FtmBase___lambda_2b7617dbfdc701c36860009cb2ce5ed6___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs___::Invoke @ 0x1800AFAD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2b7617dbfdc701c36860009cb2ce5ed6_::operator() @ 0x1800AF714 (_lambda_2b7617dbfdc701c36860009cb2ce5ed6_--operator().c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180149E54 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs_____::___Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs____Microsoft::WRL::FtmBase___lambda_2b7617dbfdc701c36860009cb2ce5ed6___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs___::Invoke(
        __int64 a1,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = lambda_2b7617dbfdc701c36860009cb2ce5ed6_::operator()(a1 + 64, a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v3);
  return v4;
}
