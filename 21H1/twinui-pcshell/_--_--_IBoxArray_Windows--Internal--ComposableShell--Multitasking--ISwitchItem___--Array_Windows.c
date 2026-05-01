/*
 * XREFs of _??_::_IBoxArray_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___::Array_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___1_::Value::[Platform::IBoxArray_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___]::get_::_1_::dtor$0 @ 0x1802EC76C
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180033820 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall ___::_IBoxArray_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___::Array_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___1_::Value::_Platform::IBoxArray_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____::get_::_1_::dtor_0(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 48),
    (struct IServiceProvider *)0x88,
    a3);
}
