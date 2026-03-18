/*
 * XREFs of IsxxxDwmStopRedirectionSupported @ 0x1C0075250
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0074B1C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     VideoPortCalloutThread @ 0x1C011F704 (VideoPortCalloutThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxDwmStopRedirectionSupported()
{
  if ( qword_1C0250DA0 )
    return qword_1C0250DA0();
  else
    return 3221225659LL;
}
