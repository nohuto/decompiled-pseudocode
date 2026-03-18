/*
 * XREFs of KeReadStateSemaphore @ 0x140240420
 * Callers:
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

LONG __stdcall KeReadStateSemaphore(PRKSEMAPHORE Semaphore)
{
  return Semaphore->Header.SignalState;
}
