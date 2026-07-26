/*
 * XREFs of NdisGetSharedDataAlignment @ 0x1C005FDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG NdisGetSharedDataAlignment(void)
{
  return KeGetRecommendedSharedDataAlignment();
}
