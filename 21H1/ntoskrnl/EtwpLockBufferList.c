/*
 * XREFs of EtwpLockBufferList @ 0x140241704
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x140208060 (EtwpReserveTraceBuffer.c)
 *     EtwpDequeueFreeBuffer @ 0x140241460 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x14024161C (EtwpEnqueueAvailableBuffer.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140241960 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpAllocateFreeBuffers @ 0x1402DED30 (EtwpAllocateFreeBuffers.c)
 *     EtwpEnqueueOverflowBuffer @ 0x140321768 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x1405A73A4 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpReenableCompression @ 0x1405A7A70 (EtwpReenableCompression.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
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
