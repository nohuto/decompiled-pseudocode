/*
 * XREFs of _CreativeFramework::Actions::SetLockScreenHotspotsService::DeleteLockScreenRegistryKeys_::_1_::catch$5 @ 0x1800D60EC
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180005DB4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::DeleteLockScreenRegistryKeys_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 96) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 1784),
                           (void *)0xBF,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
                           a4);
  return &loc_1800995BB;
}
