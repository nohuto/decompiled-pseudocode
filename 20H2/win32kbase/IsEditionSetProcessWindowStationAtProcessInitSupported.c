/*
 * XREFs of IsEditionSetProcessWindowStationAtProcessInitSupported @ 0x1C00B6124
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 *     ApiSetEditionSetProcessWindowStationAtProcessInit @ 0x1C01C836C (ApiSetEditionSetProcessWindowStationAtProcessInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionSetProcessWindowStationAtProcessInitSupported()
{
  if ( qword_1C024FDB8 )
    return qword_1C024FDB8();
  else
    return 3221225659LL;
}
