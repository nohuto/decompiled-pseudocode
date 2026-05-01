/*
 * XREFs of Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalAddRef @ 0x180303288
 * Callers:
 *     Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__IVirtualDesktopNotification___&_ @ 0x1802F7C58 (Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopNotificationForwarderHelper__anonymous_.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x6db1ca68::MonitorEventRegistration_IImmersiveMonitorNotification___&_ @ 0x1802F7CEC (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--MonitorEventRegistration_A0x6d.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register @ 0x1803051C0 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_1803051C0.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register @ 0x18030529C (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_18030529C.c)
 *     Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__IVirtualDesktopNotification___&__0 @ 0x18038A790 (Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopNotificationForwarderHelpe_ea_18038A790.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_0 @ 0x18038B014 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_18038B014.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x1e4dc85f::MonitorEventRegistration_IImmersiveMonitorNotification___&_ @ 0x18038BEF0 (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--MonitorEventRegistration_A0x1e.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_0 @ 0x18038C6A8 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_18038C6A8.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_1 @ 0x18038E088 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_18038E088.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_1 @ 0x18038F5A8 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_18038F5A8.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_A0xbba38151::ObservableObjectArrayBeginEndEventRegistration_IObservableObjectArrayChangedBeginEnd___&_ @ 0x180392DF0 (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--ObservableObjectArrayBeginEndE.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::ObservableObjectArrayEventRegistration_A0x86bda3c3::ObservableObjectArrayEventRegistration_IObservableObjectArrayChanged___&_ @ 0x180392E84 (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--ObservableObjectArrayEventRegi.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register @ 0x180393A7C (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChanged__an.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register @ 0x180393B4C (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArr_ea_180393B4C.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register_0 @ 0x1803C0508 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArr_ea_1803C0508.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalAddRef(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
