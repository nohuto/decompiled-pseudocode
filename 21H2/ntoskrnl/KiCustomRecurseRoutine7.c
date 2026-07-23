/*
 * XREFs of KiCustomRecurseRoutine7 @ 0x14040A1D0
 * Callers:
 *     KiCustomRecurseRoutine6 @ 0x14040A050 (KiCustomRecurseRoutine6.c)
 *     KiCustomAccessRoutine7 @ 0x14040A1F0 (KiCustomAccessRoutine7.c)
 * Callees:
 *     KiCustomRecurseRoutine8 @ 0x14040A290 (KiCustomRecurseRoutine8.c)
 */

__int64 __fastcall KiCustomRecurseRoutine7(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine8();
  return *a2;
}
