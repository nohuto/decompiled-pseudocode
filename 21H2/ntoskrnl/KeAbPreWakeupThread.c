/*
 * XREFs of KeAbPreWakeupThread @ 0x1402F1940
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x1402F1788 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseMutant @ 0x1403424B0 (KeReleaseMutant.c)
 * Callees:
 *     KiAbApplyWakeupBoost @ 0x1402F197C (KiAbApplyWakeupBoost.c)
 *     KiAbFindWakeupLockEntry @ 0x1402F1B88 (KiAbFindWakeupLockEntry.c)
 */

__int64 __fastcall KeAbPreWakeupThread(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = KiAbFindWakeupLockEntry(a2, a1);
  if ( result )
    return KiAbApplyWakeupBoost(a3, result, 1LL);
  return result;
}
