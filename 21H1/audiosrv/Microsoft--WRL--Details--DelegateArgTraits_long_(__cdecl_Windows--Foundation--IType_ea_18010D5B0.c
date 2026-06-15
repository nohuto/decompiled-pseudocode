/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher___Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher____Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::HolographicDisplay___Windows::Graphics::Holographic::IHolographicDisplay_____::_)(Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher___Windows::Graphics::Holographic::IHolographicDisplay__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher___Windows::Graphics::Holographic::HolographicDisplay____Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher___Windows::Graphics::Holographic::IHolographicDisplay___::Invoke @ 0x18010D5B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18010D48C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher___Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher____Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::HolographicDisplay___Windows::Graphics::Holographic::IHolographicDisplay_____::___Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher___Windows::Graphics::Holographic::IHolographicDisplay____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher___Windows::Graphics::Holographic::HolographicDisplay____Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher___Windows::Graphics::Holographic::IHolographicDisplay___::Invoke(
        __int64 a1)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 72))(*(_QWORD *)(a1 + 64) + *(int *)(a1 + 80));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v1);
  return v2;
}
