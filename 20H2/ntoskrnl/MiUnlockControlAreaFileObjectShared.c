/*
 * XREFs of MiUnlockControlAreaFileObjectShared @ 0x140355794
 * Callers:
 *     MiTrimSection @ 0x1403545B0 (MiTrimSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MiUnlockControlAreaFileObjectShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = (signed __int64 *)(a1 + 104);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
