/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs____Microsoft::WRL::FtmBase___lambda_e8fc07facb963e76bc03e71e52701980___1_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs___::Invoke @ 0x180427F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801258C4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18026748C (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?OnViewTabAssociated@VirtualDesktopGroupedViewsEventListener@@AEAAJPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIViewTabEventArgs@3456@@Z @ 0x180427FFC (-OnViewTabAssociated@VirtualDesktopGroupedViewsEventListener@@AEAAJPEAUIBrokeredViewTabConverter.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____::___Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs____Microsoft::WRL::FtmBase___lambda_e8fc07facb963e76bc03e71e52701980___1_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs___::Invoke(
        __int64 a1,
        void *a2,
        struct Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs *a3)
{
  struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter *v5; // rdx
  signed int v6; // ebx
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  wil::details::weak_query_policy::query(
    *(struct IWeakReference **)(a1 + 64),
    &GUID_00000000_0000_0000_c000_000000000046,
    &v8);
  if ( v8 )
    v6 = VirtualDesktopGroupedViewsEventListener::OnViewTabAssociated(
           *(VirtualDesktopGroupedViewsEventListener **)(a1 + 72),
           v5,
           a3);
  else
    v6 = 0;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v8);
  if ( v6 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v6);
  return (unsigned int)v6;
}
