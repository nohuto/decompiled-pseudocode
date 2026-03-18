/*
 * XREFs of ExSaAllocate @ 0x14038EB94
 * Callers:
 *     ExpAllocateFannedOutPushLock @ 0x14038E868 (ExpAllocateFannedOutPushLock.c)
 *     EtwpCovSampCaptureContextStart @ 0x14093ED28 (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExpSaAllocatorAllocate @ 0x14038EC0C (ExpSaAllocatorAllocate.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
