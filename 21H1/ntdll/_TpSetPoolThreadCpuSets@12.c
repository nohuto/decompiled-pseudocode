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

NTSTATUS __stdcall TpSetPoolThreadCpuSets(_RTL_SRWLOCK *a1, PVOID WorkerFactoryInformation, int a3)
{
  void *Ptr; // [esp-10h] [ebp-2Ch]
  _RTL_BITMAP BitMapHeader; // [esp+10h] [ebp-Ch] BYREF
  NTSTATUS v6; // [esp+18h] [ebp-4h]

  if ( !a1 || !WorkerFactoryInformation )
    return -1073741811;
  RtlAcquireSRWLockExclusive(a1 + 11);
  Ptr = a1[9].Ptr;
  BitMapHeader.Buffer = (unsigned int *)(8 * a3);
  v6 = ZwSetInformationWorkerFactory(Ptr, WorkerFactoryThreadCpuSets, WorkerFactoryInformation, 8 * a3);
  if ( v6 >= 0 )
  {
    BitMapHeader.SizeOfBitMap = (unsigned int)BitMapHeader.Buffer;
    BitMapHeader.Buffer = (unsigned int *)WorkerFactoryInformation;
    a1[68].Value = RtlNumberOfSetBits(&BitMapHeader);
    TppAdjustRunningThreadGoalWithLock(a1);
  }
  RtlReleaseSRWLockExclusive(a1 + 11);
  return v6;
}
