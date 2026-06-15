/*
 * XREFs of _CDeviceGraphObjectsStore::GetSaDevices_::_1_::catch$18 @ 0x18007B8C7
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C426C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::GetSaDevices_::_1_::catch_18(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 96) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x1EA,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           a4);
  return 0LL;
}
