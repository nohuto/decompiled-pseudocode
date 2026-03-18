/*
 * XREFs of KiCustomAccessRoutine9 @ 0x140407AF0
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x14035AEC0 (ExpCenturyDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x140407AD0 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomAccessRoutine9(unsigned int *a1)
{
  return KiCustomRecurseRoutine9(((unsigned __int8)a1 & 3u) + 1, a1);
}
