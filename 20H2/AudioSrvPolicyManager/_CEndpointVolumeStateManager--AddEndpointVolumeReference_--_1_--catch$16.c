/*
 * XREFs of _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::catch$16 @ 0x18003C9B3
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000FA80 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::catch_16(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 264),
                           (void *)0xC5,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
                           a4);
  return 0LL;
}
