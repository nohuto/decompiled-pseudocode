/*
 * XREFs of IsEditionSetProcessWindowStationAtProcessInitSupported @ 0x1C0056364
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 *     ApiSetEditionSetProcessWindowStationAtProcessInit @ 0x1C01CA6EC (ApiSetEditionSetProcessWindowStationAtProcessInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionSetProcessWindowStationAtProcessInitSupported()
{
  if ( qword_1C0251DB8 )
    return qword_1C0251DB8();
  else
    return 3221225659LL;
}
