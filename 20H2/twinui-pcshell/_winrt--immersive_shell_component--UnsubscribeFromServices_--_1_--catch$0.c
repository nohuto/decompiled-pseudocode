/*
 * XREFs of _winrt::immersive_shell_component::UnsubscribeFromServices_::_1_::catch$0 @ 0x180465514
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801503F8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::immersive_shell_component::UnsubscribeFromServices_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x16D,
                           (__int64)"internal\\shellcommonshell\\inc\\winrt/immersive_shell_component.h",
                           a4);
  return 0LL;
}
