/*
 * XREFs of KeQueryMaximumProcessorCount @ 0x14056D7D0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 */

ULONG __noreturn KeQueryMaximumProcessorCount(void)
{
  return KeQueryMaximumProcessorCountEx(0);
}
