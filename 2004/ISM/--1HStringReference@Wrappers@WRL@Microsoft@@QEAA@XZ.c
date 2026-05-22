/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18007F548
 * Callers:
 *     _PnpApiWrapper::Details::EnumerateDevices_::_1_::dtor$1 @ 0x1800503EE (_PnpApiWrapper--Details--EnumerateDevices_--_1_--dtor$1.c)
 *     _wil::GetActivationFactory_Windows::Perception::Internal::IPerceptionTimestampHelperStaticsInternal__::_1_::dtor$1 @ 0x18007F536 (_wil--GetActivationFactory_Windows--Perception--Internal--IPerceptionTimestampHelpe_ea_18007F536.c)
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$3 @ 0x18008B56B (_SpectrumListener--SpectrumListener_--_1_--dtor$3.c)
 *     _wil::GetActivationFactory_Windows::Graphics::Holographic::Internal::IHolographicDisplayStaticsInternal__::_1_::dtor$1 @ 0x18008BC6E (_wil--GetActivationFactory_Windows--Graphics--Holographic--Internal--IHolographicDi_ea_18008BC6E.c)
 *     _PnpApiWrapper::Details::OnDeviceNotification_::_1_::dtor$0 @ 0x1800A2920 (_PnpApiWrapper--Details--OnDeviceNotification_--_1_--dtor$0.c)
 *     _wil::GetActivationFactory_Windows::System::IDispatcherQueueControllerStatics__::_1_::dtor$1 @ 0x180105C82 (_wil--GetActivationFactory_Windows--System--IDispatcherQueueControllerStatics__--_1_--dtor$1.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVector_HSTRING_________Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart_::_1_::dtor$0 @ 0x18011893D (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncOperationCompletedHandler_Win_ea_18011893D.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::IPropertyValue____Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart_::_1_::dtor$0 @ 0x180118A0D (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncOperationCompletedHandler_Win_ea_180118A0D.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&SetAllConstantsForInputTypeToDefaultAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart_::_1_::dtor$0 @ 0x180118ADD (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Micros_ea_180118ADD.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&SetConstantAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart_::_1_::dtor$0 @ 0x180118BAD (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Micros_ea_180118BAD.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&SetConstantToDefaultAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart_::_1_::dtor$0 @ 0x180118C7D (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Micros_ea_180118C7D.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
