/*
 * XREFs of KiCustomRecurseRoutine5 @ 0x140409D50
 * Callers:
 *     KiCustomAccessRoutine5 @ 0x140409D70 (KiCustomAccessRoutine5.c)
 *     KiCustomRecurseRoutine4 @ 0x140409E10 (KiCustomRecurseRoutine4.c)
 * Callees:
 *     KiCustomRecurseRoutine6 @ 0x14040A050 (KiCustomRecurseRoutine6.c)
 */

__int64 __fastcall KiCustomRecurseRoutine5(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine6();
  return *a2;
}
