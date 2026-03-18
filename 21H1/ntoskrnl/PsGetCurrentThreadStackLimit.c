/*
 * XREFs of PsGetCurrentThreadStackLimit @ 0x14057B8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackLimit()
{
  return KeGetCurrentThread()->StackLimit;
}
