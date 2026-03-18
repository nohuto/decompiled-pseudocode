/*
 * XREFs of MiAllocatePartitionId @ 0x1408C449C
 * Callers:
 *     MmCreatePartition @ 0x1403C7394 (MmCreatePartition.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     RtlFindClearBitsAndSet @ 0x140269270 (RtlFindClearBitsAndSet.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiExpandPartitionIds @ 0x1408D7858 (MiExpandPartitionIds.c)
 */

__int64 __fastcall MiAllocatePartitionId(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 ClearBitsAndSet; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E408, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C4E428, 1u, 0);
  if ( ClearBitsAndSet == 0xFFFFFFFFLL )
  {
    while ( (unsigned int)MiExpandPartitionIds() )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C4E428, 1u, 0);
      if ( ClearBitsAndSet != 0xFFFFFFFFLL )
        goto LABEL_4;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E408, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4E408);
    KeAbPostRelease((ULONG_PTR)&qword_140C4E408);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  else
  {
LABEL_4:
    byte_140C4E45C = 1;
    *(_QWORD *)(qword_140C4E448 + 8LL * (unsigned __int16)ClearBitsAndSet) = a1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E408, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4E408);
    KeAbPostRelease((ULONG_PTR)&qword_140C4E408);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return (unsigned __int16)ClearBitsAndSet;
  }
}
