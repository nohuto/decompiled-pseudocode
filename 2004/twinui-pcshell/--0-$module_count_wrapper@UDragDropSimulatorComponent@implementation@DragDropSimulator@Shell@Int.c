/*
 * XREFs of ??0?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@winrt@@QEAA@XZ @ 0x180462090
 * Callers:
 *     ??$make@V?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@winrt@@$$V@winrt@@YA?AU?$com_ptr@UIObjectWithSite@@@0@XZ @ 0x180461BEC (--$make@V-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@She.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x180461EB4 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x180462218 (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
winrt::immersive_shell_component *__fastcall winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>(
        winrt::immersive_shell_component *a1)
{
  __int64 v2; // rcx

  *((_QWORD *)a1 + 11) = &winrt::impl::produce<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::`vftable';
  winrt::immersive_shell_component::immersive_shell_component(a1);
  *(_QWORD *)v2 = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *(_QWORD *)(v2 + 8) = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *(_QWORD *)(v2 + 16) = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *(_QWORD *)(v2 + 32) = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable';
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_WORD *)(v2 + 104) = 0;
  winrt::immersive_shell_component::register_service_information<_GUID const>(
    v2,
    (__int128 *)&winrt::impl::guid_storage<winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::value);
  *(_QWORD *)a1 = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 1) = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 2) = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 4) = &winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
