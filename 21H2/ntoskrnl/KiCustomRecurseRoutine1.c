/*
 * XREFs of KiCustomRecurseRoutine1 @ 0x140409ED0
 * Callers:
 *     KiCustomAccessRoutine1 @ 0x140409EF0 (KiCustomAccessRoutine1.c)
 *     KiCustomRecurseRoutine0 @ 0x14040A410 (KiCustomRecurseRoutine0.c)
 * Callees:
 *     KiCustomRecurseRoutine2 @ 0x140409F90 (KiCustomRecurseRoutine2.c)
 */

__int64 __fastcall KiCustomRecurseRoutine1(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine2();
  return *a2;
}
