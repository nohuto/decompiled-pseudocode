/*
 * XREFs of PsBoostThreadIo @ 0x140263840
 * Callers:
 *     CmEnumerateValueKey @ 0x14061EA20 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x140620880 (CmQueryValueKey.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x140263860 (PsBoostThreadIoEx.c)
 */

__int64 __fastcall PsBoostThreadIo(__int64 a1, __int64 a2)
{
  return PsBoostThreadIoEx(a1, a2, 0LL, 0LL);
}
