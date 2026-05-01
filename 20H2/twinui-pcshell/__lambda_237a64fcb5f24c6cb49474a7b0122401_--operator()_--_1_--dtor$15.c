/*
 * XREFs of __lambda_237a64fcb5f24c6cb49474a7b0122401_::operator()_::_1_::dtor$15 @ 0x180314114
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18002ADB0 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall _lambda_237a64fcb5f24c6cb49474a7b0122401_::operator()_::_1_::dtor_15(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 72),
    (struct IServiceProvider *)0x130,
    a3);
}
