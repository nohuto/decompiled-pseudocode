/*
 * XREFs of KiCustomRecurseRoutine8 @ 0x140401610
 * Callers:
 *     KiCustomRecurseRoutine7 @ 0x140401550 (KiCustomRecurseRoutine7.c)
 *     KiCustomAccessRoutine8 @ 0x140401630 (KiCustomAccessRoutine8.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x1404016D0 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomRecurseRoutine8(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine9();
  return *a2;
}
