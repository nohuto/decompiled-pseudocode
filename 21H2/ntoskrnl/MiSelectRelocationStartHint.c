/*
 * XREFs of MiSelectRelocationStartHint @ 0x1407148F4
 * Callers:
 *     MiSelectImageBase @ 0x140714524 (MiSelectImageBase.c)
 *     MiObtainRelocationBits @ 0x140714818 (MiObtainRelocationBits.c)
 * Callees:
 *     RtlFindClearBitsEx @ 0x1402285A0 (RtlFindClearBitsEx.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlCopyBitMapEx @ 0x14035FEA0 (RtlCopyBitMapEx.c)
 *     RtlMergeBitMapsEx @ 0x1403C6FAC (RtlMergeBitMapsEx.c)
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
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CB48, 0LL);
  }
  RtlCopyBitMapEx(*(_QWORD *)a1, &qword_140C4CBD0, 0LL);
  RtlMergeBitMapsEx((unsigned __int64 *)&qword_140C4CBD0, *(__int64 **)(a1 + 8));
  ClearBits = RtlFindClearBitsEx((unsigned __int64 *)&qword_140C4CBD0, v6, a3);
  if ( !a4 )
  {
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CB48, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140C4CB48);
    KeAbPostRelease((ULONG_PTR)&qword_140C4CB48);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return ClearBits;
}
