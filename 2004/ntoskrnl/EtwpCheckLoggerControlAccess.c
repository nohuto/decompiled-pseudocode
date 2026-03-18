/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x1406C6E08
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1403F2950 (EtwpTransitionToRealtime.c)
 *     EtwTraceRaw @ 0x1405A1078 (EtwTraceRaw.c)
 *     EtwpQueryTrace @ 0x140645318 (EtwpQueryTrace.c)
 *     EtwpFlushTrace @ 0x1406C65C8 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x1406C6788 (EtwpRealtimeConnect.c)
 *     EtwpUpdateEnableMask @ 0x1406C6D30 (EtwpUpdateEnableMask.c)
 *     EtwpStopTrace @ 0x1406C75AC (EtwpStopTrace.c)
 *     EtwpCheckSystemTraceAccess @ 0x14077F2A8 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdateTrace @ 0x140780C28 (EtwpUpdateTrace.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093486C (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140934F60 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14093A280 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpGetSoftRestartInformation @ 0x140944FE4 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140945DC4 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpAccessCheck @ 0x14066BB48 (EtwpAccessCheck.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1406C6E5C (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1406C6EA4 (EtwpReferenceLoggerSecurityDescriptor.c)
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
