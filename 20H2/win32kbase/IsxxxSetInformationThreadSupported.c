/*
 * XREFs of IsxxxSetInformationThreadSupported @ 0x1C00703B4
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C0070190 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxSetInformationThreadSupported()
{
  if ( qword_1C0250500 )
    return qword_1C0250500();
  else
    return 3221225659LL;
}
