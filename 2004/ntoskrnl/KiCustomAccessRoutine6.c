/*
 * XREFs of KiCustomAccessRoutine6 @ 0x1404013F0
 * Callers:
 *     KiBalanceSetManagerDeferredRoutine @ 0x140328FB0 (KiBalanceSetManagerDeferredRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine6 @ 0x1404013D0 (KiCustomRecurseRoutine6.c)
 */

__int64 __fastcall KiCustomAccessRoutine6(unsigned int *a1)
{
  return KiCustomRecurseRoutine6(((unsigned __int8)a1 & 3u) + 1, a1);
}
