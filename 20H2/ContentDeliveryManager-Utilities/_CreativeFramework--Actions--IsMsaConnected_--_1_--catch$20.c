/*
 * XREFs of _CreativeFramework::Actions::IsMsaConnected_::_1_::catch$20 @ 0x1800D46FC
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180005E54 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CreativeFramework::Actions::IsMsaConnected_::_1_::catch_20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 232),
    (void *)0x5D,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
    a4);
  return &loc_1800848C8;
}
