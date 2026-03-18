/*
 * XREFs of KeReadStateSemaphore @ 0x1402736C0
 * Callers:
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

LONG __stdcall KeReadStateSemaphore(PRKSEMAPHORE Semaphore)
{
  return Semaphore->Header.SignalState;
}
