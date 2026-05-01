/*
 * XREFs of _HolographicViewHostItemLedger::TryGetViewByWindowId_::_1_::catch$2 @ 0x180249190
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801505A8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall HolographicViewHostItemLedger::TryGetViewByWindowId_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 88) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0xC9,
                           (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicviewhostitemledger.cpp",
                           a4);
  return 0LL;
}
