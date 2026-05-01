/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabSetMediator____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::ITabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabSetMediator___Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs____Microsoft::WRL::FtmBase___lambda_28531ab06b01afd068f8c3f5f98bda07___1_Windows::Internal::ComposableShell::Tabs::ITabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs___::Invoke @ 0x18029B8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18003704C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180149E54 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabSetMediator____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs_____::___Windows::Internal::ComposableShell::Tabs::ITabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabSetMediator___Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs____Microsoft::WRL::FtmBase___lambda_28531ab06b01afd068f8c3f5f98bda07___1_Windows::Internal::ComposableShell::Tabs::ITabSetMediator___Windows::Internal::ComposableShell::Tabs::ITabWindowSnappedWithOthersEventArgs___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  signed int v5; // ebx
  struct IInspectable *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v5 = Microsoft::WRL::WeakRef::InternalResolve(
         (Microsoft::WRL::WeakRef *)(a1 + 64),
         &GUID_042db406_7905_56c3_8ea6_19db81931c0f,
         &v7);
  if ( v5 >= 0 )
    v5 = ((__int64 (__fastcall *)(struct IInspectable *, __int64, __int64))v7->lpVtbl->GetIids)(v7, a2, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v5);
  return (unsigned int)v5;
}
