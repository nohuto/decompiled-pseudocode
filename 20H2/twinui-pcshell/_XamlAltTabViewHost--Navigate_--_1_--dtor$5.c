/*
 * XREFs of _XamlAltTabViewHost::Navigate_::_1_::dtor$5 @ 0x18031197F
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18002ADB0 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall XamlAltTabViewHost::Navigate_::_1_::dtor_5(__int64 a1, __int64 a2, struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 40),
    (struct IServiceProvider *)0x130,
    a3);
}
