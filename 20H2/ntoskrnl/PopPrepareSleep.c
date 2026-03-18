/*
 * XREFs of PopPrepareSleep @ 0x140382774
 * Callers:
 *     PopIssueActionRequest @ 0x140771A58 (PopIssueActionRequest.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1407205B8 (PopDispatchStateCallout.c)
 *     PopDiagTracePrepareSleep @ 0x140770ABC (PopDiagTracePrepareSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x140770AD8 (PopDiagTracePrepareSleepEnd.c)
 *     PopCheckpointSystemSleep @ 0x140996484 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopPrepareSleep(__int64 a1)
{
  PopDiagTracePrepareSleep();
  PopCheckpointSystemSleep(54LL);
  *(_DWORD *)(a1 + 16) = 13;
  PopDispatchStateCallout(a1, 0LL);
  PopDiagTracePrepareSleepEnd();
  return PopCheckpointSystemSleep(55LL);
}
