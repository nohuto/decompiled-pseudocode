/*
 * XREFs of MmAcquireSessionPoolRundown @ 0x14065C5BC
 * Callers:
 *     ExGetSessionPoolTagInfo @ 0x14025EB48 (ExGetSessionPoolTagInfo.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MmAcquireSessionPoolRundown(int a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v2; // rsi

  CurrentThread = KeGetCurrentThread();
  v2 = CurrentThread->ApcState.Process[1].AffinityPadding[5];
  if ( a1 != 1 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C4DC48, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C4DC48);
    KeAbPostRelease((ULONG_PTR)&qword_140C4DC48);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 1LL;
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C4DC48, 0LL);
  if ( (*(_DWORD *)(v2 + 4) & 0x21) == 1 )
    return 1LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C4DC48, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C4DC48);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DC48);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}
