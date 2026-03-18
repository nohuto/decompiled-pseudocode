/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x1408F9A00
 * Callers:
 *     TtmiCreateTerminal @ 0x1408F8E7C (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x1408F9730 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmpResetEvaluationTimer @ 0x1408F9904 (TtmpResetEvaluationTimer.c)
 *     TtmiScheduleSessionWorker @ 0x1408FAA78 (TtmiScheduleSessionWorker.c)
 */

void __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 36) |= 1u;
  TtmiScheduleSessionWorker(a1, 2LL);
  TtmpResetEvaluationTimer((PADAPTER_OBJECT)a2, 0LL);
}
