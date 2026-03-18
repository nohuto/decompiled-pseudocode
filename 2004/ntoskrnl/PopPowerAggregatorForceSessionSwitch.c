/*
 * XREFs of PopPowerAggregatorForceSessionSwitch @ 0x1408EAE04
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403A6260 (PopPowerSourceChangeCallback.c)
 *     PopPreCriticalBatteryNotify @ 0x1408E8E80 (PopPreCriticalBatteryNotify.c)
 *     PdcPoReportLidState @ 0x1408EC5E0 (PdcPoReportLidState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140763854 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

void __fastcall PopPowerAggregatorForceSessionSwitch(unsigned int a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C21538 == 1 )
    PopPowerAggregatorHandleIntentUnsafe((_QWORD *)3, 0, a1);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
