/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::SpatialGestureRecognizer___Windows::UI::Input::Spatial::ISpatialGestureRecognizer____Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs___Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs_____::_)(Windows::UI::Input::Spatial::ISpatialGestureRecognizer___Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::SpatialGestureRecognizer___Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs_____lambda_e156a27bd331df06d8399b9d8943173e___1_Windows::UI::Input::Spatial::ISpatialGestureRecognizer___Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs___::Invoke @ 0x1800815F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180080904 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::SpatialGestureRecognizer___Windows::UI::Input::Spatial::ISpatialGestureRecognizer____Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs___Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs_____::___Windows::UI::Input::Spatial::ISpatialGestureRecognizer___Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::SpatialGestureRecognizer___Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs_____lambda_e156a27bd331df06d8399b9d8943173e___1_Windows::UI::Input::Spatial::ISpatialGestureRecognizer___Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs___::Invoke(
        __int64 a1)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 16));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v1);
  return v2;
}
