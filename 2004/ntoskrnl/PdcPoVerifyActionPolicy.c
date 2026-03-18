/*
 * XREFs of PdcPoVerifyActionPolicy @ 0x1408EC740
 * Callers:
 *     <none>
 * Callees:
 *     PopVerifyPowerActionPolicy @ 0x1407793EC (PopVerifyPowerActionPolicy.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoVerifyActionPolicy(int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  PopAcquirePolicyLock((_DWORD)a1);
  PopVerifyPowerActionPolicy(a1);
  return PopReleasePolicyLock(v3, v2);
}
