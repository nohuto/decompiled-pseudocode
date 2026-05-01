/*
 * XREFs of ??1EventSource@Platform@@QEAA@XZ @ 0x1802FCE60
 * Callers:
 *     _Platform::Collections::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1_::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1__::_1_::dtor$3 @ 0x1802FAC1E (_Platform--Collections--Vector_Windows--Internal--ComposableShell--Multitasking--IS_ea_1802FAC1E.c)
 *     _Platform::Collections::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1_::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1__::_1_::dtor$4 @ 0x1802FAC2E (_Platform--Collections--Vector_Windows--Internal--ComposableShell--Multitasking--IS_ea_1802FAC2E.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl_::_1_::dtor$1 @ 0x1802FB55D (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--SwitchIt_ea_1802FB55D.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl_::_1_::dtor$2 @ 0x1802FB56D (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--SwitchIt_ea_1802FB56D.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::_SwitchItemDataViewImpl_::_1_::dtor$0 @ 0x1802FD026 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--_SwitchItemDataViewIm.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::_SwitchItemDataViewImpl_::_1_::dtor$1 @ 0x1802FD036 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--_SwitchI_ea_1802FD036.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1__::_1_::dtor$3 @ 0x180317DAA (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switc_ea_180317DAA.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1__::_1_::dtor$4 @ 0x180317DBA (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switc_ea_180317DBA.c)
 * Callees:
 *     <none>
 */

void __fastcall Platform::EventSource::~EventSource(Platform::EventSource *this, void **a2)
{
  Platform::Details::EventSourceUninitialize(this, a2);
}
