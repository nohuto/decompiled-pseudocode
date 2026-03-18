/*
 * XREFs of PopPowerAggregatorForceSessionSwitch @ 0x1408F0A14
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403C9A40 (PopPowerSourceChangeCallback.c)
 *     PopPreCriticalBatteryNotify @ 0x1408EEA90 (PopPreCriticalBatteryNotify.c)
 *     PdcPoReportLidState @ 0x1408F21F0 (PdcPoReportLidState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140771E64 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

void __fastcall PopPowerAggregatorForceSessionSwitch(unsigned int a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C21658 == 1 )
    PopPowerAggregatorHandleIntentUnsafe((_QWORD *)3, 0, a1);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
