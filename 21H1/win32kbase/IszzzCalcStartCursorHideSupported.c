/*
 * XREFs of IszzzCalcStartCursorHideSupported @ 0x1C00A07B4
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C006B620 (DestroyProcessInfo.c)
 *     xxxSetProcessInitState @ 0x1C00A0580 (xxxSetProcessInitState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IszzzCalcStartCursorHideSupported()
{
  if ( qword_1C0257E58 )
    return qword_1C0257E58();
  else
    return 3221225659LL;
}
