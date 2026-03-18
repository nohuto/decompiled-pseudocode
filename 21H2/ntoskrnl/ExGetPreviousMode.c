/*
 * XREFs of ExGetPreviousMode @ 0x1402DFD50
 * Callers:
 *     VrpPostEnumerateKey @ 0x140691CD8 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x140780AA8 (VrpPostQueryKey.c)
 *     NtApphelpCacheControl @ 0x140780D40 (NtApphelpCacheControl.c)
 *     AhcCacheQueryHwId @ 0x140A34148 (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
