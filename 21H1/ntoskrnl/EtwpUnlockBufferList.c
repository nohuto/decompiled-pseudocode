/*
 * XREFs of EtwpUnlockBufferList @ 0x1402416B8
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
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall EtwpUnlockBufferList(__int64 a1, unsigned __int8 *a2)
{
  bool v2; // zf
  KSPIN_LOCK *v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v2 = *(_DWORD *)(a1 + 316) == 1;
  v3 = (KSPIN_LOCK *)(a1 + 712);
  if ( v2 )
    return ExReleasePushLockEx((ULONG_PTR)v3, 0LL);
  v4 = *a2;
  KxReleaseSpinLock(v3);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v2 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v2 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
