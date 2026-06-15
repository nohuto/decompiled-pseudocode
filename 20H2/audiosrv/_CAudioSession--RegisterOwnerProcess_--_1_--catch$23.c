/*
 * XREFs of _CAudioSession::RegisterOwnerProcess_::_1_::catch$23 @ 0x1800CA39D
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C426C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioSession::RegisterOwnerProcess_::_1_::catch_23(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 120) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0x7BC,
                            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                            a4);
  return 0LL;
}
