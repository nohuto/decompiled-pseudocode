/*
 * XREFs of MiSignalLargePageRebuild @ 0x140260F80
 * Callers:
 *     MiWorkingSetManager @ 0x140260C00 (MiWorkingSetManager.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiPageCombiningActive @ 0x14030E570 (MiPageCombiningActive.c)
 *     MiNodeFreeZeroPages @ 0x1403239F4 (MiNodeFreeZeroPages.c)
 *     MiNodeLargeFreeZeroPages @ 0x140323B90 (MiNodeLargeFreeZeroPages.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MiWakeLargePageRebuild @ 0x14038D750 (MiWakeLargePageRebuild.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSignalLargePageRebuild(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // si
  unsigned int i; // ebx
  __int64 v9; // rdi
  bool v10; // zf
  unsigned __int64 v11; // r12
  unsigned int v12; // r13d
  unsigned __int64 v13; // r14
  unsigned int v14; // r15d
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF

  result = *(unsigned int *)(a1 + 4);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (result & 0x20) == 0 )
  {
    result = MiPageCombiningActive(a1, a2, a3);
    if ( (_DWORD)result != 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v5 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
        SchedulerAssist[5] = v5;
      }
      for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
      {
        LockHandle.LockQueue.Next = 0LL;
        v9 = *(_QWORD *)(a1 + 16) + 4544LL * i;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 4328);
        KxAcquireQueuedSpinLock(&LockHandle, v9 + 4328, v5, SchedulerAssist);
        if ( !*(_BYTE *)(v9 + 3249) )
        {
          v10 = (*(_BYTE *)(v9 + 3248))-- == 1;
          if ( v10 )
          {
            v11 = 0LL;
            v12 = 0;
            v13 = (-(__int64)(*(_BYTE *)(v9 + 3251) != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000;
            if ( MmNumberOfChannels )
            {
              v14 = MmNumberOfChannels;
              do
                v11 += MiNodeFreeZeroPages(v9, v12++, 0LL);
              while ( v12 < v14 );
            }
            if ( v11 < v13
              || (MiFlags & 0x30) == 0
              || (unsigned __int64)MiNodeLargeFreeZeroPages(v9, 4LL, 2LL) >> 3 >= v11
              || !(unsigned int)MiWakeLargePageRebuild(a1, i, 1LL) )
            {
              *(_BYTE *)(v9 + 3250) = 8;
              *(_BYTE *)(v9 + 3248) = 8;
            }
          }
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v15 = KeGetCurrentIrql();
          if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v17 = CurrentPrcb->SchedulerAssist;
            v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v10 = (v18 & v17[5]) == 0;
            v17[5] &= v18;
            if ( v10 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
