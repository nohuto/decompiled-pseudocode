/*
 * XREFs of _CDuckingManager::OnRenderCommunicationsStreamStateChanged_::_1_::catch$18 @ 0x180040C55
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800153E0 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CDuckingManager::OnRenderCommunicationsStreamStateChanged_::_1_::catch_18(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 168),
                           (void *)0xCB,
                           (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
                           a4);
  return 0LL;
}
