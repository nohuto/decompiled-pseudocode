/*
 * XREFs of MiFreePartitionId @ 0x1408C7D1C
 * Callers:
 *     MiDeletePartition @ 0x14053591C (MiDeletePartition.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 */

char __fastcall MiFreePartitionId(unsigned __int16 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E648, 0LL);
  _bittestandreset((signed __int32 *)qword_140C4E668->Buffer, v2);
  *(_QWORD *)(qword_140C4E688 + 8 * v2) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E648, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4E648);
  KeAbPostRelease((ULONG_PTR)&qword_140C4E648);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
