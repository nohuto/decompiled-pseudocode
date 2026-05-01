/*
 * XREFs of Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__IVirtualDesktopNotification___&__0 @ 0x18038B050
 * Callers:
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_0 @ 0x18038B8D4 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_18038B8D4.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_1 @ 0x18038E948 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_18038E948.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate_::InternalRelease @ 0x18021BD74 (Microsoft--WRL--ComPtr__wil--details--WaitForCompletion_Windows--Foundation--IAsyncOperation_Win.c)
 *     ??0?$EventRegistration@UIVirtualDesktopNotificationService@@UIVirtualDesktopNotification@@@EventRegistrationHelpers@@QEAA@XZ @ 0x1802FA8EC (--0-$EventRegistration@UIVirtualDesktopNotificationService@@UIVirtualDesktopNotification@@@Event.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalAddRef @ 0x180303B78 (Microsoft--WRL--ComPtr__anonymous_namespace_--ObservableObjectArrayEventRegistration_--InternalA.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__IVirtualDesktopNotification______0(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned int v2; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    EventRegistrationHelpers::EventRegistration<IVirtualDesktopNotificationService,IVirtualDesktopNotification>::EventRegistration<IVirtualDesktopNotificationService,IVirtualDesktopNotification>((__int64)v5);
    v8 = v6;
    *v6 = off_180495568;
    v6[2] = *a2;
    Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalAddRef((__int64 *)&v8);
    *a1 = v6;
    Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate_::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
