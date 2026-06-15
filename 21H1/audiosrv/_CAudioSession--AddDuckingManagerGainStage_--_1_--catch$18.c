/*
 * XREFs of _CAudioSession::AddDuckingManagerGainStage_::_1_::catch$18 @ 0x18006DDEC
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C4E0C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioSession::AddDuckingManagerGainStage_::_1_::catch_18(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0xF58,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           a4);
  return 0LL;
}
