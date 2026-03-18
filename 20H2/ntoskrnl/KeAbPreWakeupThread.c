/*
 * XREFs of KeAbPreWakeupThread @ 0x140242F10
 * Callers:
 *     KeReleaseMutant @ 0x140218050 (KeReleaseMutant.c)
 *     KeSetEventBoostPriorityEx @ 0x140242D58 (KeSetEventBoostPriorityEx.c)
 * Callees:
 *     KiAbApplyWakeupBoost @ 0x140242F4C (KiAbApplyWakeupBoost.c)
 *     KiAbFindWakeupLockEntry @ 0x140243158 (KiAbFindWakeupLockEntry.c)
 */

__int64 __fastcall KeAbPreWakeupThread(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = KiAbFindWakeupLockEntry(a2, a1);
  if ( result )
    return KiAbApplyWakeupBoost(a3, result, 1LL);
  return result;
}
