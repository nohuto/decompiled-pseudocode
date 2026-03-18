/*
 * XREFs of IsxxxSetInformationThreadSupported @ 0x1C0064674
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C0064450 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxSetInformationThreadSupported()
{
  if ( qword_1C0252500 )
    return qword_1C0252500();
  else
    return 3221225659LL;
}
