/*
 * XREFs of MiFreePartitionId @ 0x1408C7BBC
 * Callers:
 *     MiDeletePartition @ 0x1405356DC (MiDeletePartition.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 */

char __fastcall MiFreePartitionId(unsigned __int16 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E608, 0LL);
  _bittestandreset((signed __int32 *)qword_140C4E628->Buffer, v2);
  *(_QWORD *)(qword_140C4E648 + 8 * v2) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E608, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4E608);
  KeAbPostRelease((ULONG_PTR)&qword_140C4E608);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
