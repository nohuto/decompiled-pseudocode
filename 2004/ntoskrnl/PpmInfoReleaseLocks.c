/*
 * XREFs of PpmInfoReleaseLocks @ 0x1406A85B8
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1406A74A0 (PpmSetProfilePolicySetting.c)
 * Callees:
 *     PpmReleaseLock @ 0x14021F630 (PpmReleaseLock.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 */

void __fastcall PpmInfoReleaseLocks(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
    PpmReleaseLock(&PpmPerfPolicyLock);
  else
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
}
