/*
 * XREFs of _CAudioSession::ForEachOwningProcess_::_1_::catch$20 @ 0x1800751A2
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C426C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioSession::ForEachOwningProcess_::_1_::catch_20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 88),
                            (void *)0x787,
                            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                            a4);
  return 0LL;
}
