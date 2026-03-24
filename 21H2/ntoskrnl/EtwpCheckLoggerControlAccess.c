/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x140642DDC
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1403F9098 (EtwpTransitionToRealtime.c)
 *     EtwTraceRaw @ 0x1405A6548 (EtwTraceRaw.c)
 *     EtwpUpdateEnableMask @ 0x140642F98 (EtwpUpdateEnableMask.c)
 *     EtwpRealtimeConnect @ 0x1406B88C8 (EtwpRealtimeConnect.c)
 *     EtwpFlushTrace @ 0x1406DD6A4 (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x1406DDFBC (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1406DEE18 (EtwpQueryTrace.c)
 *     EtwpUpdateTrace @ 0x140796D68 (EtwpUpdateTrace.c)
 *     EtwpCheckSystemTraceAccess @ 0x140798978 (EtwpCheckSystemTraceAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140937E6C (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140938560 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14093D884 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpGetSoftRestartInformation @ 0x140948574 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140949350 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x140642E30 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpAccessCheck @ 0x140643B58 (EtwpAccessCheck.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1406447F0 (EtwpReferenceLoggerSecurityDescriptor.c)
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
