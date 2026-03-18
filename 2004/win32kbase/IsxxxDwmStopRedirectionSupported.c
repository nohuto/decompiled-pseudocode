/*
 * XREFs of IsxxxDwmStopRedirectionSupported @ 0x1C0060850
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C006011C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     VideoPortCalloutThread @ 0x1C0121A54 (VideoPortCalloutThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxDwmStopRedirectionSupported()
{
  if ( qword_1C0252DA0 )
    return qword_1C0252DA0();
  else
    return 3221225659LL;
}
