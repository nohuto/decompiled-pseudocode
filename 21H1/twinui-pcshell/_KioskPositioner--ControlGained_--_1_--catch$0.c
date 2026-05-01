/*
 * XREFs of _KioskPositioner::ControlGained_::_1_::catch$0 @ 0x1803BA08C
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180129720 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall KioskPositioner::ControlGained_::_1_::catch_0(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 40),
    (void *)0x30E,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
    a4);
  return 0LL;
}
