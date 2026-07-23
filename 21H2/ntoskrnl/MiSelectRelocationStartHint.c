/*
 * XREFs of MiSelectRelocationStartHint @ 0x1406C2F44
 * Callers:
 *     MiSelectImageBase @ 0x1406C2B74 (MiSelectImageBase.c)
 *     MiObtainRelocationBits @ 0x1406C2E68 (MiObtainRelocationBits.c)
 * Callees:
 *     RtlCopyBitMapEx @ 0x1402A4DD0 (RtlCopyBitMapEx.c)
 *     RtlFindClearBitsEx @ 0x1402CCEA0 (RtlFindClearBitsEx.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlMergeBitMapsEx @ 0x1403C714C (RtlMergeBitMapsEx.c)
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
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CB88, 0LL);
  }
  RtlCopyBitMapEx(*(_QWORD *)a1, &qword_140C4CC10, 0LL);
  RtlMergeBitMapsEx((unsigned __int64 *)&qword_140C4CC10, *(__int64 **)(a1 + 8));
  ClearBits = RtlFindClearBitsEx((unsigned __int64 *)&qword_140C4CC10, v6, a3);
  if ( !a4 )
  {
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CB88, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140C4CB88);
    KeAbPostRelease((ULONG_PTR)&qword_140C4CB88);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return ClearBits;
}
