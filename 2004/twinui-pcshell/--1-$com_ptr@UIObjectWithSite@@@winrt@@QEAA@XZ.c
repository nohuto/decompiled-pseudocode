/*
 * XREFs of ??1?$com_ptr@UIObjectWithSite@@@winrt@@QEAA@XZ @ 0x18042F538
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$19 @ 0x1800C75BA (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$19.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::implementation::WindowTabHost_::CreateInstance_::_1_::dtor$1 @ 0x1800C855E (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--implementation--WindowTa_ea_1800C855E.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher_::CreateInstance_::_1_::dtor$0 @ 0x1800DC65A (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeed.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher_::CreateInstance_::_1_::dtor$1 @ 0x1800DC666 (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--ShellFeeds--implementati_ea_1800DC666.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::perform_delayed_initialization_::_1_::dtor$0 @ 0x1800DF4EC (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--perform_delaye.c)
 *     __anonymous_namespace_::CreateGraphicsCaptureItem_::_1_::dtor$0 @ 0x18042F63B (__anonymous_namespace_--CreateGraphicsCaptureItem_--_1_--dtor$0.c)
 *     _VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18044C036 (_VirtualDesktopGroupedViewsEventListener--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _VirtualDesktopGroupedViewsEventListener::TabAdded_::_1_::dtor$4 @ 0x18044C20F (_VirtualDesktopGroupedViewsEventListener--TabAdded_--_1_--dtor$4.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent_::CreateInstance_::_1_::dtor$0 @ 0x180462EE1 (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--Dr.c)
 *     _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent_::CreateInstance_::_1_::dtor$1 @ 0x180462EED (_winrt--wrl_class_factory_winrt--Windows--Internal--Shell--DragDropSimulator--imple_ea_180462EED.c)
 *     _winrt::immersive_shell_component::PublishServices_::_1_::dtor$1 @ 0x180464B84 (_winrt--immersive_shell_component--PublishServices_--_1_--dtor$1.c)
 *     _winrt::immersive_shell_component::PublishServices_::_1_::dtor$5 @ 0x180464BA8 (_winrt--immersive_shell_component--PublishServices_--_1_--dtor$5.c)
 *     _winrt::immersive_shell_component::QueryService_::_1_::dtor$0 @ 0x180465255 (_winrt--immersive_shell_component--QueryService_--_1_--dtor$0.c)
 *     _winrt::immersive_shell_component::QueryService_::_1_::dtor$2 @ 0x180465261 (_winrt--immersive_shell_component--QueryService_--_1_--dtor$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18042F94C (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<IObjectWithSite>::~com_ptr<IObjectWithSite>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(a1);
  return result;
}
