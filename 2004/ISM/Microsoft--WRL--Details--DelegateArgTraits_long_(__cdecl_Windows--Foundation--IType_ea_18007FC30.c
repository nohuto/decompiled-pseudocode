/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::SpatialGestureRecognizer___Windows::UI::Input::Spatial::ISpatialGestureRecognizer____Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs___Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs_____::_)(Windows::UI::Input::Spatial::ISpatialGestureRecognizer___Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::SpatialGestureRecognizer___Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs_____lambda_21faa184c1d282d708ae3a1d517483c6___1_Windows::UI::Input::Spatial::ISpatialGestureRecognizer___Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::SpatialGestureRecognizer___Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs_____lambda_21faa184c1d282d708ae3a1d517483c6___1_Windows::UI::Input::Spatial::ISpatialGestureRecognizer___Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs___ @ 0x18007FC30
 * Callers:
 *     ?RegisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ @ 0x180081A0C (-RegisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::SpatialGestureRecognizer___Windows::UI::Input::Spatial::ISpatialGestureRecognizer____Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs___Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs_____::___Windows::UI::Input::Spatial::ISpatialGestureRecognizer___Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::SpatialGestureRecognizer___Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs_____lambda_21faa184c1d282d708ae3a1d517483c6___1_Windows::UI::Input::Spatial::ISpatialGestureRecognizer___Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::SpatialGestureRecognizer___Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs_____lambda_21faa184c1d282d708ae3a1d517483c6___1_Windows::UI::Input::Spatial::ISpatialGestureRecognizer___Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs___(
        __int64 a1,
        __int128 *a2)
{
  __int128 v4; // xmm0
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v4 = *a2;
  *(_QWORD *)a1 = off_1801AFFE8;
  result = a1;
  *(_OWORD *)(a1 + 16) = v4;
  return result;
}
