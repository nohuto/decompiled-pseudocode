/*
 * XREFs of _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::TryUpdateAndReportTitleChange_::_1_::catch$19 @ 0x1800DCCA4
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180129720 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::TryUpdateAndReportTitleChange_::_1_::catch_19(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 152),
    (void *)0xA4,
    (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
    a4);
  return 0LL;
}
