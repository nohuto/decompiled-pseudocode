/*
 * XREFs of __GSHandlerCheck @ 0x1800924DC
 * Callers:
 *     <none>
 * Callees:
 *     __GSHandlerCheckCommon @ 0x180092500 (__GSHandlerCheckCommon.c)
 */

__int64 __fastcall _GSHandlerCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _GSHandlerCheckCommon(a2, a4, *(_QWORD *)(a4 + 56));
  return 1LL;
}
