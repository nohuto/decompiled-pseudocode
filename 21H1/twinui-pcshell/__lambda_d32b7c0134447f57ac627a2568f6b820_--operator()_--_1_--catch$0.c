/*
 * XREFs of __lambda_d32b7c0134447f57ac627a2568f6b820_::operator()_::_1_::catch$0 @ 0x1800A9B2F
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180129720 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_d32b7c0134447f57ac627a2568f6b820_::operator()_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 40),
    (void *)0x19C,
    (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
    a4);
  return 0LL;
}
