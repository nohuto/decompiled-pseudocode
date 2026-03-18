/*
 * XREFs of KiCustomRecurseRoutine6 @ 0x1404077D0
 * Callers:
 *     KiCustomRecurseRoutine5 @ 0x1404074D0 (KiCustomRecurseRoutine5.c)
 *     KiCustomAccessRoutine6 @ 0x1404077F0 (KiCustomAccessRoutine6.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x140407950 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomRecurseRoutine6(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine7();
  return *a2;
}
