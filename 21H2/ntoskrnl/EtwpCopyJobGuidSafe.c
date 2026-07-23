/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x140936BA4
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403C8490 (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceJob @ 0x140935F18 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x140935FF8 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobSendNotification @ 0x14093614C (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x1409362AC (EtwTraceJobSetQuery.c)
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
