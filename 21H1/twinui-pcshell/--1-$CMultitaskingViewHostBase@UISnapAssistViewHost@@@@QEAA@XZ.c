/*
 * XREFs of ??1?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ @ 0x1802DAFE8
 * Callers:
 *     ??1XamlAllUpViewHost@@UEAA@XZ @ 0x1802DB4D8 (--1XamlAllUpViewHost@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIXamlViewHost@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802DCF50 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIAllUpV.c)
 *     ??1XamlAltTabViewHost@@UEAA@XZ @ 0x1802EE55C (--1XamlAltTabViewHost@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlViewHost@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802EEF40 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UISnapAs.c)
 *     ??1XamlSnapAssistViewHost@@UEAA@XZ @ 0x1802F29B4 (--1XamlSnapAssistViewHost@@UEAA@XZ.c)
 *     ??1CAltTabViewHost@@UEAA@XZ @ 0x18036B48C (--1CAltTabViewHost@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIAltTabViewHostInternal@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18036B550 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIAltTab.c)
 *     ??1CSnapAssistViewHost@@UEAA@XZ @ 0x18036CD68 (--1CSnapAssistViewHost@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIInvocationAnimationHost@@UIAnimatedDismissableHost@@UIDismissalAnimationHost@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18036CE10 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHost_ea_18036CE10.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate_::InternalRelease @ 0x1801F8C54 (Microsoft--WRL--ComPtr__wil--details--WaitForCompletion_Windows--Foundation--IAsyncOperation_Win.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Unregister @ 0x1802E6B64 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChangedBegi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMultitaskingViewHostBase<ISnapAssistViewHost>::~CMultitaskingViewHostBase<ISnapAssistViewHost>(
        __int64 a1)
{
  EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Unregister(a1 + 96);
  Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate_::InternalRelease((__int64 *)(a1 + 104));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 88));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 80));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}
