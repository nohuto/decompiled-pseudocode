/*
 * XREFs of NdisSystemProcessorCount @ 0x1C00BCA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CCHAR NdisSystemProcessorCount(void)
{
  return KeQueryMaximumProcessorCountEx(0);
}
