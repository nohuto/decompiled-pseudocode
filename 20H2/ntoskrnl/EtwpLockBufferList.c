/*
 * XREFs of EtwpLockBufferList @ 0x140267564
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x140226840 (EtwpReserveTraceBuffer.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140266F84 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x1402672C4 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x14026747C (EtwpEnqueueAvailableBuffer.c)
 *     EtwpEnqueueOverflowBuffer @ 0x14032FF18 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x140360A9C (EtwpAllocateFreeBuffers.c)
 *     EtwpDequeueBufferPendingCompression @ 0x1405AB5F4 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpReenableCompression @ 0x1405ABCC0 (EtwpReenableCompression.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall EtwpLockBufferList(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // r11
  _DWORD *SchedulerAssist; // r9

  if ( *(_DWORD *)(a1 + 316) == 1 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 712, 0LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
    }
    *a2 = CurrentIrql;
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 712));
  }
}
