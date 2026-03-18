/*
 * XREFs of MiCheckForConflictingVadExistence @ 0x1402A594C
 * Callers:
 *     MiIsVaRangeAvailable @ 0x140636FD8 (MiIsVaRangeAvailable.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x1402A596C (MiCheckForConflictingVad.c)
 */

_BOOL8 MiCheckForConflictingVadExistence()
{
  return MiCheckForConflictingVad() != 0;
}
