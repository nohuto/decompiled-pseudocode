/*
 * XREFs of KiCustomRecurseRoutine5 @ 0x140409B70
 * Callers:
 *     KiCustomAccessRoutine5 @ 0x140409B90 (KiCustomAccessRoutine5.c)
 *     KiCustomRecurseRoutine4 @ 0x140409C30 (KiCustomRecurseRoutine4.c)
 * Callees:
 *     KiCustomRecurseRoutine6 @ 0x140409E70 (KiCustomRecurseRoutine6.c)
 */

__int64 __fastcall KiCustomRecurseRoutine5(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine6();
  return *a2;
}
