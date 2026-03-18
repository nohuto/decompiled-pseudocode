/*
 * XREFs of MiSignalLargePageRebuild @ 0x1402660EC
 * Callers:
 *     MiWorkingSetManager @ 0x1402662A0 (MiWorkingSetManager.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiNodeFreeZeroPages @ 0x140231044 (MiNodeFreeZeroPages.c)
 *     MiNodeLargeFreeZeroPages @ 0x1402311E0 (MiNodeLargeFreeZeroPages.c)
 *     MiPageCombiningActive @ 0x140349844 (MiPageCombiningActive.c)
 *     MiWakeLargePageRebuild @ 0x14038CEE0 (MiWakeLargePageRebuild.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSignalLargePageRebuild(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // si
  unsigned int i; // ebx
  __int64 v5; // rdi
  bool v6; // zf
  unsigned __int64 v7; // r12
  unsigned int v8; // r13d
  unsigned __int64 v9; // r14
  unsigned int v10; // r15d
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF

  result = *(unsigned int *)(a1 + 4);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (result & 0x20) == 0 )
  {
    result = MiPageCombiningActive(a1);
    if ( (_DWORD)result != 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
      {
        LockHandle.LockQueue.Next = 0LL;
        v5 = *(_QWORD *)(a1 + 16) + 4544LL * i;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 4328);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v5 + 4328));
        if ( !*(_BYTE *)(v5 + 3249) )
        {
          v6 = (*(_BYTE *)(v5 + 3248))-- == 1;
          if ( v6 )
          {
            v7 = 0LL;
            v8 = 0;
            v9 = (-(__int64)(*(_BYTE *)(v5 + 3251) != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000;
            if ( MmNumberOfChannels )
            {
              v10 = MmNumberOfChannels;
              do
                v7 += MiNodeFreeZeroPages(v5, v8++, 0);
              while ( v8 < v10 );
            }
            if ( v7 < v9
              || (MiFlags & 0x30) == 0
              || (unsigned __int64)MiNodeLargeFreeZeroPages((_QWORD *)v5, 4u, 2) >> 3 >= v7
              || !(unsigned int)MiWakeLargePageRebuild(a1, i, 1LL) )
            {
              *(_BYTE *)(v5 + 3250) = 8;
              *(_BYTE *)(v5 + 3248) = 8;
            }
          }
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v12 = KeGetCurrentIrql();
          if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v14 = CurrentPrcb->SchedulerAssist;
            v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v6 = (v15 & v14[5]) == 0;
            v14[5] &= v15;
            if ( v6 )
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
