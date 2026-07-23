/*
 * XREFs of MiDereferenceAnyActiveHugeContext @ 0x14054FEA0
 * Callers:
 *     MiDeleteZeroThreadContext @ 0x14054FE54 (MiDeleteZeroThreadContext.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDecrementHugeContext @ 0x140397F68 (MiDecrementHugeContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiDereferenceAnyActiveHugeContext(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  _DWORD *v4; // r9
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 80) )
  {
    v2 = *(_QWORD *)(a1 + 224);
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( v2 )
    {
      KeAcquireInStackQueuedSpinLock(
        (PKSPIN_LOCK)(qword_140C50DD0 + 4544LL * *(unsigned int *)(v2 + 184) + 4304),
        &LockHandle);
      MiDecrementHugeContext((char *)v2, a1, v3, v4);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v9 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v10 = (v9 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v9;
            if ( v10 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      *(_QWORD *)(a1 + 224) = 0LL;
    }
  }
}
