/*
 * XREFs of KiCustomRecurseRoutine5 @ 0x1404074D0
 * Callers:
 *     KiCustomAccessRoutine5 @ 0x1404074F0 (KiCustomAccessRoutine5.c)
 *     KiCustomRecurseRoutine4 @ 0x140407590 (KiCustomRecurseRoutine4.c)
 * Callees:
 *     KiCustomRecurseRoutine6 @ 0x1404077D0 (KiCustomRecurseRoutine6.c)
 */

__int64 __fastcall KiCustomRecurseRoutine5(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine6();
  return *a2;
}
