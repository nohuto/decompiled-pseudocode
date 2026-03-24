/*
 * XREFs of MiSignalLargePageRebuild @ 0x140272FE0
 * Callers:
 *     MiWorkingSetManager @ 0x140272C60 (MiWorkingSetManager.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiPageCombiningActive @ 0x140303820 (MiPageCombiningActive.c)
 *     MiNodeFreeZeroPages @ 0x140318CA4 (MiNodeFreeZeroPages.c)
 *     MiNodeLargeFreeZeroPages @ 0x140318E40 (MiNodeLargeFreeZeroPages.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     MiWakeLargePageRebuild @ 0x14038D600 (MiWakeLargePageRebuild.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSignalLargePageRebuild(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r8
  unsigned __int8 CurrentIrql; // si
  unsigned int i; // ebx
  __int64 v8; // rdi
  bool v9; // zf
  unsigned __int64 v10; // r12
  unsigned int v11; // r13d
  unsigned __int64 v12; // r14
  unsigned int v13; // r15d
  _DWORD *SchedulerAssist; // r9
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
        v8 = *(_QWORD *)(a1 + 16) + 4544LL * i;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 4328);
        KxAcquireQueuedSpinLock(&LockHandle, v8 + 4328, v5);
        if ( !*(_BYTE *)(v8 + 3249) )
        {
          v9 = (*(_BYTE *)(v8 + 3248))-- == 1;
          if ( v9 )
          {
            v10 = 0LL;
            v11 = 0;
            v12 = (-(__int64)(*(_BYTE *)(v8 + 3251) != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000;
            if ( MmNumberOfChannels )
            {
              v13 = MmNumberOfChannels;
              do
                v10 += MiNodeFreeZeroPages(v8, v11++, 0LL);
              while ( v11 < v13 );
            }
            if ( v10 < v12
              || (MiFlags & 0x30) == 0
              || (unsigned __int64)MiNodeLargeFreeZeroPages(v8, 4LL, 2LL) >> 3 >= v10
              || !(unsigned int)MiWakeLargePageRebuild(a1, i, 1LL) )
            {
              *(_BYTE *)(v8 + 3250) = 8;
              *(_BYTE *)(v8 + 3248) = 8;
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
            v9 = (v18 & v17[5]) == 0;
            v17[5] &= v18;
            if ( v9 )
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
