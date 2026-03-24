/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x1409369D4
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403C82F0 (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceJob @ 0x140935D48 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x140935E28 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobSendNotification @ 0x140935F7C (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x1409360DC (EtwTraceJobSetQuery.c)
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
