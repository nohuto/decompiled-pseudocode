/*
 * XREFs of KiCustomAccessRoutine6 @ 0x1404077F0
 * Callers:
 *     KiBalanceSetManagerDeferredRoutine @ 0x14035AC90 (KiBalanceSetManagerDeferredRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine6 @ 0x1404077D0 (KiCustomRecurseRoutine6.c)
 */

__int64 __fastcall KiCustomAccessRoutine6(unsigned int *a1)
{
  return KiCustomRecurseRoutine6(((unsigned __int8)a1 & 3u) + 1, a1);
}
