/*
 * XREFs of _CopyFaviconToEdge_::_1_::catch$15 @ 0x1800D3F8F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180005DC4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CopyFaviconToEdge_::_1_::catch_15(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 184),
                           (void *)0x56,
                           (__int64)"shellcommon\\shell\\inc\\CopyEdgeAssetsHelper.h",
                           a4);
  return &loc_180098CA8;
}
