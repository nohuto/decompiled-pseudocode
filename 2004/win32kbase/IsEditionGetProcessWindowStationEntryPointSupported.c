/*
 * XREFs of IsEditionGetProcessWindowStationEntryPointSupported @ 0x1C003F5D0
 * Callers:
 *     ApiSetEditionCreateWindowStationEntryPoint @ 0x1C003F410 (ApiSetEditionCreateWindowStationEntryPoint.c)
 *     ApiSetEditionGetProcessWindowStationEntryPoint @ 0x1C003F538 (ApiSetEditionGetProcessWindowStationEntryPoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionGetProcessWindowStationEntryPointSupported()
{
  if ( qword_1C0251DF8 )
    return qword_1C0251DF8();
  else
    return 3221225659LL;
}
