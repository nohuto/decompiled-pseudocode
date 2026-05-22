/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::Internal::InputPriv___Windows::UI::Input::Spatial::Internal::IInputPriv____Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs_____::_)(Windows::UI::Input::Spatial::Internal::IInputPriv___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::Internal::InputPriv___Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs_____lambda_4a364071ea75531430e6bf7b4cab72c1___1_Windows::UI::Input::Spatial::Internal::IInputPriv___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::Internal::InputPriv___Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs_____lambda_4a364071ea75531430e6bf7b4cab72c1___1_Windows::UI::Input::Spatial::Internal::IInputPriv___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs___ @ 0x18008B130
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x18008B1E8 (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::Internal::InputPriv___Windows::UI::Input::Spatial::Internal::IInputPriv____Windows::Foundation::Internal::AggregateType_Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs_____::___Windows::UI::Input::Spatial::Internal::IInputPriv___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::Internal::InputPriv___Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs_____lambda_4a364071ea75531430e6bf7b4cab72c1___1_Windows::UI::Input::Spatial::Internal::IInputPriv___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Input::Spatial::Internal::InputPriv___Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs_____lambda_4a364071ea75531430e6bf7b4cab72c1___1_Windows::UI::Input::Spatial::Internal::IInputPriv___Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // xmm1_8
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_1801B0170;
  result = a1;
  *(_QWORD *)(a1 + 32) = v4;
  return result;
}
