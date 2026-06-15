/*
 * XREFs of _CAudioStream::RegisterStreamVolumeNotifications_::_1_::catch$21 @ 0x1800D24AC
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C426C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioStream::RegisterStreamVolumeNotifications_::_1_::catch_21(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x308,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                           a4);
  return 0LL;
}
