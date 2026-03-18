/*
 * XREFs of PsGetCurrentThreadStackBase @ 0x14057B8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackBase()
{
  return KeGetCurrentThread()->StackBase;
}
