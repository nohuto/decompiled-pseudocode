/*
 * XREFs of _Platform::Collections::Details::Init_std::vector_Platform::Agile_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___1__std::allocator_Platform::Agile_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___1________::_1_::dtor$2 @ 0x1802D6341
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180033820 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall Platform::Collections::Details::Init_std::vector_Platform::Agile_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___1__std::allocator_Platform::Agile_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___1________::_1_::dtor_2(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 96),
    (struct IServiceProvider *)0x90,
    a3);
}
