/*
 * XREFs of KeQueryActiveProcessors @ 0x1405100E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return qword_140CFC848[0];
}
