/*
 * XREFs of _CSplashScreen::OnViewRemoved_::_1_::catch$25 @ 0x18018B8F1
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18014DC60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CSplashScreen::OnViewRemoved_::_1_::catch_25(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x4C,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\splashscreen.cpp",
    a4);
  return 0LL;
}
