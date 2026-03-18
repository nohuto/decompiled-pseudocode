/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x1408FACF0
 * Callers:
 *     TtmiCreateTerminal @ 0x1408FA16C (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x1408FAA20 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmpResetEvaluationTimer @ 0x1408FABF4 (TtmpResetEvaluationTimer.c)
 *     TtmiScheduleSessionWorker @ 0x1408FBD68 (TtmiScheduleSessionWorker.c)
 */

void __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 36) |= 1u;
  TtmiScheduleSessionWorker(a1, 2LL);
  TtmpResetEvaluationTimer((PADAPTER_OBJECT)a2, 0LL);
}
