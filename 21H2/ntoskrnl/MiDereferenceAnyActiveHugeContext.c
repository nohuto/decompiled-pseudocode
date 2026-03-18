/*
 * XREFs of MiDereferenceAnyActiveHugeContext @ 0x140246E70
 * Callers:
 *     MiZeroLargePageThread @ 0x1403C6B00 (MiZeroLargePageThread.c)
 *     MiDeleteZeroContext @ 0x1405B2670 (MiDeleteZeroContext.c)
 * Callees:
 *     MiDecrementHugeContext @ 0x14025E544 (MiDecrementHugeContext.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDereferenceAnyActiveHugeContext(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v4; // rbx
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 224);
  result = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v1 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 232) + 72LL) + 16LL) + 24512LL * *(unsigned int *)(v1 + 320);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 22808), &LockHandle);
    MiDecrementHugeContext(v4, v1, a1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = (unsigned int)KiIrqlFlags;
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v8 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    *(_QWORD *)(a1 + 224) = 0LL;
  }
  return result;
}
