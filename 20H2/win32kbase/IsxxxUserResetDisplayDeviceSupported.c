/*
 * XREFs of IsxxxUserResetDisplayDeviceSupported @ 0x1C01F6880
 * Callers:
 *     VideoPortCalloutThread @ 0x1C011F704 (VideoPortCalloutThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxUserResetDisplayDeviceSupported()
{
  if ( qword_1C0250530 )
    return qword_1C0250530();
  else
    return 3221225659LL;
}
