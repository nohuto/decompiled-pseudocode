/*
 * XREFs of ExSaAllocate @ 0x1403916A4
 * Callers:
 *     ExpAllocateFannedOutPushLock @ 0x140391378 (ExpAllocateFannedOutPushLock.c)
 *     EtwpCovSampCaptureContextStart @ 0x140942488 (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExpSaAllocatorAllocate @ 0x14039171C (ExpSaAllocatorAllocate.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExSaAllocate(unsigned int a1, unsigned int a2)
{
  ULONG_PTR v3; // rcx
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( (a2 & 0xFFFFFFFE) != 0 )
    KeBugCheckEx(0x16Du, a2, 0LL, 0LL, 0LL);
  v3 = ExSaNonPagedSlotAllocator;
  if ( (a2 & 1) != 0 )
    v3 = ExSaPagedSlotAllocator;
  v4 = -1LL;
  if ( v3 && a1 <= 0x1000 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v4 = ExpSaAllocatorAllocate(v3);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v4;
}
