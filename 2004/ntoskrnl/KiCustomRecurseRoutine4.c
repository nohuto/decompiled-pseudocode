/*
 * XREFs of KiCustomRecurseRoutine4 @ 0x140401190
 * Callers:
 *     KiCustomAccessRoutine4 @ 0x1404011B0 (KiCustomAccessRoutine4.c)
 *     KiCustomRecurseRoutine3 @ 0x140401490 (KiCustomRecurseRoutine3.c)
 * Callees:
 *     KiCustomRecurseRoutine5 @ 0x1404010D0 (KiCustomRecurseRoutine5.c)
 */

__int64 __fastcall KiCustomRecurseRoutine4(int a1, unsigned int *a2)
{
  int v2; // ecx

  v2 = a1 - 1;
  if ( v2 )
    KiCustomRecurseRoutine5(v2, a2);
  return *a2;
}
