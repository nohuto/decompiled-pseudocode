/*
 * XREFs of MiFreePartitionId @ 0x1408C45BC
 * Callers:
 *     MiDeletePartition @ 0x14053020C (MiDeletePartition.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiFreePartitionId(unsigned __int16 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E408, 0LL);
  _bittestandreset((signed __int32 *)qword_140C4E428->Buffer, v2);
  *(_QWORD *)(qword_140C4E448 + 8 * v2) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E408, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4E408);
  KeAbPostRelease((ULONG_PTR)&qword_140C4E408);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
