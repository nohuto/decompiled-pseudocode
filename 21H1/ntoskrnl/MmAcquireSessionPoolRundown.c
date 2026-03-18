/*
 * XREFs of MmAcquireSessionPoolRundown @ 0x1406BD06C
 * Callers:
 *     ExGetSessionPoolTagInfo @ 0x1402F8318 (ExGetSessionPoolTagInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MmAcquireSessionPoolRundown(int a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  CurrentThread = KeGetCurrentThread();
  v2 = CurrentThread->ApcState.Process[1].AffinityPadding[5];
  if ( a1 != 1 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C4DD08, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C4DD08);
    KeAbPostRelease((ULONG_PTR)&qword_140C4DD08);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v3, v4, v5);
    return 1LL;
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C4DD08, 0LL);
  if ( (*(_DWORD *)(v2 + 4) & 0x21) == 1 )
    return 1LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C4DD08, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C4DD08);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DD08);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v7, v8, v9);
  return 0LL;
}
