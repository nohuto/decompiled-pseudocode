/*
 * XREFs of IsxxxUserResetDisplayDeviceSupported @ 0x1C01F81B0
 * Callers:
 *     VideoPortCalloutThread @ 0x1C0121A54 (VideoPortCalloutThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxUserResetDisplayDeviceSupported()
{
  if ( qword_1C0252530 )
    return qword_1C0252530();
  else
    return 3221225659LL;
}
