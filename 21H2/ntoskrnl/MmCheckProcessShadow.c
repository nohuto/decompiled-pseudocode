/*
 * XREFs of MmCheckProcessShadow @ 0x1402CA700
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14020F880 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 MmCheckProcessShadow()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rdi
  __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD *v4; // r9
  unsigned __int8 v5; // bl
  __int64 v6; // rbp

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C4DDC8, 0LL);
  Process += 1664LL;
  v5 = MiLockWorkingSetShared(Process, v2, v3, v4);
  v6 = MiCheckProcessShadow(Process, 0x1Du);
  MiUnlockWorkingSetShared(Process, v5);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C4DDC8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&qword_140C4DDC8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DDC8);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  return v6;
}
