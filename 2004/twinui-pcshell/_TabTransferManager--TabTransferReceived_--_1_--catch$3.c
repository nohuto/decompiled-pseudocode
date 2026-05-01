/*
 * XREFs of _TabTransferManager::TabTransferReceived_::_1_::catch$3 @ 0x180291C7D
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801505A8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TabTransferManager::TabTransferReceived_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 120),
                           (void *)0x141,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
                           a4);
  return 0LL;
}
