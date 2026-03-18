/*
 * XREFs of PdcPoVerifyPowerState @ 0x1407C2830
 * Callers:
 *     <none>
 * Callees:
 *     PopVerifySystemPowerState @ 0x140779548 (PopVerifySystemPowerState.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoVerifyPowerState(int *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  PopAcquirePolicyLock((_DWORD)a1);
  PopVerifySystemPowerState(a1, a2);
  return PopReleasePolicyLock(v5, v4);
}
