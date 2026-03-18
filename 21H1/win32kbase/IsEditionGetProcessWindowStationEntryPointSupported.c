/*
 * XREFs of IsEditionGetProcessWindowStationEntryPointSupported @ 0x1C0030A30
 * Callers:
 *     ApiSetEditionCreateWindowStationEntryPoint @ 0x1C0030870 (ApiSetEditionCreateWindowStationEntryPoint.c)
 *     ApiSetEditionGetProcessWindowStationEntryPoint @ 0x1C0030998 (ApiSetEditionGetProcessWindowStationEntryPoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionGetProcessWindowStationEntryPointSupported()
{
  if ( qword_1C0257DB8 )
    return qword_1C0257DB8();
  else
    return 3221225659LL;
}
