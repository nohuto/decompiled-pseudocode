/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::Internal::InputPriv___Windows::UI::Input::Spatial::Internal::IInputPriv____Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs_____::_)(Windows::UI::Input::Spatial::Internal::IInputPriv___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::Internal::InputPriv___Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs_____lambda_4a364071ea75531430e6bf7b4cab72c1___1_Windows::UI::Input::Spatial::Internal::IInputPriv___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs___::Invoke @ 0x18008B610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800803B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::Internal::InputPriv___Windows::UI::Input::Spatial::Internal::IInputPriv____Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs_____::___Windows::UI::Input::Spatial::Internal::IInputPriv___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::Internal::InputPriv___Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs_____lambda_4a364071ea75531430e6bf7b4cab72c1___1_Windows::UI::Input::Spatial::Internal::IInputPriv___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs___::Invoke(
        __int64 a1)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 32));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v1);
  return v2;
}
