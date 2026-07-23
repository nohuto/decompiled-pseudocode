/*
 * XREFs of KiCustomRecurseRoutine6 @ 0x14040A050
 * Callers:
 *     KiCustomRecurseRoutine5 @ 0x140409D50 (KiCustomRecurseRoutine5.c)
 *     KiCustomAccessRoutine6 @ 0x14040A070 (KiCustomAccessRoutine6.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x14040A1D0 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomRecurseRoutine6(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine7();
  return *a2;
}
