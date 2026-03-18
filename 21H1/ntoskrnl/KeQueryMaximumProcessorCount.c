/*
 * XREFs of KeQueryMaximumProcessorCount @ 0x14050FAA0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140327170 (KeQueryMaximumProcessorCountEx.c)
 */

ULONG __noreturn KeQueryMaximumProcessorCount(void)
{
  return KeQueryMaximumProcessorCountEx(0);
}
