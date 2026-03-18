/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x140939204
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403C7554 (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceJob @ 0x140938578 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x140938658 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobSendNotification @ 0x1409387AC (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x14093890C (EtwTraceJobSetQuery.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpCopyJobGuidSafe(_OWORD *a1, __int64 a2)
{
  if ( a2 )
    *a1 = *(_OWORD *)(a2 + 1240);
  else
    *a1 = 0LL;
}
