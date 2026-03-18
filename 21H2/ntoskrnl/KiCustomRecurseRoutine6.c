/*
 * XREFs of KiCustomRecurseRoutine6 @ 0x14042BEF0
 * Callers:
 *     KiCustomRecurseRoutine5 @ 0x14042BBF0 (KiCustomRecurseRoutine5.c)
 *     KiCustomAccessRoutine6 @ 0x14042BF10 (KiCustomAccessRoutine6.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x14042C070 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomRecurseRoutine6(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine7();
  return *a2;
}
