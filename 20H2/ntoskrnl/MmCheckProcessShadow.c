/*
 * XREFs of MmCheckProcessShadow @ 0x140328FD0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x140270BA0 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 */

__int64 MmCheckProcessShadow()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rdi
  unsigned __int8 v2; // bl
  __int64 v3; // rbp

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C4DC48, 0LL);
  Process += 1664LL;
  v2 = MiLockWorkingSetShared(Process);
  v3 = MiCheckProcessShadow(Process, 0x1Du);
  MiUnlockWorkingSetShared(Process, v2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C4DC48, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C4DC48);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DC48);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v3;
}
