/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x140900910
 * Callers:
 *     TtmiCreateTerminal @ 0x1408FFD7C (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x140900640 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmpResetEvaluationTimer @ 0x140900814 (TtmpResetEvaluationTimer.c)
 *     TtmiScheduleSessionWorker @ 0x140901990 (TtmiScheduleSessionWorker.c)
 */

void __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 36) |= 1u;
  TtmiScheduleSessionWorker(a1, 2LL);
  TtmpResetEvaluationTimer((PADAPTER_OBJECT)a2, 0LL);
}
