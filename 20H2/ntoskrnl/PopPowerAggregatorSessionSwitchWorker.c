/*
 * XREFs of PopPowerAggregatorSessionSwitchWorker @ 0x1408F1260
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x1402E0AF0 (KeSetTimer2.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x1407723E0 (PopPowerAggregatorScheduleWorker.c)
 *     PdcTaskClientRequest @ 0x14091E1C0 (PdcTaskClientRequest.c)
 */

void PopPowerAggregatorSessionSwitchWorker()
{
  char v0; // di
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0;
  v1 = 0;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( byte_140C216A9 )
  {
    unk_140C216A8 = 0;
    v0 = 1;
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
  }
  else
  {
    byte_140C216A9 = 1;
    v1 = 1;
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  if ( v0 )
  {
    PdcTaskClientRequest(v3, 0LL);
  }
  else if ( v1 )
  {
    LOBYTE(v2) = 1;
    PdcTaskClientRequest(v3, v2);
    v4[0] = 0LL;
    v4[1] = -1LL;
    KeSetTimer2((__int64)&unk_140C216D0, -50000000LL, 0LL, (__int64)v4);
  }
}
