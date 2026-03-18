/*
 * XREFs of PpmUpdateIdleDomains @ 0x1405623A0
 * Callers:
 *     <none>
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140204F30 (PopExecuteOnTargetProcessors.c)
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     KeIsSubsetAffinityEx @ 0x14050DB80 (KeIsSubsetAffinityEx.c)
 */

__int64 __fastcall PpmUpdateIdleDomains(__int64 a1)
{
  int v2; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  if ( a1 && (unsigned int)KeIsSubsetAffinityEx((unsigned __int16 *)(a1 + 8), (unsigned __int16 *)KeActiveProcessors) )
  {
    v2 = PopExecuteOnTargetProcessors(a1 + 8, (__int64)PpmInstallNewIdleDomains, a1, a1 + 8);
    if ( v2 >= 0 )
      v2 = 0;
  }
  else
  {
    v2 = -1073741811;
  }
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  return (unsigned int)v2;
}
