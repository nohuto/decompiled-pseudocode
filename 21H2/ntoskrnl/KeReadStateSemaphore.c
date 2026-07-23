/*
 * XREFs of KeReadStateSemaphore @ 0x140238070
 * Callers:
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

LONG __stdcall KeReadStateSemaphore(PRKSEMAPHORE Semaphore)
{
  return Semaphore->Header.SignalState;
}
