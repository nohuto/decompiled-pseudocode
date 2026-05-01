/*
 * XREFs of _XamlExplorerHost::CreateXamlExplorerHostWindowInBand_::_1_::dtor$6 @ 0x1802CBE98
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180033820 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall XamlExplorerHost::CreateXamlExplorerHostWindowInBand_::_1_::dtor_6(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 64),
    (struct IServiceProvider *)0x140,
    a3);
}
