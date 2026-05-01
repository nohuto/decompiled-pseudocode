/*
 * XREFs of _KeyboardHosting::TabTipAdapterPolicy::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1803488B6
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180033820 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::RuntimeClassInitialize_::_1_::dtor_1(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 96),
    *(struct IServiceProvider **)(a2 + 88),
    a3);
}
