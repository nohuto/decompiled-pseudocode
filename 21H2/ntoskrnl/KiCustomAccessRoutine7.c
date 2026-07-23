/*
 * XREFs of KiCustomAccessRoutine7 @ 0x14040A1F0
 * Callers:
 *     ExpTimeRefreshDpcRoutine @ 0x1402A4770 (ExpTimeRefreshDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x14040A1D0 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomAccessRoutine7(unsigned int *a1)
{
  return KiCustomRecurseRoutine7(((unsigned __int8)a1 & 3u) + 1, a1);
}
