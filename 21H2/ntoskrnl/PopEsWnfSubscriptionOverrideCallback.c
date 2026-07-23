/*
 * XREFs of PopEsWnfSubscriptionOverrideCallback @ 0x1408F29E0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     ExQueryWnfStateData @ 0x14061A450 (ExQueryWnfStateData.c)
 *     PopEsWorkItemSchedule @ 0x14078019C (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsWnfSubscriptionOverrideCallback(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v4[5]; // [rsp+24h] [rbp-14h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4[0] = 4;
  if ( (int)ExQueryWnfStateData(a1, (__int64)&v5, (__int64)&v3, v4) >= 0 )
  {
    v1 = v3;
    if ( v3 <= 2 )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
      PopEsMode = v1;
      PopReleaseRwLock((ULONG_PTR)&PopEsLock);
      PopEsWorkItemSchedule(2);
    }
  }
  return 0LL;
}
