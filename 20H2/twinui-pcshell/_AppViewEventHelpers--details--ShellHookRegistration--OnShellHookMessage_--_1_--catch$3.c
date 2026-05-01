/*
 * XREFs of _AppViewEventHelpers::details::ShellHookRegistration::OnShellHookMessage_::_1_::catch$3 @ 0x18033E226
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801503F8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AppViewEventHelpers::details::ShellHookRegistration::OnShellHookMessage_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x8D,
                           (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewEventHelpers.h",
                           a4);
  return 0LL;
}
