/*
 * XREFs of _RtlpIsWaitBlockSpinSatisfied@8 @ 0x4B2C2465
 * Callers:
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlSleepConditionVariableSRW@16 @ 0x4B2C2180 (_RtlSleepConditionVariableSRW@16.c)
 * Callees:
 *     <none>
 */

bool __stdcall RtlpIsWaitBlockSpinSatisfied(int a1, int a2)
{
  return (*(_DWORD *)(a1 + 20) & 2) == 0;
}
