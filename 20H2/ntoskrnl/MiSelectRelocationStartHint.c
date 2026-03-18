/*
 * XREFs of MiSelectRelocationStartHint @ 0x14062BD4C
 * Callers:
 *     MiSelectImageBase @ 0x14062B97C (MiSelectImageBase.c)
 *     MiObtainRelocationBits @ 0x14062BC70 (MiObtainRelocationBits.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsEx @ 0x140287020 (RtlFindClearBitsEx.c)
 *     RtlCopyBitMapEx @ 0x14030C6E0 (RtlCopyBitMapEx.c)
 *     RtlMergeBitMapsEx @ 0x1403C65BC (RtlMergeBitMapsEx.c)
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
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4C9C8, 0LL);
  }
  RtlCopyBitMapEx(*(_QWORD *)a1, &qword_140C4CA50, 0LL);
  RtlMergeBitMapsEx((unsigned __int64 *)&qword_140C4CA50, *(__int64 **)(a1 + 8));
  ClearBits = RtlFindClearBitsEx((unsigned __int64 *)&qword_140C4CA50, v6, a3);
  if ( !a4 )
  {
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C9C8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4C9C8);
    KeAbPostRelease((ULONG_PTR)&qword_140C4C9C8);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return ClearBits;
}
