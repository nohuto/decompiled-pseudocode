/*
 * XREFs of ExGetPreviousMode @ 0x14027D5D0
 * Callers:
 *     VrpPostEnumerateKey @ 0x1405CABE4 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1405CC0D4 (VrpPostQueryKey.c)
 *     NtApphelpCacheControl @ 0x140661530 (NtApphelpCacheControl.c)
 *     AhcCacheQueryHwId @ 0x14097CBDC (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
