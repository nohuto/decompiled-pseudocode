/*
 * XREFs of PdcPoSetPowerAction @ 0x1408EC6E0
 * Callers:
 *     <none>
 * Callees:
 *     PopExecutePowerAction @ 0x140762C18 (PopExecutePowerAction.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoSetPowerAction(__int64 a1, unsigned int a2, __int64 *a3, int a4, unsigned int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx

  PopAcquirePolicyLock(a1);
  PopExecutePowerAction(a1, a2, a3, a4, a5);
  return PopReleasePolicyLock(v10, v9);
}
