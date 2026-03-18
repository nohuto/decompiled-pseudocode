/*
 * XREFs of KeAbPreWakeupThread @ 0x140359790
 * Callers:
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 *     KeSetEventBoostPriorityEx @ 0x1403595B4 (KeSetEventBoostPriorityEx.c)
 * Callees:
 *     KiAbApplyWakeupBoost @ 0x1403597CC (KiAbApplyWakeupBoost.c)
 *     KiAbFindWakeupLockEntry @ 0x140359A34 (KiAbFindWakeupLockEntry.c)
 */

__int64 __fastcall KeAbPreWakeupThread(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = KiAbFindWakeupLockEntry(a2, a1);
  if ( result )
    return KiAbApplyWakeupBoost(a3, result, 1LL);
  return result;
}
