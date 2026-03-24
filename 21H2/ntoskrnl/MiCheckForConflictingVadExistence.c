/*
 * XREFs of MiCheckForConflictingVadExistence @ 0x14025B04C
 * Callers:
 *     MiIsVaRangeAvailable @ 0x14061DBD8 (MiIsVaRangeAvailable.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x14025B06C (MiCheckForConflictingVad.c)
 */

_BOOL8 MiCheckForConflictingVadExistence()
{
  return MiCheckForConflictingVad() != 0;
}
