/*
 * XREFs of ExSaAllocate @ 0x14038E024
 * Callers:
 *     ExpAllocateFannedOutPushLock @ 0x14038DCF8 (ExpAllocateFannedOutPushLock.c)
 *     EtwpCovSampCaptureContextStart @ 0x14093DAA8 (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExpSaAllocatorAllocate @ 0x14038E09C (ExpSaAllocatorAllocate.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall ExSaAllocate(unsigned int a1, unsigned int a2)
{
  ULONG_PTR v3; // rcx
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

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
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
  }
  return v4;
}
