/*
 * XREFs of ??0?$producers_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UWindowTabHost@Shell@Internal@Windows@winrt@@UIWindowTabHost@2345@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@234@@std@@@impl@winrt@@QEAA@XZ @ 0x1800B405C
 * Callers:
 *     ??0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800B4218 (--0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x1800BAF18 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=27
_QWORD *__fastcall winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::WindowTabHost,std::tuple<winrt::Windows::Internal::Shell::WindowTabHost,winrt::Windows::Internal::Shell::IWindowTabHost,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>>::producers_base<winrt::Windows::Internal::Shell::implementation::WindowTabHost,std::tuple<winrt::Windows::Internal::Shell::WindowTabHost,winrt::Windows::Internal::Shell::IWindowTabHost,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>>(
        _QWORD *a1)
{
  _QWORD *v2; // rbx

  a1[4] = &winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::IWindowTabExtension,void>::`vftable';
  a1[4] = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::`vftable';
  a1[5] = &winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::Shell::IWindowTabHost,void>::`vftable';
  a1[5] = &winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::Shell::IWindowTabHost,void>::`vftable';
  *a1 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>::`vftable';
  *a1 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>::`vftable';
  v2 = a1 + 1;
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 1));
  *v2 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>::`vftable';
  *v2 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>::`vftable';
  a1[2] = &VirtualDesktopNotificationBaseHelper<IVirtualDesktopNotification>::`vftable';
  a1[2] = &VirtualDesktopNotificationForwarderHelper<VirtualDesktopNotificationBaseHelper<IVirtualDesktopNotification>>::`vftable';
  a1[2] = &VirtualDesktopNotificationBase<IVirtualDesktopNotification>::`vftable';
  a1[2] = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>::`vftable';
  a1[2] = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>::`vftable';
  a1[3] = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,Windows::Internal::Shell::IWindowTabHostInternal,void>::`vftable';
  a1[3] = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,Windows::Internal::Shell::IWindowTabHostInternal,void>::`vftable';
  *a1 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>::`vftable';
  *v2 = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>::`vftable';
  a1[2] = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>::`vftable';
  a1[3] = &winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,Windows::Internal::Shell::IWindowTabHostInternal,void>::`vftable';
  return a1;
}
