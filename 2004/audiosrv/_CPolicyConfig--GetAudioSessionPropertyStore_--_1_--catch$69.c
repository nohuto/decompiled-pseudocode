/*
 * XREFs of _CPolicyConfig::GetAudioSessionPropertyStore_::_1_::catch$69 @ 0x18007A94F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C4EFC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPolicyConfig::GetAudioSessionPropertyStore_::_1_::catch_69(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0xB66,
                            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
                            a4);
  return 0LL;
}
