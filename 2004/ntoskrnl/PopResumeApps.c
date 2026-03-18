/*
 * XREFs of PopResumeApps @ 0x140763F04
 * Callers:
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     PopDiagTraceEventNoPayload @ 0x14035B1A4 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x1407127E4 (PopDispatchStateCallout.c)
 *     PopCheckpointSystemSleep @ 0x140990414 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopResumeApps(_DWORD *a1)
{
  PopHiberBootForceMonitorOff = 0;
  a1[4] = 5;
  qword_140C23370 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS);
  PopCheckpointSystemSleep(37LL);
  PopDispatchStateCallout(a1, 0LL);
  qword_140C23378 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS_END);
  return PopCheckpointSystemSleep(38LL);
}
