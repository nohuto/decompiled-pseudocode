/*
 * XREFs of _ActivationHints::GetKeyAt_::_1_::catch$28 @ 0x1803CAB1D
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801505A8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ActivationHints::GetKeyAt_::_1_::catch_28(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 120) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0x30,
                            (__int64)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
                            a4);
  return 0LL;
}
