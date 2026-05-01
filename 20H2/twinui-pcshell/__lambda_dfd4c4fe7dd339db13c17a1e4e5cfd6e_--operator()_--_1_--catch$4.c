/*
 * XREFs of __lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e_::operator()_::_1_::catch$4 @ 0x1802FD594
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18014DC60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e_::operator()_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0xB9,
    (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\MonitorFrame.h",
    a4);
  return 0LL;
}
