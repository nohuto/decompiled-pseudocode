/*
 * XREFs of PopEsPowerSettingBatteryThresholdCallback @ 0x1407C1A70
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x14076D7CC (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsPowerSettingBatteryThresholdCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v4; // ebx

  v4 = -1073741811;
  if ( a2 && a3 == 4 )
  {
    v4 = 0;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
    dword_140C238F0 = *a2;
    if ( (unsigned int)dword_140C238F0 > 0x64 )
      dword_140C238F0 = 100;
    PopReleaseRwLock((ULONG_PTR)&PopEsLock);
    PopEsWorkItemSchedule(2);
  }
  return v4;
}
