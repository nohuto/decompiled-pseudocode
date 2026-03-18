/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x14079435C
 * Callers:
 *     EtwTraceRaw @ 0x140630ACC (EtwTraceRaw.c)
 *     EtwpTransitionToRealtime @ 0x140630D00 (EtwpTransitionToRealtime.c)
 *     EtwpRealtimeConnect @ 0x1406EC524 (EtwpRealtimeConnect.c)
 *     EtwpFlushTrace @ 0x1406ECACC (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1406ECE0C (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x1406EDFEC (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1406EEF3C (EtwpQueryTrace.c)
 *     EtwpUpdateEnableMask @ 0x14079488C (EtwpUpdateEnableMask.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14081C05C (EtwQueryPerformanceTraceInformation.c)
 *     EtwpCheckSystemTraceAccess @ 0x140864164 (EtwpCheckSystemTraceAccess.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DEFB8 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409E9F80 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpGetSoftRestartInformation @ 0x1409EC9EC (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x1409ED7D4 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1407942E0 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1407943B0 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpAccessCheck @ 0x140794404 (EtwpAccessCheck.c)
 */

__int64 __fastcall EtwpCheckLoggerControlAccess(ACCESS_MASK DesiredAccess, __int64 a2)
{
  void *v4; // rdi
  unsigned int v5; // ebx

  v4 = (void *)EtwpReferenceLoggerSecurityDescriptor(a2);
  v5 = EtwpAccessCheck(v4, DesiredAccess);
  EtwpDereferenceLoggerSecurityDescriptor(a2, v4);
  return v5;
}
