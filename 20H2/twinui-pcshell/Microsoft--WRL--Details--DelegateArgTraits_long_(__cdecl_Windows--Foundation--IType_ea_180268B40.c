/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::ITabController____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabControllerMenuItemsRequestedEventArgs___Windows::Internal::ComposableShell::Tabs::ITabControllerMenuItemsRequestedEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerMenuItemsRequestedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::TabControllerMenuItemsRequestedEventArgs____Microsoft::WRL::FtmBase___lambda_04d5132b63453c4fb23caa0c5bed7845___1_Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerMenuItemsRequestedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::TabControllerMenuItemsRequestedEventArgs____Microsoft::WRL::FtmBase___lambda_04d5132b63453c4fb23caa0c5bed7845___1_Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerMenuItemsRequestedEventArgs___ @ 0x180268B40
 * Callers:
 *     ?SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18027B5C0 (-SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180030DD4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::ITabController____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabControllerMenuItemsRequestedEventArgs___Windows::Internal::ComposableShell::Tabs::ITabControllerMenuItemsRequestedEventArgs_____::___Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerMenuItemsRequestedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::TabControllerMenuItemsRequestedEventArgs____Microsoft::WRL::FtmBase___lambda_04d5132b63453c4fb23caa0c5bed7845___1_Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerMenuItemsRequestedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::TabControllerMenuItemsRequestedEventArgs____Microsoft::WRL::FtmBase___lambda_04d5132b63453c4fb23caa0c5bed7845___1_Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerMenuItemsRequestedEventArgs___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 v5; // xmm1_8
  __int64 result; // rax

  v3 = (_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  *(_DWORD *)(a1 + 60) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabController *,Windows::Internal::ComposableShell::Tabs::TabControllerMenuItemsRequestedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabController *,Windows::Internal::ComposableShell::Tabs::TabControllerMenuItemsRequestedEventArgs *>'};
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabController *,Windows::Internal::ComposableShell::Tabs::TabControllerMenuItemsRequestedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)a2;
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_1804ABD28;
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabController *,Windows::Internal::ComposableShell::Tabs::TabControllerMenuItemsRequestedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  result = a1;
  *(_QWORD *)(a1 + 80) = v5;
  return result;
}
