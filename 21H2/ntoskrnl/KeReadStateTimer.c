/*
 * XREFs of KeReadStateTimer @ 0x14045A100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeReadStateTimer(PKTIMER Timer)
{
  return Timer->Header.SignalState;
}
