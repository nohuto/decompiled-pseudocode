/*
 * XREFs of ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x180461A48
 * Callers:
 *     ??0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800C8AD8 (--0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@@details@winrt@@QEAA@XZ @ 0x1800DDC7C (--0-$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@w.c)
 *     ??0?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@winrt@@QEAA@XZ @ 0x1804618C0 (--0-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=18
winrt::immersive_shell_component *__fastcall winrt::immersive_shell_component::immersive_shell_component(
        winrt::immersive_shell_component *this)
{
  *(_QWORD *)this = &winrt::impl::producers_base<winrt::immersive_shell_component,std::tuple<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *(_QWORD *)this = &winrt::impl::producers_base<winrt::immersive_shell_component,std::tuple<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 1) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_QWORD *)this + 1) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_QWORD *)this + 2) = &Microsoft::WRL::ChainInterfaces<IVirtualDesktopPersistence2,IVirtualDesktopPersistence,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_QWORD *)this + 2) = &Microsoft::WRL::ChainInterfaces<IVirtualDesktopPersistence2,IVirtualDesktopPersistence,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_QWORD *)this + 3) = &winrt::impl::produce_base<winrt::immersive_shell_component,winrt::Windows::Foundation::IInspectable,void>::`vftable';
  *((_QWORD *)this + 3) = &winrt::impl::produce_base<winrt::immersive_shell_component,winrt::Windows::Foundation::IInspectable,void>::`vftable';
  *(_QWORD *)this = &winrt::impl::producers_base<winrt::immersive_shell_component,std::tuple<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 1) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_QWORD *)this + 2) = &Microsoft::WRL::ChainInterfaces<IVirtualDesktopPersistence2,IVirtualDesktopPersistence,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_QWORD *)this + 5) = 1LL;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *(_QWORD *)this = &winrt::implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 1) = &winrt::implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 2) = &winrt::implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 4) = &winrt::implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::`vftable';
  *(_QWORD *)this = &winrt::immersive_shell_component::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 1) = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 2) = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 4) = &winrt::immersive_shell_component::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  return this;
}
