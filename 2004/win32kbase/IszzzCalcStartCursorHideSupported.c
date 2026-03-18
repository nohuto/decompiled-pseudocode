/*
 * XREFs of IszzzCalcStartCursorHideSupported @ 0x1C00AE4A4
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0078F74 (DestroyProcessInfo.c)
 *     xxxSetProcessInitState @ 0x1C00AE270 (xxxSetProcessInitState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IszzzCalcStartCursorHideSupported()
{
  if ( qword_1C0251E98 )
    return qword_1C0251E98();
  else
    return 3221225659LL;
}
