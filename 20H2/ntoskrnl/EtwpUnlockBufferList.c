/*
 * XREFs of EtwpUnlockBufferList @ 0x140267518
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
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall EtwpUnlockBufferList(__int64 a1, unsigned __int8 *a2)
{
  bool v2; // zf
  KSPIN_LOCK *v3; // rcx
  unsigned __int64 v4; // rbx
  int v5; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v2 = *(_DWORD *)(a1 + 316) == 1;
  v3 = (KSPIN_LOCK *)(a1 + 712);
  if ( v2 )
  {
    LOBYTE(v5) = ExReleasePushLockEx((ULONG_PTR)v3, 0LL);
  }
  else
  {
    v4 = *a2;
    KxReleaseSpinLock(v3);
    LOBYTE(v5) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v5) = KeGetCurrentIrql();
        if ( (unsigned __int8)v5 <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)v5 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v2 = (v5 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v5;
          if ( v2 )
            LOBYTE(v5) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
  }
  return v5;
}
