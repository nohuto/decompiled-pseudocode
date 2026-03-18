/*
 * XREFs of KeReadStateSemaphore @ 0x1402F4820
 * Callers:
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

LONG __stdcall KeReadStateSemaphore(PRKSEMAPHORE Semaphore)
{
  return Semaphore->Header.SignalState;
}
