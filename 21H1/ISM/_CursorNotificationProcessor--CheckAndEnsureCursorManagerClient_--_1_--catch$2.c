/*
 * XREFs of _CursorNotificationProcessor::CheckAndEnsureCursorManagerClient_::_1_::catch$2 @ 0x180051B78
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B4A38 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CursorNotificationProcessor::CheckAndEnsureCursorManagerClient_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0xD1,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornoti"
                  "ficationprocessor.cpp",
    a4);
  return 0LL;
}
