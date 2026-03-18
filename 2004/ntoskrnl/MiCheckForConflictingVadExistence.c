/*
 * XREFs of MiCheckForConflictingVadExistence @ 0x14024C91C
 * Callers:
 *     MiIsVaRangeAvailable @ 0x140601F98 (MiIsVaRangeAvailable.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x14024C93C (MiCheckForConflictingVad.c)
 */

_BOOL8 MiCheckForConflictingVadExistence()
{
  return MiCheckForConflictingVad() != 0;
}
