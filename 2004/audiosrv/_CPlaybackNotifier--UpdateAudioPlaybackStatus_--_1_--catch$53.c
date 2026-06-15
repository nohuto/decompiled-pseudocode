/*
 * XREFs of _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::catch$53 @ 0x180076C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C9AD4 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::catch_53(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 4488),
    (void *)0x17C,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
    a4);
  return 0LL;
}
