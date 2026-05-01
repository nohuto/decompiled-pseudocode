/*
 * XREFs of __lambda_e7233f2d7fbbc8c446f08901eacadde9_::operator()_::_1_::dtor$8 @ 0x1802DCCA1
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180033820 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall _lambda_e7233f2d7fbbc8c446f08901eacadde9_::operator()_::_1_::dtor_8(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(*(winrt::immersive_shell_component **)(a2 + 64), 0LL, a3);
}
