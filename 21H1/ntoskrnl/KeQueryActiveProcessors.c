/*
 * XREFs of KeQueryActiveProcessors @ 0x14050FA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return qword_140CFC838[0];
}
