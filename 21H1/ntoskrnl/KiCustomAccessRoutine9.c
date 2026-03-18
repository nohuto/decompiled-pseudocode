/*
 * XREFs of KiCustomAccessRoutine9 @ 0x140400460
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x140323C90 (ExpCenturyDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x140400440 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomAccessRoutine9(unsigned int *a1)
{
  return KiCustomRecurseRoutine9(((unsigned __int8)a1 & 3u) + 1, a1);
}
