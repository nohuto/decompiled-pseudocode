/*
 * XREFs of __lambda_db2cedfb0854aef668be6bda3030eb84_::operator()_::_1_::catch$0 @ 0x18045C72D
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18014DE10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_db2cedfb0854aef668be6bda3030eb84_::operator()_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 40),
    (void *)0x190,
    (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
    a4);
  return 0LL;
}
