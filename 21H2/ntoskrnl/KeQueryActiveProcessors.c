/*
 * XREFs of KeQueryActiveProcessors @ 0x14045A0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return qword_140D06E48[0];
}
