/*
 * XREFs of __lambda_2b7617dbfdc701c36860009cb2ce5ed6_::operator()_::_1_::catch$2 @ 0x1800AF7C3
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18014DC60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_2b7617dbfdc701c36860009cb2ce5ed6_::operator()_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 40),
    (void *)0x62,
    (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
    a4);
  return 0LL;
}
