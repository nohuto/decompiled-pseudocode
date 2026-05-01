/*
 * XREFs of _wil::details::GetPlatformExceptionMessage_::_1_::dtor$2 @ 0x1802EB5C5
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18002ADB0 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall wil::details::GetPlatformExceptionMessage_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 56),
    (struct IServiceProvider *)0x38,
    0LL);
}
