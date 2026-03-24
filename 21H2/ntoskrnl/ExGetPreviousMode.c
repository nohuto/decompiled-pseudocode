/*
 * XREFs of ExGetPreviousMode @ 0x14029DFA0
 * Callers:
 *     VrpPostEnumerateKey @ 0x1405D37A4 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1405D551C (VrpPostQueryKey.c)
 *     NtApphelpCacheControl @ 0x140686430 (NtApphelpCacheControl.c)
 *     AhcCacheQueryHwId @ 0x1409800CC (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
