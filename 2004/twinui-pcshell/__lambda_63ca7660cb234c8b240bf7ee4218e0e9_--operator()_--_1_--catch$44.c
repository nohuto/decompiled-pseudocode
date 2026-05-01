/*
 * XREFs of __lambda_63ca7660cb234c8b240bf7ee4218e0e9_::operator()_::_1_::catch$44 @ 0x18026B2E7
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18014DE10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_63ca7660cb234c8b240bf7ee4218e0e9_::operator()_::_1_::catch_44(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 168),
    (void *)0xE04,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    a4);
  return 0LL;
}
