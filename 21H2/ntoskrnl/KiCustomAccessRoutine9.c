/*
 * XREFs of KiCustomAccessRoutine9 @ 0x14040A190
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x14035F960 (ExpCenturyDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x14040A170 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomAccessRoutine9(unsigned int *a1)
{
  return KiCustomRecurseRoutine9(((unsigned __int8)a1 & 3u) + 1, a1);
}
