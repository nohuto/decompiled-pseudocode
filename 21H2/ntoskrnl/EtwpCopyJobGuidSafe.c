/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x140882F8A
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403D683C (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceJob @ 0x1409E21EC (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x1409E22CC (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobSendNotification @ 0x1409E2420 (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x1409E2580 (EtwTraceJobSetQuery.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpCopyJobGuidSafe(_OWORD *a1, __int64 a2)
{
  if ( a2 )
    *a1 = *(_OWORD *)(a2 + 1432);
  else
    *a1 = 0LL;
}
