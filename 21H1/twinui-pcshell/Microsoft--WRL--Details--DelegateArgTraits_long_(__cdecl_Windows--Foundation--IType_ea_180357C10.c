/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty_::_)(Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty__Microsoft::WRL::FtmBase___lambda_230b9df691339023b85cd039d444a30c___1_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty_::Invoke @ 0x180357C10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18003F84C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801258C4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty_::___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty__::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty__Microsoft::WRL::FtmBase___lambda_230b9df691339023b85cd039d444a30c___1_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop___enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty_::Invoke(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  signed int v5; // ebx
  struct IInspectable *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v5 = Microsoft::WRL::WeakRef::InternalResolve(
         (Microsoft::WRL::WeakRef *)(a1 + 64),
         &GUID_c8044a4c_a216_57be_93ee_a52c1eed63ee,
         &v7);
  if ( v5 >= 0 )
    v5 = ((__int64 (__fastcall *)(struct IInspectable *, __int64, _QWORD))v7->lpVtbl->GetIids)(v7, a2, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v5);
  return (unsigned int)v5;
}
