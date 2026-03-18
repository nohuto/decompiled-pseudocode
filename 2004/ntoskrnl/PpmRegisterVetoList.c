/*
 * XREFs of PpmRegisterVetoList @ 0x1408DF2E0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PpmRegisterVetoList(__int64 a1)
{
  unsigned int v2; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v2 = 0;
  if ( PpmIdleVetoList )
    v2 = -1073741431;
  else
    PpmIdleVetoList = a1;
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  return v2;
}
