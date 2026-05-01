/*
 * XREFs of _Platform::Collections::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1_::Notify_::_1_::dtor$0 @ 0x1803048E7
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18002ADB0 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall Platform::Collections::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1_::Notify_::_1_::dtor_0(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 48),
    (struct IServiceProvider *)0x40,
    a3);
}
