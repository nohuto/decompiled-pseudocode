/*
 * XREFs of _AtmosCheck::BeginAppSvcCall_::_1_::catch$18 @ 0x180134875
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C426C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AtmosCheck::BeginAppSvcCall_::_1_::catch_18(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0xAC4,
                           (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
                           a4);
  return 0LL;
}
