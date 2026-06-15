/*
 * XREFs of _ApplicationSpecificEndpointInfo::GetAppKey_::_1_::catch$13 @ 0x180042521
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800153E0 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::GetAppKey_::_1_::catch_13(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 92) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 744),
                           (void *)0x25F,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspe"
                                    "cificendpointinfo.cpp",
                           a4);
  return 0LL;
}
