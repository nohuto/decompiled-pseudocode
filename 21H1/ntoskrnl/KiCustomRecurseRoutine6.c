/*
 * XREFs of KiCustomRecurseRoutine6 @ 0x140400140
 * Callers:
 *     KiCustomRecurseRoutine5 @ 0x1403FFE40 (KiCustomRecurseRoutine5.c)
 *     KiCustomAccessRoutine6 @ 0x140400160 (KiCustomAccessRoutine6.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x1404002C0 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomRecurseRoutine6(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine7();
  return *a2;
}
