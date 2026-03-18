/*
 * XREFs of IsEditionGetProcessWindowStationEntryPointSupported @ 0x1C00A1D00
 * Callers:
 *     ApiSetEditionCreateWindowStationEntryPoint @ 0x1C00A1B40 (ApiSetEditionCreateWindowStationEntryPoint.c)
 *     ApiSetEditionGetProcessWindowStationEntryPoint @ 0x1C00A1C68 (ApiSetEditionGetProcessWindowStationEntryPoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionGetProcessWindowStationEntryPointSupported()
{
  if ( qword_1C024FDF8 )
    return qword_1C024FDF8();
  else
    return 3221225659LL;
}
