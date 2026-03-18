/*
 * XREFs of IoGetInitialStack @ 0x140936440
 * Callers:
 *     DifIoGetInitialStackWrapper @ 0x14060F7E0 (DifIoGetInitialStackWrapper.c)
 * Callees:
 *     <none>
 */

PVOID IoGetInitialStack(void)
{
  return KeGetCurrentThread()->InitialStack;
}
