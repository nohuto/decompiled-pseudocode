/*
 * XREFs of MmCheckProcessShadow @ 0x140248FF0
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1402B4180 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 MmCheckProcessShadow()
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rdi
  char v2; // bl
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbp

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C4DE08, 0LL);
  Process = (_KPROCESS *)((char *)Process + 1664);
  v2 = MiLockWorkingSetShared(Process);
  v3 = MiCheckProcessShadow(Process, 29LL);
  LOBYTE(v4) = v2;
  v5 = v3;
  MiUnlockWorkingSetShared(Process, v4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C4DE08, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&qword_140C4DE08);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DE08);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  return v5;
}
