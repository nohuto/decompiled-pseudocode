/*
 * XREFs of _TpSetPoolThreadCpuSets@12 @ 0x4B383E50
 * Callers:
 *     _TpAllocPoolInternal@8 @ 0x4B2B37A4 (_TpAllocPoolInternal@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370 (_ZwSetInformationWorkerFactory@16.c)
 *     _RtlNumberOfSetBits@4 @ 0x4B34F6C0 (_RtlNumberOfSetBits@4.c)
 *     _TppAdjustRunningThreadGoalWithLock@4 @ 0x4B384257 (_TppAdjustRunningThreadGoalWithLock@4.c)
 */

int __stdcall TpSetPoolThreadCpuSets(int a1, int a2, int a3)
{
  int v4; // [esp-10h] [ebp-2Ch]
  int v5; // [esp+10h] [ebp-Ch] BYREF
  int v6; // [esp+14h] [ebp-8h]
  int v7; // [esp+18h] [ebp-4h]

  if ( !a1 || !a2 )
    return -1073741811;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 44));
  v4 = *(_DWORD *)(a1 + 36);
  v6 = 8 * a3;
  v7 = ZwSetInformationWorkerFactory(v4, 15, a2, 8 * a3);
  if ( v7 >= 0 )
  {
    v5 = v6;
    v6 = a2;
    *(_DWORD *)(a1 + 272) = RtlNumberOfSetBits(&v5);
    TppAdjustRunningThreadGoalWithLock(a1);
  }
  RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 44));
  return v7;
}
