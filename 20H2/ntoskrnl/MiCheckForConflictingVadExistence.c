/*
 * XREFs of MiCheckForConflictingVadExistence @ 0x140233038
 * Callers:
 *     MiIsVaRangeAvailable @ 0x140627A08 (MiIsVaRangeAvailable.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x140233058 (MiCheckForConflictingVad.c)
 */

_BOOL8 MiCheckForConflictingVadExistence()
{
  return MiCheckForConflictingVad() != 0;
}
