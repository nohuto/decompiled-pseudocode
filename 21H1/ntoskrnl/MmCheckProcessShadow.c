/*
 * XREFs of MmCheckProcessShadow @ 0x14031B1B0
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14020ED50 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

__int64 MmCheckProcessShadow()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rdi
  unsigned __int8 v2; // bl
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C4DD08, 0LL);
  Process += 1664LL;
  v2 = MiLockWorkingSetShared(Process);
  v3 = MiCheckProcessShadow(Process, 0x1Du);
  MiUnlockWorkingSetShared(Process, v2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C4DD08, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&qword_140C4DD08);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DD08);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v4, v5, v6);
  return v3;
}
