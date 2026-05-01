/*
 * XREFs of _XamlAltTabViewController::RegisterForEvents_::_1_::dtor$7 @ 0x180320F14
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180033C50 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall XamlAltTabViewController::RegisterForEvents_::_1_::dtor_7(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 56),
    (struct IServiceProvider *)0x130,
    a3);
}
