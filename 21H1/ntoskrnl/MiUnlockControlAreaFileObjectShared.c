/*
 * XREFs of MiUnlockControlAreaFileObjectShared @ 0x1402CF4E4
 * Callers:
 *     MiTrimSection @ 0x1402CE300 (MiTrimSection.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MiUnlockControlAreaFileObjectShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  v2 = a1 + 104;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease(v2);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v3, v4, v5);
}
