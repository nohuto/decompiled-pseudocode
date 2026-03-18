/*
 * XREFs of PpmInfoReleaseLocks @ 0x1406FAF58
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1406F9E44 (PpmSetProfilePolicySetting.c)
 * Callees:
 *     PpmReleaseLock @ 0x140288880 (PpmReleaseLock.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 */

void __fastcall PpmInfoReleaseLocks(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
    PpmReleaseLock(&PpmPerfPolicyLock);
  else
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
}
