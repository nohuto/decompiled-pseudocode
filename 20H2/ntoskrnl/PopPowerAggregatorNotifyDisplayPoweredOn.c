/*
 * XREFs of PopPowerAggregatorNotifyDisplayPoweredOn @ 0x1407764F4
 * Callers:
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorScheduleWorker @ 0x1407723E0 (PopPowerAggregatorScheduleWorker.c)
 */

void PopPowerAggregatorNotifyDisplayPoweredOn()
{
  if ( qword_140C542D8 )
    qword_140C542D8();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C21688 == 2 )
  {
    LOBYTE(xmmword_140C21698) = 1;
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
