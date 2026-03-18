/*
 * XREFs of MiSelectRelocationStartHint @ 0x1406E1734
 * Callers:
 *     MiObtainRelocationBits @ 0x140605E3C (MiObtainRelocationBits.c)
 *     MiSelectImageBase @ 0x140605F18 (MiSelectImageBase.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     RtlFindClearBitsEx @ 0x14021D340 (RtlFindClearBitsEx.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     RtlCopyBitMapEx @ 0x140339E80 (RtlCopyBitMapEx.c)
 *     RtlMergeBitMapsEx @ 0x1403C4224 (RtlMergeBitMapsEx.c)
 */

unsigned __int64 __fastcall MiSelectRelocationStartHint(__int64 a1, unsigned __int16 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 ClearBits; // rsi
  char v11; // bl

  v6 = a2;
  if ( !*(_QWORD *)(a1 + 8) )
    return RtlFindClearBitsEx(*(unsigned __int64 **)a1, a2, a3);
  CurrentThread = KeGetCurrentThread();
  if ( !a4 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4C948, 0LL);
  }
  RtlCopyBitMapEx(*(_QWORD *)a1, &qword_140C4C9D0, 0LL);
  RtlMergeBitMapsEx((unsigned __int64 *)&qword_140C4C9D0, *(__int64 **)(a1 + 8));
  ClearBits = RtlFindClearBitsEx((unsigned __int64 *)&qword_140C4C9D0, v6, a3);
  if ( !a4 )
  {
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C948, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4C948);
    KeAbPostRelease((ULONG_PTR)&qword_140C4C948);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return ClearBits;
}
