/*
 * XREFs of _wil::details::ThrowPlatformException_::_1_::dtor$0 @ 0x1802CA83F
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180033820 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall wil::details::ThrowPlatformException_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 64),
    (struct IServiceProvider *)0x38,
    0LL);
}
