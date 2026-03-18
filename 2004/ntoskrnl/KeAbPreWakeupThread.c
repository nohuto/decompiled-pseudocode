/*
 * XREFs of KeAbPreWakeupThread @ 0x140274DB0
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x140274BF8 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseMutant @ 0x140285BF0 (KeReleaseMutant.c)
 * Callees:
 *     KiAbApplyWakeupBoost @ 0x140274DEC (KiAbApplyWakeupBoost.c)
 *     KiAbFindWakeupLockEntry @ 0x140274FF8 (KiAbFindWakeupLockEntry.c)
 */

__int64 __fastcall KeAbPreWakeupThread(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = KiAbFindWakeupLockEntry(a2, a1);
  if ( result )
    return KiAbApplyWakeupBoost(a3, result, 1LL);
  return result;
}
