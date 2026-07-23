/*
 * XREFs of IoGetInitialStack @ 0x140893D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID IoGetInitialStack(void)
{
  return KeGetCurrentThread()->InitialStack;
}
