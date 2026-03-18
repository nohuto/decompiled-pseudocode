/*
 * XREFs of PsGetCurrentThreadPreviousMode @ 0x1402FFE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PsGetCurrentThreadPreviousMode()
{
  return KeGetCurrentThread()->PreviousMode;
}
