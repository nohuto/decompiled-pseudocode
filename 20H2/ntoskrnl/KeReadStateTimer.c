/*
 * XREFs of KeReadStateTimer @ 0x1405143D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeReadStateTimer(PKTIMER Timer)
{
  return Timer->Header.SignalState;
}
