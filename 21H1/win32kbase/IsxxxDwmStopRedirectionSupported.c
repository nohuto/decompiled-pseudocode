/*
 * XREFs of IsxxxDwmStopRedirectionSupported @ 0x1C00532A0
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0052B6C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     VideoPortCalloutThread @ 0x1C0127A34 (VideoPortCalloutThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxDwmStopRedirectionSupported()
{
  if ( qword_1C0258D60 )
    return qword_1C0258D60();
  else
    return 3221225659LL;
}
