/*
 * XREFs of PopPrepareSleep @ 0x1403809B4
 * Callers:
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1407127E4 (PopDispatchStateCallout.c)
 *     PopDiagTracePrepareSleep @ 0x1407624AC (PopDiagTracePrepareSleep.c)
 *     PopDiagTracePrepareSleepEnd @ 0x1407624C8 (PopDiagTracePrepareSleepEnd.c)
 *     PopCheckpointSystemSleep @ 0x140990414 (PopCheckpointSystemSleep.c)
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
