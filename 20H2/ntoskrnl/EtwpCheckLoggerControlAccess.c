/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x14066AA50
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1403F7364 (EtwpTransitionToRealtime.c)
 *     EtwTraceRaw @ 0x1405A4B18 (EtwTraceRaw.c)
 *     EtwpUpdateEnableMask @ 0x140669514 (EtwpUpdateEnableMask.c)
 *     EtwpRealtimeConnect @ 0x1407121C8 (EtwpRealtimeConnect.c)
 *     EtwpFlushTrace @ 0x1407130C4 (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x140713944 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407147A0 (EtwpQueryTrace.c)
 *     EtwpUpdateTrace @ 0x14078C87C (EtwpUpdateTrace.c)
 *     EtwpCheckSystemTraceAccess @ 0x14078ED10 (EtwpCheckSystemTraceAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093A69C (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x14093AD90 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409400B0 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpGetSoftRestartInformation @ 0x14094ADA4 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x14094BB84 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpAccessCheck @ 0x1405F753C (EtwpAccessCheck.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x14066AAA4 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14066AAEC (EtwpReferenceLoggerSecurityDescriptor.c)
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
