/*
 * XREFs of PopEsWnfSubscriptionOverrideCallback @ 0x1408F50A0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     ExQueryWnfStateData @ 0x1406DB8B0 (ExQueryWnfStateData.c)
 *     PopEsWorkItemSchedule @ 0x14077C1FC (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsWnfSubscriptionOverrideCallback(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v4[5]; // [rsp+24h] [rbp-14h] BYREF
  int v5; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4[0] = 4;
  if ( (int)ExQueryWnfStateData(a1, &v5, &v3, v4) >= 0 )
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
