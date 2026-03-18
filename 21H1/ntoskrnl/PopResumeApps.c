/*
 * XREFs of PopResumeApps @ 0x140762624
 * Callers:
 *     PopIssueActionRequest @ 0x140761B68 (PopIssueActionRequest.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     PopDiagTraceEventNoPayload @ 0x14031D664 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x1406FDDE0 (PopDispatchStateCallout.c)
 *     PopCheckpointSystemSleep @ 0x14098F6C4 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopResumeApps(_DWORD *a1)
{
  PopHiberBootForceMonitorOff = 0;
  a1[4] = 5;
  qword_140C23930 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS);
  PopCheckpointSystemSleep(37LL);
  PopDispatchStateCallout(a1, 0LL);
  qword_140C23938 = KeQueryPerformanceCounter(0LL).QuadPart;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_RESUMEAPPS_END);
  return PopCheckpointSystemSleep(38LL);
}
