/*
 * XREFs of ExGetPreviousMode @ 0x140209E30
 * Callers:
 *     VrpPostEnumerateKey @ 0x1405D0DA4 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1405D2734 (VrpPostQueryKey.c)
 *     NtApphelpCacheControl @ 0x1405F8320 (NtApphelpCacheControl.c)
 *     AhcCacheQueryHwId @ 0x1409829AC (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
