/*
 * XREFs of ??1EventSource@Platform@@QEAA@XZ @ 0x1802DB2C0
 * Callers:
 *     _Platform::Collections::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1_::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1__::_1_::dtor$3 @ 0x1802D907E (_Platform--Collections--Vector_Windows--Internal--ComposableShell--Multitasking--IS_ea_1802D907E.c)
 *     _Platform::Collections::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1_::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1__::_1_::dtor$4 @ 0x1802D908E (_Platform--Collections--Vector_Windows--Internal--ComposableShell--Multitasking--IS_ea_1802D908E.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl_::_1_::dtor$1 @ 0x1802D99BD (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--SwitchIt_ea_1802D99BD.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl_::_1_::dtor$2 @ 0x1802D99CD (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--SwitchIt_ea_1802D99CD.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::_SwitchItemDataViewImpl_::_1_::dtor$0 @ 0x1802DB486 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--_SwitchItemDataViewIm.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::_SwitchItemDataViewImpl_::_1_::dtor$1 @ 0x1802DB496 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--_SwitchI_ea_1802DB496.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1__::_1_::dtor$3 @ 0x1802F620A (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switc_ea_1802F620A.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1__::_1_::dtor$4 @ 0x1802F621A (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switc_ea_1802F621A.c)
 * Callees:
 *     <none>
 */

void __fastcall Platform::EventSource::~EventSource(Platform::EventSource *this, void **a2)
{
  Platform::Details::EventSourceUninitialize(this, a2);
}
