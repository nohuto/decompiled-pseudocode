/*
 * XREFs of PopPowerAggregatorForceSessionSwitch @ 0x1408E9B84
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403A9F30 (PopPowerSourceChangeCallback.c)
 *     PopPreCriticalBatteryNotify @ 0x1408E7C00 (PopPreCriticalBatteryNotify.c)
 *     PdcPoReportLidState @ 0x1408EB360 (PdcPoReportLidState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140761F74 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

void __fastcall PopPowerAggregatorForceSessionSwitch(unsigned int a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C21778 == 1 )
    PopPowerAggregatorHandleIntentUnsafe((_QWORD *)3, 0, a1);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
