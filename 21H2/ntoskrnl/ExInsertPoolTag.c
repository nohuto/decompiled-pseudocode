/*
 * XREFs of ExInsertPoolTag @ 0x14021728C
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140216BFC (MiAllocateContiguousMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140214DDC (ExpInsertPoolTrackerExpansion.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpAddTagForBigPages @ 0x140346B10 (ExpAddTagForBigPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwTracePool @ 0x1405A7EF4 (EtwTracePool.c)
 */

__int64 __fastcall ExInsertPoolTag(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  int v5; // r14d
  char v8; // bl
  unsigned __int16 v9; // bp
  unsigned __int64 v10; // rdi
  __int64 v11; // rbp
  int v12; // r13d
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // esi
  int v16; // ecx
  __int64 v17; // r14
  volatile signed __int32 *v18; // rbx
  int v19; // eax
  __int64 v20; // rax
  volatile signed __int32 v22; // ecx
  unsigned __int64 OldIrql; // rbx
  void *v24; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  __int64 v30; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+18h]

  v5 = a2;
  v8 = 0;
  v9 = 0;
  if ( (a5 & 1) != 0 )
  {
    v24 = (void *)(a2 + a3);
    if ( (((_DWORD)a2 + (_DWORD)a3) & 0xFFF) != 0 )
    {
      v9 = 4096 - ((unsigned __int16)v24 & 0xFFF);
      v8 = MEMORY[0xFFFFF78000000320] | 1;
      memset(v24, MEMORY[0xFFFFF78000000320] | 1, v9);
    }
  }
  if ( a3 >= a3 + 4095 )
    return 0LL;
  v10 = (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( !(unsigned int)ExpAddTagForBigPages(v5, 1416523587, (a3 + 4095) & 0xFFFFF000, a4, v9, v8) )
    return 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( PoolHitTag == 1416523587 )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3616, a4, 1416523587, v5, (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  v11 = 8LL;
  if ( (a4 & 0x20) != 0 )
  {
    v14 = ExpSessionPoolTrackTable;
    v12 = ExpSessionPoolTrackTableMask;
    v13 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    v12 = PoolTrackTableMask;
    v13 = PoolTrackTableSize;
    v14 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v30 = v13;
  v15 = v12 & 0x7DA697E6;
  v32 = v14;
  v16 = v12 & 0x7DA697E6;
  while ( 1 )
  {
    v17 = 56LL * v15;
    v18 = (volatile signed __int32 *)(v17 + v14);
    v19 = *(_DWORD *)(v17 + v14);
    if ( v19 == 1416523587 )
      break;
    if ( v19 )
    {
LABEL_18:
      v14 = v32;
      v15 = v12 & (v15 + 1);
      if ( v15 == v16 )
      {
        ExpInsertPoolTrackerExpansion(0x546E6F43u, v10, a4);
        return 1LL;
      }
    }
    else
    {
      if ( (a4 & 0x20) != 0 )
        goto LABEL_24;
      v22 = *(_DWORD *)(v17 + PoolTrackTable);
      if ( v22 )
      {
        v14 = v32;
        *v18 = v22;
        v16 = v12 & 0x7DA697E6;
      }
      else
      {
        v16 = v12 & 0x7DA697E6;
LABEL_24:
        if ( v15 == v13 - 1 )
          goto LABEL_18;
        if ( (a4 & 0x20) != 0 )
        {
          _InterlockedCompareExchange(v18, 1416523587, 0);
          v14 = v32;
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
          if ( !*(_DWORD *)(v17 + PoolTrackTable) )
          {
            *(_DWORD *)(v17 + PoolTrackTable) = 1416523587;
            *v18 = 1416523587;
          }
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
                v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v29 = (v28 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v28;
                if ( v29 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(OldIrql);
          v13 = v30;
          v14 = v32;
          v16 = v12 & 0x7DA697E6;
        }
      }
    }
  }
  if ( (a4 & 1) != 0 )
  {
    v20 = 10LL;
  }
  else
  {
    v11 = 2LL;
    v20 = 4LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&v18[v20]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v18[v11], v10);
  return 1LL;
}
