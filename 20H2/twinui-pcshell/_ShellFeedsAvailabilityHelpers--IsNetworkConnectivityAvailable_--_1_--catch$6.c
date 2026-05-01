/*
 * XREFs of _ShellFeedsAvailabilityHelpers::IsNetworkConnectivityAvailable_::_1_::catch$6 @ 0x1800EDF88
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18014DC60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ShellFeedsAvailabilityHelpers::IsNetworkConnectivityAvailable_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 40),
    (void *)0x8E,
    (unsigned int)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
    a4);
  return 0LL;
}
