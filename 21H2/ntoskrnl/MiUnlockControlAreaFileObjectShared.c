/*
 * XREFs of MiUnlockControlAreaFileObjectShared @ 0x1402FB614
 * Callers:
 *     MiTrimSection @ 0x1402FA430 (MiTrimSection.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall MiUnlockControlAreaFileObjectShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v2; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = a1 + 104;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease(v2);
  return KiLeaveGuardedRegionUnsafe(CurrentThread);
}
