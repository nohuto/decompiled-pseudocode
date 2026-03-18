/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x140932128
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403C3BF4 (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceJob @ 0x140931498 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x140931578 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobSendNotification @ 0x1409316CC (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x14093182C (EtwTraceJobSetQuery.c)
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
