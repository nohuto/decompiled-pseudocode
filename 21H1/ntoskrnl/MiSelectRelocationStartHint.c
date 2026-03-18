/*
 * XREFs of MiSelectRelocationStartHint @ 0x1406C11B4
 * Callers:
 *     MiObtainRelocationBits @ 0x14063AE7C (MiObtainRelocationBits.c)
 *     MiSelectImageBase @ 0x14063AF58 (MiSelectImageBase.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     RtlFindClearBitsEx @ 0x140276390 (RtlFindClearBitsEx.c)
 *     RtlCopyBitMapEx @ 0x1402FCB40 (RtlCopyBitMapEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     RtlMergeBitMapsEx @ 0x1403C3364 (RtlMergeBitMapsEx.c)
 */

unsigned __int64 __fastcall MiSelectRelocationStartHint(__int64 a1, unsigned __int16 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 ClearBits; // rsi
  char v11; // bl
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  v6 = a2;
  if ( !*(_QWORD *)(a1 + 8) )
    return RtlFindClearBitsEx(*(unsigned __int64 **)a1, a2, a3);
  CurrentThread = KeGetCurrentThread();
  if ( !a4 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CA88, 0LL);
  }
  RtlCopyBitMapEx(*(_QWORD *)a1, &qword_140C4CB10, 0LL);
  RtlMergeBitMapsEx((unsigned __int64 *)&qword_140C4CB10, *(__int64 **)(a1 + 8));
  ClearBits = RtlFindClearBitsEx((unsigned __int64 *)&qword_140C4CB10, v6, a3);
  if ( !a4 )
  {
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CA88, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140C4CA88);
    KeAbPostRelease((ULONG_PTR)&qword_140C4CA88);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v12, v13, v14);
  }
  return ClearBits;
}
