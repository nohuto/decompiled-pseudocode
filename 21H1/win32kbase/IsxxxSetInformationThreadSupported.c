/*
 * XREFs of IsxxxSetInformationThreadSupported @ 0x1C005BC94
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C005BA70 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxSetInformationThreadSupported()
{
  if ( qword_1C02584C0 )
    return qword_1C02584C0();
  else
    return 3221225659LL;
}
