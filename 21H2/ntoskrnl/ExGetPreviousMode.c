/*
 * XREFs of ExGetPreviousMode @ 0x14021B500
 * Callers:
 *     VrpPostEnumerateKey @ 0x1405D37A4 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1405D551C (VrpPostQueryKey.c)
 *     NtApphelpCacheControl @ 0x1405E5590 (NtApphelpCacheControl.c)
 *     AhcCacheQueryHwId @ 0x1409802AC (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
