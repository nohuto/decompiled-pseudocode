/*
 * XREFs of KeQueryActiveProcessors @ 0x140515790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return qword_140CFC848[0];
}
