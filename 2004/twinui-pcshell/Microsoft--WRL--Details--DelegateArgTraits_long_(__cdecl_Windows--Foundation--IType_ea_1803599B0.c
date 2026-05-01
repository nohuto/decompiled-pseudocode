/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::UI::Internal::Text::Core::ICoreTextPropertyBag___Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreTextPropertyBagPropertyValueChangedEventArgs___Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs_____::_)(Windows::UI::Internal::Text::Core::ICoreTextPropertyBag___Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::ICoreTextPropertyBag___Windows::UI::Internal::Text::Core::CoreTextPropertyBagPropertyValueChangedEventArgs_____lambda_2b62bc24e652366c6f0acb1c62483271___1_Windows::UI::Internal::Text::Core::ICoreTextPropertyBag___Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::ICoreTextPropertyBag___Windows::UI::Internal::Text::Core::CoreTextPropertyBagPropertyValueChangedEventArgs_____lambda_2b62bc24e652366c6f0acb1c62483271___1_Windows::UI::Internal::Text::Core::ICoreTextPropertyBag___Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs___ @ 0x1803599B0
 * Callers:
 *     ?AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18035B7DC (-AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::UI::Internal::Text::Core::ICoreTextPropertyBag___Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreTextPropertyBagPropertyValueChangedEventArgs___Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs_____::___Windows::UI::Internal::Text::Core::ICoreTextPropertyBag___Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::ICoreTextPropertyBag___Windows::UI::Internal::Text::Core::CoreTextPropertyBagPropertyValueChangedEventArgs_____lambda_2b62bc24e652366c6f0acb1c62483271___1_Windows::UI::Internal::Text::Core::ICoreTextPropertyBag___Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::ICoreTextPropertyBag___Windows::UI::Internal::Text::Core::CoreTextPropertyBagPropertyValueChangedEventArgs_____lambda_2b62bc24e652366c6f0acb1c62483271___1_Windows::UI::Internal::Text::Core::ICoreTextPropertyBag___Windows::UI::Internal::Text::Core::ICoreTextPropertyBagPropertyValueChangedEventArgs___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // xmm1_8
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::ICoreTextPropertyBag *,Windows::UI::Internal::Text::Core::CoreTextPropertyBagPropertyValueChangedEventArgs *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_1804B98A8;
  result = a1;
  *(_QWORD *)(a1 + 32) = v4;
  return result;
}
