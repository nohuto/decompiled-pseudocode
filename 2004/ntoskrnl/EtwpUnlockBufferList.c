/*
 * XREFs of EtwpUnlockBufferList @ 0x14027E450
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x14027E1FC (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x14027E3B4 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x14027E6F8 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpReserveTraceBuffer @ 0x14029AB70 (EtwpReserveTraceBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x1402FF564 (EtwpAllocateFreeBuffers.c)
 *     EtwpEnqueueOverflowBuffer @ 0x14035F118 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x1405A7A94 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpReenableCompression @ 0x1405A8160 (EtwpReenableCompression.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
