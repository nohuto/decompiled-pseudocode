/*
 * XREFs of _CDuckingManager::RuntimeClassInitialize_::_1_::catch$4 @ 0x18003B281
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000FA80 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CDuckingManager::RuntimeClassInitialize_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x22,
                           (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
                           a4);
  return 0LL;
}
