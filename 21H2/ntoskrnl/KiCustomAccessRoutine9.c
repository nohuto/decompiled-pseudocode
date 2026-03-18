/*
 * XREFs of KiCustomAccessRoutine9 @ 0x14042C210
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x140378CF0 (ExpCenturyDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x14042C1F0 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomAccessRoutine9(unsigned int *a1)
{
  return KiCustomRecurseRoutine9(((unsigned __int8)a1 & 3u) + 1, a1);
}
