/*
 * XREFs of KiCustomRecurseRoutine7 @ 0x140401550
 * Callers:
 *     KiCustomRecurseRoutine6 @ 0x1404013D0 (KiCustomRecurseRoutine6.c)
 *     KiCustomAccessRoutine7 @ 0x140401570 (KiCustomAccessRoutine7.c)
 * Callees:
 *     KiCustomRecurseRoutine8 @ 0x140401610 (KiCustomRecurseRoutine8.c)
 */

__int64 __fastcall KiCustomRecurseRoutine7(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine8();
  return *a2;
}
