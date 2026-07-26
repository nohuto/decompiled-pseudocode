/*
 * XREFs of NdisActiveGroupCount @ 0x1C00BC920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT NdisActiveGroupCount(void)
{
  return KeQueryActiveGroupCount();
}
