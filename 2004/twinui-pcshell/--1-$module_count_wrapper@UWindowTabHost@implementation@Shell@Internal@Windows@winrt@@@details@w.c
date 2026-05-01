/*
 * XREFs of ??1?$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@UEAA@XZ @ 0x1800C7A18
 * Callers:
 *     ??_G?$heap_implements@V?$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800C80E8 (--_G-$heap_implements@V-$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this)
{
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::implementation::WindowTabHost::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IApplicationViewChangeListener,void>'};
  *((_QWORD *)this + 1) = &winrt::Windows::Internal::Shell::implementation::WindowTabHost::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,IImmersiveSettingsCacheNotification,void>'};
  *((_QWORD *)this + 2) = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>'};
  *((_QWORD *)this + 3) = &winrt::Windows::Internal::Shell::implementation::WindowTabHost::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::WindowTabHost,Windows::Internal::Shell::IWindowTabHostInternal,void>'};
  *((_QWORD *)this + 6) = &winrt::Windows::Internal::Shell::implementation::WindowTabHost::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 7) = &winrt::impl::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 8) = &winrt::Windows::Internal::Shell::implementation::WindowTabHost_base<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::immersive_shell_component,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,winrt::cloaked<Windows::Internal::Shell::IWindowTabHostInternal>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 10) = &winrt::impl::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  winrt::Windows::Internal::Shell::implementation::WindowTabHost::~WindowTabHost(this);
}
