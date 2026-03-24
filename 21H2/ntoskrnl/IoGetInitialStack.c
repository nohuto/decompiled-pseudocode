/*
 * XREFs of IoGetInitialStack @ 0x140893BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID IoGetInitialStack(void)
{
  return KeGetCurrentThread()->InitialStack;
}
