/*
 * XREFs of PopPerfBoostPowerRequest @ 0x140787750
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
 *     PoLatencySensitivityHint @ 0x14037D8D0 (PoLatencySensitivityHint.c)
 *     PpmPerfClearBootOverrides @ 0x1403A2A40 (PpmPerfClearBootOverrides.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1407877FC (PpmPerfUpdateDomainPolicy.c)
 */

__int64 __fastcall PopPerfBoostPowerRequest(__int64 a1, __int64 a2, char a3)
{
  int v3; // ebx
  __int64 Buffer; // [rsp+68h] [rbp+20h] BYREF

  Buffer = 0LL;
  if ( a3 )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfMaxOverrideEnabled = 1;
    PpmPerfUpdateDomainPolicy(0LL);
    v3 = 3;
    PoLatencySensitivityHint(3);
  }
  else
  {
    PpmPerfClearBootOverrides();
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfMaxOverrideEnabled = 0;
    PpmPerfUpdateDomainPolicy(0LL);
    v3 = 1;
  }
  HIDWORD(Buffer) = -1;
  LODWORD(Buffer) = v3 | Buffer & 0xFFFFFFFD;
  ZwUpdateWnfStateData(&WNF_SEB_LOW_LATENCY_POWER_REQUEST, &Buffer, 8u, 0LL, 0LL, 0, 0);
  return 0LL;
}
