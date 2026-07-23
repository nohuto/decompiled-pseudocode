/*
 * XREFs of KiCustomRecurseRoutine2 @ 0x140409F90
 * Callers:
 *     KiCustomRecurseRoutine1 @ 0x140409ED0 (KiCustomRecurseRoutine1.c)
 *     KiCustomAccessRoutine2 @ 0x140409FB0 (KiCustomAccessRoutine2.c)
 * Callees:
 *     KiCustomRecurseRoutine3 @ 0x14040A110 (KiCustomRecurseRoutine3.c)
 */

__int64 __fastcall KiCustomRecurseRoutine2(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine3();
  return *a2;
}
