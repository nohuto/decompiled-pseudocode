/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabSetMediator____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::ITabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabSetMediator___Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs____Microsoft::WRL::FtmBase___lambda_28531ab06b01afd068f8c3f5f98bda07___1_Windows::Internal::ComposableShell::Tabs::ITabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabSetMediator___Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs____Microsoft::WRL::FtmBase___lambda_28531ab06b01afd068f8c3f5f98bda07___1_Windows::Internal::ComposableShell::Tabs::ITabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs___ @ 0x18029A710
 * Callers:
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVTabSetMediator@Tabs@ComposableShell@Internal@Windows@@PEAVTabWindowSnappedWithOthersEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVTabSetMediator@Tabs@ComposableShell@Internal@Windows@@PEAVTabWindowSnappedWithOthersEventArgs@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180299AFC (--$CreateAgileHelper@U-$ITypedEventHandler@PEAVTabSetMediator@Tabs@ComposableShell@Internal@Wind.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180039C74 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabSetMediator____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs_____::___Windows::Internal::ComposableShell::Tabs::ITabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabSetMediator___Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs____Microsoft::WRL::FtmBase___lambda_28531ab06b01afd068f8c3f5f98bda07___1_Windows::Internal::ComposableShell::Tabs::ITabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabSetMediator___Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs____Microsoft::WRL::FtmBase___lambda_28531ab06b01afd068f8c3f5f98bda07___1_Windows::Internal::ComposableShell::Tabs::ITabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rsi

  v3 = (_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  *(_DWORD *)(a1 + 60) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabSetMediator *,Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabSetMediator *,Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs *>'};
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabSetMediator *,Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (_QWORD *)(a1 + 64) != a2 )
  {
    *(_QWORD *)(a1 + 64) = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)a1 = off_1804AFCF8;
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabSetMediator *,Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
