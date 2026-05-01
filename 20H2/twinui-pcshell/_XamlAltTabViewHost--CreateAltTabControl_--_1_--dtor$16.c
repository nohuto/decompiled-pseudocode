/*
 * XREFs of _XamlAltTabViewHost::CreateAltTabControl_::_1_::dtor$16 @ 0x1803108D6
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18002ADB0 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall XamlAltTabViewHost::CreateAltTabControl_::_1_::dtor_16(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a2 + 40), 0LL, a3);
}
