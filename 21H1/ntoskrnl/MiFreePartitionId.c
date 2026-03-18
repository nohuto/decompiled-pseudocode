/*
 * XREFs of MiFreePartitionId @ 0x1408C326C
 * Callers:
 *     MiDeletePartition @ 0x14052FBBC (MiDeletePartition.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiFreePartitionId(unsigned __int16 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E548, 0LL);
  _bittestandreset((signed __int32 *)qword_140C4E568->Buffer, v2);
  *(_QWORD *)(qword_140C4E588 + 8 * v2) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E548, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4E548);
  KeAbPostRelease((ULONG_PTR)&qword_140C4E548);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v3, v4, v5);
}
