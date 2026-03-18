/*
 * XREFs of MiAllocatePartitionId @ 0x1408C314C
 * Callers:
 *     MmCreatePartition @ 0x1403C6584 (MmCreatePartition.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     RtlFindClearBitsAndSet @ 0x140338F70 (RtlFindClearBitsAndSet.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiExpandPartitionIds @ 0x1408D6508 (MiExpandPartitionIds.c)
 */

__int64 __fastcall MiAllocatePartitionId(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 ClearBitsAndSet; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E548, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C4E568, 1u, 0);
  if ( ClearBitsAndSet == 0xFFFFFFFFLL )
  {
    while ( (unsigned int)MiExpandPartitionIds() )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C4E568, 1u, 0);
      if ( ClearBitsAndSet != 0xFFFFFFFFLL )
        goto LABEL_4;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E548, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4E548);
    KeAbPostRelease((ULONG_PTR)&qword_140C4E548);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v8, v9, v10);
    return 0LL;
  }
  else
  {
LABEL_4:
    byte_140C4E59C = 1;
    *(_QWORD *)(qword_140C4E588 + 8LL * (unsigned __int16)ClearBitsAndSet) = a1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E548, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4E548);
    KeAbPostRelease((ULONG_PTR)&qword_140C4E548);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v4, v5, v6);
    return (unsigned __int16)ClearBitsAndSet;
  }
}
