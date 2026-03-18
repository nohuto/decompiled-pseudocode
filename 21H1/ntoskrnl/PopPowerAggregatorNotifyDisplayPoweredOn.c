/*
 * XREFs of PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140765B04
 * Callers:
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorScheduleWorker @ 0x1407624F0 (PopPowerAggregatorScheduleWorker.c)
 */

void PopPowerAggregatorNotifyDisplayPoweredOn()
{
  if ( qword_140C54358 )
    qword_140C54358();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C217A8 == 2 )
  {
    LOBYTE(xmmword_140C217B8) = 1;
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
