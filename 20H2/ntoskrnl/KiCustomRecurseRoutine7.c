/*
 * XREFs of KiCustomRecurseRoutine7 @ 0x140407950
 * Callers:
 *     KiCustomRecurseRoutine6 @ 0x1404077D0 (KiCustomRecurseRoutine6.c)
 *     KiCustomAccessRoutine7 @ 0x140407970 (KiCustomAccessRoutine7.c)
 * Callees:
 *     KiCustomRecurseRoutine8 @ 0x140407A10 (KiCustomRecurseRoutine8.c)
 */

__int64 __fastcall KiCustomRecurseRoutine7(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine8();
  return *a2;
}
