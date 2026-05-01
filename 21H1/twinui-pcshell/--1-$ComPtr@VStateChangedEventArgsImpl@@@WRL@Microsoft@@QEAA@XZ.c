/*
 * XREFs of ??1?$ComPtr@VStateChangedEventArgsImpl@@@WRL@Microsoft@@QEAA@XZ @ 0x1802487DC
 * Callers:
 *     _wil::MakeOrThrow_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs_IApplicationView___Windows::Internal::ComposableShell::Tabs::IShellTab____::_1_::dtor$0 @ 0x180242EE5 (_wil--MakeOrThrow_Windows--Internal--ComposableShell--Tabs--ViewTabEventArgs_IApplicationView___.c)
 *     _TabViewManager::AddVirtualTabForWindow_::_1_::dtor$8 @ 0x18024AC19 (_TabViewManager--AddVirtualTabForWindow_--_1_--dtor$8.c)
 *     _TabViewManager::ConnectTabToView_::_1_::dtor$6 @ 0x18024B680 (_TabViewManager--ConnectTabToView_--_1_--dtor$6.c)
 *     _TabViewManager::RemoveVirtualTabImpl_::_1_::dtor$2 @ 0x180255195 (_TabViewManager--RemoveVirtualTabImpl_--_1_--dtor$2.c)
 *     _wil::MakeOrThrow_Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs_Windows::Internal::ComposableShell::Tabs::IShellTab___Windows::Foundation::Collections::IVectorView_Windows::Internal::ComposableShell::Tabs::ShellTab_______::_1_::dtor$0 @ 0x18027876D (_wil--MakeOrThrow_Windows--Internal--ComposableShell--Tabs--TabWindowSnappedWithOthersEventArgs_.c)
 *     _Windows::Internal::ComposableShell::Tabs::TabSetMediator::WindowSnapStateChanged_::_1_::dtor$10 @ 0x18027BA57 (_Windows--Internal--ComposableShell--Tabs--TabSetMediator--WindowSnapStateChanged_--_1_--dtor$10.c)
 *     _wil::MakeOrThrow_StateChangedEventArgsImpl_unsigned_short_const___&_bool_&__::_1_::dtor$0 @ 0x18042F6C9 (_wil--MakeOrThrow_StateChangedEventArgsImpl_unsigned_short_const___-_bool_-__--_1_--dtor$0.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::ReportAppStateChange_::_1_::dtor$0 @ 0x1804325CD (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--ReportAppStateChange_--_1_--.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18022F510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVie_ea_18022F510.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<StateChangedEventArgsImpl>::~ComPtr<StateChangedEventArgsImpl>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
