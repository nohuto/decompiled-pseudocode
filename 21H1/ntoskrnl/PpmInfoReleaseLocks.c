/*
 * XREFs of PpmInfoReleaseLocks @ 0x14070F858
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x14070E740 (PpmSetProfilePolicySetting.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PpmReleaseLock @ 0x140278680 (PpmReleaseLock.c)
 */

void __fastcall PpmInfoReleaseLocks(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
    PpmReleaseLock(&PpmPerfPolicyLock);
  else
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
}
