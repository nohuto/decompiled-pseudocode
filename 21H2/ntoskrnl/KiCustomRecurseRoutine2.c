/*
 * XREFs of KiCustomRecurseRoutine2 @ 0x140409DB0
 * Callers:
 *     KiCustomRecurseRoutine1 @ 0x140409CF0 (KiCustomRecurseRoutine1.c)
 *     KiCustomAccessRoutine2 @ 0x140409DD0 (KiCustomAccessRoutine2.c)
 * Callees:
 *     KiCustomRecurseRoutine3 @ 0x140409F30 (KiCustomRecurseRoutine3.c)
 */

__int64 __fastcall KiCustomRecurseRoutine2(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine3();
  return *a2;
}
