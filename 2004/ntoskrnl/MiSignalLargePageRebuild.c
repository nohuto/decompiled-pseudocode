/*
 * XREFs of MiSignalLargePageRebuild @ 0x1402F41A4
 * Callers:
 *     MiWorkingSetManager @ 0x1402F3750 (MiWorkingSetManager.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     MiPageCombiningActive @ 0x1402F7340 (MiPageCombiningActive.c)
 *     MiNodeFreeZeroPages @ 0x14031E1A4 (MiNodeFreeZeroPages.c)
 *     MiNodeLargeFreeZeroPages @ 0x14031E340 (MiNodeLargeFreeZeroPages.c)
 *     MiWakeLargePageRebuild @ 0x14038ABE0 (MiWakeLargePageRebuild.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSignalLargePageRebuild(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // si
  unsigned int i; // ebx
  __int64 v7; // rdi
  bool v8; // zf
  unsigned __int64 v9; // r12
  unsigned int v10; // r13d
  unsigned __int64 v11; // r14
  unsigned int v12; // r15d
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax
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
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
      {
        LockHandle.LockQueue.Next = 0LL;
        v7 = *(_QWORD *)(a1 + 16) + 4544LL * i;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 4328);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v7 + 4328));
        if ( !*(_BYTE *)(v7 + 3249) )
        {
          v8 = (*(_BYTE *)(v7 + 3248))-- == 1;
          if ( v8 )
          {
            v9 = 0LL;
            v10 = 0;
            v11 = (-(__int64)(*(_BYTE *)(v7 + 3251) != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000;
            if ( MmNumberOfChannels )
            {
              v12 = MmNumberOfChannels;
              do
                v9 += MiNodeFreeZeroPages(v7, v10++, 0LL);
              while ( v10 < v12 );
            }
            if ( v9 < v11
              || (MiFlags & 0x30) == 0
              || (unsigned __int64)MiNodeLargeFreeZeroPages(v7, 4LL, 2LL) >> 3 >= v9
              || !(unsigned int)MiWakeLargePageRebuild(a1, i, 1LL) )
            {
              *(_BYTE *)(v7 + 3250) = 8;
              *(_BYTE *)(v7 + 3248) = 8;
            }
          }
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v14 = KeGetCurrentIrql();
          if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v16 = CurrentPrcb->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v8 = (v17 & v16[5]) == 0;
            v16[5] &= v17;
            if ( v8 )
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
