/*
 * XREFs of _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::IsAppActive_::_1_::catch$1 @ 0x180455A0E
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801505A8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::IsAppActive_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0xA4,
                           (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           a4);
  return 0LL;
}
