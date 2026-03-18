/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x1409333D4
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403C4AB4 (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceJob @ 0x140932748 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x140932828 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobSendNotification @ 0x14093297C (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x140932ADC (EtwTraceJobSetQuery.c)
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
