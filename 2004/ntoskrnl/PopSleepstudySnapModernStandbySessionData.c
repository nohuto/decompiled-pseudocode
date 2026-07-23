/*
 * XREFs of PopSleepstudySnapModernStandbySessionData @ 0x1408F702C
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408EAC3C (PopPowerAggregatorDisengageModernStandby.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     KeQueryInterruptTimePrecise @ 0x14034C9E0 (KeQueryInterruptTimePrecise.c)
 *     PopCalculateIdleInformation @ 0x14056AFD0 (PopCalculateIdleInformation.c)
 */

void PopSleepstudySnapModernStandbySessionData()
{
  __int64 v0; // rbx
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  __int128 v2; // [rsp+30h] [rbp-18h]
  LARGE_INTEGER v3; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
  v0 = 96LL * (unsigned int)dword_140C1E2B0;
  PopCalculateIdleInformation((__int64)&v1);
  *(_QWORD *)&PopSleepstudySessionContext[v0 + 256] = v2;
  *(_QWORD *)&PopSleepstudySessionContext[v0 + 264] = *((_QWORD *)&v1 + 1);
  *(LARGE_INTEGER *)&PopSleepstudySessionContext[v0 + 272] = KeQueryInterruptTimePrecise(&v3);
  PopReleaseRwLock((ULONG_PTR)&PopSleepstudySessionLock);
}
