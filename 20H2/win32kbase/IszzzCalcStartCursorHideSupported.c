/*
 * XREFs of IszzzCalcStartCursorHideSupported @ 0x1C0063864
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C00620F8 (DestroyProcessInfo.c)
 *     xxxSetProcessInitState @ 0x1C0063630 (xxxSetProcessInitState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IszzzCalcStartCursorHideSupported()
{
  if ( qword_1C024FE98 )
    return qword_1C024FE98();
  else
    return 3221225659LL;
}
