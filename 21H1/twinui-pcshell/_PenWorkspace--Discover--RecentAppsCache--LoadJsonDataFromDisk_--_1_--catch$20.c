/*
 * XREFs of _PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk_::_1_::catch$20 @ 0x1801FE08B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012BF48 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk_::_1_::catch_20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 424),
                            (void *)0x26A,
                            (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                            a4);
  return 0LL;
}
