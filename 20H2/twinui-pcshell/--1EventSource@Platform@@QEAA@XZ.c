/*
 * XREFs of ??1EventSource@Platform@@QEAA@XZ @ 0x1802FC570
 * Callers:
 *     _Platform::Collections::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1_::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1__::_1_::dtor$3 @ 0x1802FA32E (_Platform--Collections--Vector_Windows--Internal--ComposableShell--Multitasking--IS_ea_1802FA32E.c)
 *     _Platform::Collections::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1_::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1__::_1_::dtor$4 @ 0x1802FA33E (_Platform--Collections--Vector_Windows--Internal--ComposableShell--Multitasking--IS_ea_1802FA33E.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl_::_1_::dtor$1 @ 0x1802FAC6D (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--SwitchIt_ea_1802FAC6D.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl_::_1_::dtor$2 @ 0x1802FAC7D (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--SwitchIt_ea_1802FAC7D.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::_SwitchItemDataViewImpl_::_1_::dtor$0 @ 0x1802FC736 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--_SwitchItemDataViewIm.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::_SwitchItemDataViewImpl_::_1_::dtor$1 @ 0x1802FC746 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--_SwitchI_ea_1802FC746.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1__::_1_::dtor$3 @ 0x1803174BA (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switc_ea_1803174BA.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1__::_1_::dtor$4 @ 0x1803174CA (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switc_ea_1803174CA.c)
 * Callees:
 *     <none>
 */

void __fastcall Platform::EventSource::~EventSource(Platform::EventSource *this, void **a2)
{
  Platform::Details::EventSourceUninitialize(this, a2);
}
