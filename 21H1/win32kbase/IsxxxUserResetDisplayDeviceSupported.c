/*
 * XREFs of IsxxxUserResetDisplayDeviceSupported @ 0x1C01FDBE0
 * Callers:
 *     VideoPortCalloutThread @ 0x1C0127A34 (VideoPortCalloutThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxUserResetDisplayDeviceSupported()
{
  if ( qword_1C02584F0 )
    return qword_1C02584F0();
  else
    return 3221225659LL;
}
