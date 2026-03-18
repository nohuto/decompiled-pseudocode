/*
 * XREFs of MiAllocatePartitionId @ 0x1408CA2DC
 * Callers:
 *     MmCreatePartition @ 0x1403C9FD4 (MmCreatePartition.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsAndSet @ 0x1402E3170 (RtlFindClearBitsAndSet.c)
 *     MiExpandPartitionIds @ 0x1408DD698 (MiExpandPartitionIds.c)
 */

__int64 __fastcall MiAllocatePartitionId(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 ClearBitsAndSet; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E488, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C4E4A8, 1u, 0);
  if ( ClearBitsAndSet == 0xFFFFFFFFLL )
  {
    while ( (unsigned int)MiExpandPartitionIds() )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C4E4A8, 1u, 0);
      if ( ClearBitsAndSet != 0xFFFFFFFFLL )
        goto LABEL_4;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E488, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4E488);
    KeAbPostRelease((ULONG_PTR)&qword_140C4E488);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  else
  {
LABEL_4:
    byte_140C4E4DC = 1;
    *(_QWORD *)(qword_140C4E4C8 + 8LL * (unsigned __int16)ClearBitsAndSet) = a1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E488, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4E488);
    KeAbPostRelease((ULONG_PTR)&qword_140C4E488);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return (unsigned __int16)ClearBitsAndSet;
  }
}
