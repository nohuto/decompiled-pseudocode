/*
 * XREFs of EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Unregister @ 0x180307E14
 * Callers:
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::_EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_ @ 0x1800AE8C0 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNo.c)
 *     ??1?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ @ 0x1802FC298 (--1-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x180300D20 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register @ 0x1803051C0 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_1803051C0.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x18038F2B0 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_1 @ 0x18038F5A8 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_18038F5A8.c)
 *     ??1SwitchItemFilteredCollection@@UEAA@XZ @ 0x1803932A8 (--1SwitchItemFilteredCollection@@UEAA@XZ.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register @ 0x180393A7C (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChanged__an.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register @ 0x180393B4C (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArr_ea_180393B4C.c)
 *     ??1CSwitchItemGrid@@UEAA@XZ @ 0x1803A62C4 (--1CSwitchItemGrid@@UEAA@XZ.c)
 *     ?SetItems@CSwitchItemGrid@@UEAAJPEAUIObservableObjectArray@@@Z @ 0x1803A7C10 (-SetItems@CSwitchItemGrid@@UEAAJPEAUIObservableObjectArray@@@Z.c)
 *     ??1CVirtualDesktopContainerElement@@UEAA@XZ @ 0x1803BF270 (--1CVirtualDesktopContainerElement@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate_::InternalRelease @ 0x18021B4A4 (Microsoft--WRL--ComPtr__wil--details--WaitForCompletion_Windows--Foundation--IAsyncOperation_Win.c)
 */

__int64 __fastcall EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Unregister(
        __int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    return Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate_::InternalRelease(v1);
  }
  return result;
}
