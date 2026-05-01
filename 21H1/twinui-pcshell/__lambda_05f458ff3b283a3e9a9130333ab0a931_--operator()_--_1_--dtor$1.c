/*
 * XREFs of __lambda_05f458ff3b283a3e9a9130333ab0a931_::operator()_::_1_::dtor$1 @ 0x1802CEAE9
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180033820 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall _lambda_05f458ff3b283a3e9a9130333ab0a931_::operator()_::_1_::dtor_1(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 40),
    (struct IServiceProvider *)0x130,
    a3);
}
