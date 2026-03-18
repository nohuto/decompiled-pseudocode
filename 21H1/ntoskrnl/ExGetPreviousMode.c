/*
 * XREFs of ExGetPreviousMode @ 0x1402042C0
 * Callers:
 *     VrpPostEnumerateKey @ 0x1405C9814 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1405CAD04 (VrpPostQueryKey.c)
 *     NtApphelpCacheControl @ 0x1405DB230 (NtApphelpCacheControl.c)
 *     AhcCacheQueryHwId @ 0x14097B83C (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
