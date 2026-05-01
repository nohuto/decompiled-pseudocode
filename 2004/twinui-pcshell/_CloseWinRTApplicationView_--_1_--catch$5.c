/*
 * XREFs of _CloseWinRTApplicationView_::_1_::catch$5 @ 0x18045EB15
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18014DE10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CloseWinRTApplicationView_::_1_::catch_5(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x12,
    (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\apptermination.cpp",
    a4);
  return 0LL;
}
