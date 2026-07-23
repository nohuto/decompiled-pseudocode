/*
 * XREFs of KiCustomAccessRoutine6 @ 0x14040A070
 * Callers:
 *     KiBalanceSetManagerDeferredRoutine @ 0x1402A4660 (KiBalanceSetManagerDeferredRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine6 @ 0x14040A050 (KiCustomRecurseRoutine6.c)
 */

__int64 __fastcall KiCustomAccessRoutine6(unsigned int *a1)
{
  return KiCustomRecurseRoutine6(((unsigned __int8)a1 & 3u) + 1, a1);
}
