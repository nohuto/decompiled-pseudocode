/*
 * XREFs of KiCustomAccessRoutine9 @ 0x1404016F0
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x140328D70 (ExpCenturyDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x1404016D0 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomAccessRoutine9(unsigned int *a1)
{
  return KiCustomRecurseRoutine9(((unsigned __int8)a1 & 3u) + 1, a1);
}
