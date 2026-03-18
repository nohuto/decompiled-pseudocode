/*
 * XREFs of PopEsInStandbyLowPowerEpochCallback @ 0x1408F4F90
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopEsInStandbyEvaluate @ 0x1408F4FC0 (PopEsInStandbyEvaluate.c)
 */

__int64 __fastcall PopEsInStandbyLowPowerEpochCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        PVOID Context)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  PopEsInStandbyEvaluate();
  PopReleaseRwLock((ULONG_PTR)&PopEsLock);
  return 0LL;
}
