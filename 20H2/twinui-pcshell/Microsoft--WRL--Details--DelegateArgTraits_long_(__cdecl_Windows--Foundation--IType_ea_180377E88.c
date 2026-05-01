/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty_::_)(Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty__Microsoft::WRL::FtmBase___lambda_230b9df691339023b85cd039d444a30c___1_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty__Microsoft::WRL::FtmBase___lambda_230b9df691339023b85cd039d444a30c___1_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty_ @ 0x180377E88
 * Callers:
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180377A8C (--$CreateAgileHelper@U-$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Inte.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180030DD4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty_::___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty__::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty__Microsoft::WRL::FtmBase___lambda_230b9df691339023b85cd039d444a30c___1_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty__Microsoft::WRL::FtmBase___lambda_230b9df691339023b85cd039d444a30c___1_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty_(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rsi

  v3 = (_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  *(_DWORD *)(a1 + 60) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>'};
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (_QWORD *)(a1 + 64) != a2 )
  {
    *(_QWORD *)(a1 + 64) = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)a1 = off_1804BADB0;
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
