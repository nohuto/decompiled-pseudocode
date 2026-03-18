/*
 * XREFs of MiFreePartitionId @ 0x1408CA3FC
 * Callers:
 *     MiDeletePartition @ 0x140533BDC (MiDeletePartition.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiFreePartitionId(unsigned __int16 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E488, 0LL);
  _bittestandreset((signed __int32 *)qword_140C4E4A8->Buffer, v2);
  *(_QWORD *)(qword_140C4E4C8 + 8 * v2) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E488, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4E488);
  KeAbPostRelease((ULONG_PTR)&qword_140C4E488);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
