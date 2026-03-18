/*
 * XREFs of KiCustomRecurseRoutine5 @ 0x1404010D0
 * Callers:
 *     KiCustomAccessRoutine5 @ 0x1404010F0 (KiCustomAccessRoutine5.c)
 *     KiCustomRecurseRoutine4 @ 0x140401190 (KiCustomRecurseRoutine4.c)
 * Callees:
 *     KiCustomRecurseRoutine6 @ 0x1404013D0 (KiCustomRecurseRoutine6.c)
 */

__int64 __fastcall KiCustomRecurseRoutine5(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine6();
  return *a2;
}
