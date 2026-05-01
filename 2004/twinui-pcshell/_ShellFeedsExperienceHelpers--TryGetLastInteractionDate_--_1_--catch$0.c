/*
 * XREFs of _ShellFeedsExperienceHelpers::TryGetLastInteractionDate_::_1_::catch$0 @ 0x18009C90F
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18014DE10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ShellFeedsExperienceHelpers::TryGetLastInteractionDate_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 152),
    (void *)0x158,
    (unsigned int)"internal\\shellcommonshell\\inc\\ShellFeeds\\shellfeedsexperiencehelpers.h",
    a4);
  return 0LL;
}
