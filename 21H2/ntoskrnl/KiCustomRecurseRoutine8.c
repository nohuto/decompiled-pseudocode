/*
 * XREFs of KiCustomRecurseRoutine8 @ 0x14040A290
 * Callers:
 *     KiCustomRecurseRoutine7 @ 0x14040A1D0 (KiCustomRecurseRoutine7.c)
 *     KiCustomAccessRoutine8 @ 0x14040A2B0 (KiCustomAccessRoutine8.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x14040A350 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomRecurseRoutine8(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine9();
  return *a2;
}
