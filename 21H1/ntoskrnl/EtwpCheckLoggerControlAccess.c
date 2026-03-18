/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x1405F2620
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1403F16C0 (EtwpTransitionToRealtime.c)
 *     EtwTraceRaw @ 0x1405A0988 (EtwTraceRaw.c)
 *     EtwpUpdateEnableMask @ 0x1405F26BC (EtwpUpdateEnableMask.c)
 *     EtwpRealtimeConnect @ 0x140677318 (EtwpRealtimeConnect.c)
 *     EtwpFlushTrace @ 0x140678E30 (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x1406796F8 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x14067A554 (EtwpQueryTrace.c)
 *     EtwpUpdateTrace @ 0x14077FAB8 (EtwpUpdateTrace.c)
 *     EtwpCheckSystemTraceAccess @ 0x140780EB8 (EtwpCheckSystemTraceAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1409335CC (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140933CC0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140938FE0 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpGetSoftRestartInformation @ 0x140943D70 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140944B54 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1405F25A4 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1405F2674 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpAccessCheck @ 0x1405F4798 (EtwpAccessCheck.c)
 */

__int64 __fastcall EtwpCheckLoggerControlAccess(ACCESS_MASK DesiredAccess, __int64 a2)
{
  void *v4; // rdi
  unsigned int v5; // ebx

  v4 = (void *)EtwpReferenceLoggerSecurityDescriptor(a2);
  v5 = EtwpAccessCheck(v4, DesiredAccess, 0LL);
  EtwpDereferenceLoggerSecurityDescriptor(a2, v4);
  return v5;
}
