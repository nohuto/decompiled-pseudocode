/*
 * XREFs of KeAbPreWakeupThread @ 0x1402FC690
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x1402FC4D8 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseMutant @ 0x14034D200 (KeReleaseMutant.c)
 * Callees:
 *     KiAbApplyWakeupBoost @ 0x1402FC6CC (KiAbApplyWakeupBoost.c)
 *     KiAbFindWakeupLockEntry @ 0x1402FC8D8 (KiAbFindWakeupLockEntry.c)
 */

__int64 __fastcall KeAbPreWakeupThread(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = KiAbFindWakeupLockEntry(a2, a1);
  if ( result )
    return KiAbApplyWakeupBoost(a3, result, 1LL);
  return result;
}
