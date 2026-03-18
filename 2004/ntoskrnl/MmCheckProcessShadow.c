/*
 * XREFs of MmCheckProcessShadow @ 0x140358C60
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1402A1860 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
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
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C4DBC8, 0LL);
  Process += 1664LL;
  v2 = MiLockWorkingSetShared(Process);
  v3 = MiCheckProcessShadow(Process, 0x1Du);
  MiUnlockWorkingSetShared(Process, v2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C4DBC8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C4DBC8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DBC8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v3;
}
