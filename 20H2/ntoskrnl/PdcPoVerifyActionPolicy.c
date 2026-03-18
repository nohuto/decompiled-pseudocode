/*
 * XREFs of PdcPoVerifyActionPolicy @ 0x1408F2350
 * Callers:
 *     <none>
 * Callees:
 *     PopVerifyPowerActionPolicy @ 0x1407879EC (PopVerifyPowerActionPolicy.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoVerifyActionPolicy(int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  PopAcquirePolicyLock((_DWORD)a1);
  PopVerifyPowerActionPolicy(a1);
  return PopReleasePolicyLock(v3, v2);
}
