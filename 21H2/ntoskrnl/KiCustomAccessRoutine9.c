/*
 * XREFs of KiCustomAccessRoutine9 @ 0x14040A370
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x1402A4890 (ExpCenturyDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x14040A350 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomAccessRoutine9(unsigned int *a1)
{
  return KiCustomRecurseRoutine9(((unsigned __int8)a1 & 3u) + 1, a1);
}
