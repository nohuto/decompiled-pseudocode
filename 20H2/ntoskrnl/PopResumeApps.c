/*
 * XREFs of PopResumeApps @ 0x140772514
 * Callers:
 *     PopIssueActionRequest @ 0x140771A58 (PopIssueActionRequest.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     PopDiagTraceEventNoPayload @ 0x14032BC04 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x1407205B8 (PopDispatchStateCallout.c)
 *     PopCheckpointSystemSleep @ 0x140996484 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopResumeApps(_DWORD *a1)
{
  PopHiberBootForceMonitorOff = 0;
  a1[4] = 5;
  qword_140C23830 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS);
  PopCheckpointSystemSleep(37LL);
  PopDispatchStateCallout(a1, 0LL);
  qword_140C23838 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS_END);
  return PopCheckpointSystemSleep(38LL);
}
