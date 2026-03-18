/*
 * XREFs of IvtFreeScalableModePasidTables @ 0x14052E768
 * Callers:
 *     IvtAllocateScalableModePasidTables @ 0x14052DC38 (IvtAllocateScalableModePasidTables.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExtEnvFreeMemory @ 0x14052268C (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1405226CC (ExtEnvFreePhysicalMemory.c)
 */

void __fastcall IvtFreeScalableModePasidTables(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  void **v16; // rdi
  __int64 v17; // rsi
  void *v18; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 208);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 208));
  v6 = *(_QWORD *)a2;
  v7 = *(_QWORD **)(a2 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2
    || *v7 != a2
    || (*v7 = v6,
        *(_QWORD *)(v6 + 8) = v7,
        v8 = *(_QWORD *)(a2 + 16),
        v9 = *(_QWORD **)(a2 + 24),
        *(_QWORD *)(v8 + 8) != a2 + 16)
    || *v9 != a2 + 16 )
  {
    __fastfail(3u);
  }
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = (unsigned int)CurrentIrql + 1;
        v13 = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( ((*(_DWORD *)(a2 + 36) >> 6) & 0x3FFF) != 0 )
  {
    v16 = (void **)(a2 + 56);
    v17 = (*(_DWORD *)(a2 + 36) >> 6) & 0x3FFF;
    do
    {
      if ( *v16 )
        ExtEnvFreePhysicalMemory(v10, *v16, 0x1000u, *(_DWORD *)(a1 + 272));
      ++v16;
      --v17;
    }
    while ( v17 );
  }
  v18 = *(void **)(a2 + 48);
  if ( v18 )
    ExtEnvFreePhysicalMemory(
      v10,
      v18,
      (8 * ((*(_DWORD *)(a2 + 36) >> 6) & 0x3FFF) + 4095) & 0xFFFFF000,
      *(_DWORD *)(a1 + 272));
  ExtEnvFreeMemory(v10, a2);
}
