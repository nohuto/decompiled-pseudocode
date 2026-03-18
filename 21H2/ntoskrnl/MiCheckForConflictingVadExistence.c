/*
 * XREFs of MiCheckForConflictingVadExistence @ 0x1402819BC
 * Callers:
 *     MiIsVaRangeAvailable @ 0x1406F8804 (MiIsVaRangeAvailable.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x1402819DC (MiCheckForConflictingVad.c)
 */

_BOOL8 MiCheckForConflictingVadExistence()
{
  return MiCheckForConflictingVad() != 0;
}
