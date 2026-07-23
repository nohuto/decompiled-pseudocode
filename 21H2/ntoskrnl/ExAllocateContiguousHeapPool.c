/*
 * XREFs of ExAllocateContiguousHeapPool @ 0x140216FE0
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140216BFC (MiAllocateContiguousMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140214DDC (ExpInsertPoolTrackerExpansion.c)
 *     ExGetHeapFromType @ 0x14021720C (ExGetHeapFromType.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlpHpSegAlloc @ 0x1403145A0 (RtlpHpSegAlloc.c)
 *     ExpAddTagForBigPages @ 0x140346B10 (ExpAddTagForBigPages.c)
 *     RtlpHpFreeHeap @ 0x14034CE50 (RtlpHpFreeHeap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePool @ 0x1405A7EF4 (EtwTracePool.c)
 */

__int64 __fastcall ExAllocateContiguousHeapPool(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  __int64 v6; // rbx
  __int64 v8; // r14
  __int64 HeapFromType; // rsi
  __int64 v10; // r11
  unsigned __int64 v11; // r10
  int v13; // ecx
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r12d
  __int64 v18; // r8
  unsigned int v19; // r15d
  __int64 v20; // rbp
  int v21; // r13d
  __int64 v22; // rsi
  int v23; // eax
  int v24; // ecx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  bool v30; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v32; // [rsp+80h] [rbp+8h]

  v6 = 0LL;
  v8 = 0LL;
  HeapFromType = ExGetHeapFromType(512LL, a5, 0LL);
  if ( v11 > *(_QWORD *)(*(_QWORD *)qword_140C4E688 + 6912LL)
    || a2 < *(_QWORD *)(*(_QWORD *)qword_140C4E688 + 6920LL)
    || (unsigned __int64)(v10 - 1) <= 0x1FE )
  {
    goto LABEL_3;
  }
  if ( (*(_BYTE *)(HeapFromType + 269) & 7) == 0 || a4 >= *(unsigned int *)(HeapFromType + 464) )
    return v6;
  v13 = HeapFromType + 256;
  v14 = (a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v14 > *(unsigned int *)(HeapFromType + 272) )
    v13 = HeapFromType + 448;
  v15 = RtlpHpSegAlloc(v13, v14, v14, v14, 0x800000);
  v8 = v15;
  if ( !v15 )
    return v6;
  if ( !(unsigned int)ExpAddTagForBigPages(v15, 1953394499, v14, 512, 0, 0) )
  {
LABEL_3:
    if ( v8 )
      RtlpHpFreeHeap(HeapFromType, v8, 0LL);
    return v6;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( PoolHitTag == 1953394499 )
    __debugbreak();
  v16 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v16 = EtwTracePool(3616, 512, 1953394499, v8, v14);
  LODWORD(v16) = KeGetPcr()->Prcb.Number;
  v17 = PoolTrackTableMask;
  v18 = PoolTrackTableSize;
  v19 = PoolTrackTableMask & 0x5DA6EBDA;
  v32 = PoolTrackTableSize;
  v20 = (__int64)*(&ExPoolTagTables + v16);
  v21 = PoolTrackTableMask & 0x5DA6EBDA;
  do
  {
    while ( 1 )
    {
      v22 = 56LL * v19;
      v23 = *(_DWORD *)(v22 + v20);
      if ( v23 == 1953394499 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v22 + v20 + 16));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + v20 + 8), v14);
        return v8;
      }
      if ( v23 )
        break;
      v24 = *(_DWORD *)(v22 + PoolTrackTable);
      if ( v24 )
      {
        *(_DWORD *)(v22 + v20) = v24;
      }
      else
      {
        if ( v19 == v18 - 1 )
          break;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(v22 + PoolTrackTable) )
        {
          *(_DWORD *)(v22 + PoolTrackTable) = 1953394499;
          *(_DWORD *)(v22 + v20) = 1953394499;
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
              v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v30 = (v29 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v29;
              if ( v30 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        v18 = v32;
      }
    }
    v19 = v17 & (v19 + 1);
  }
  while ( v19 != v21 );
  ExpInsertPoolTrackerExpansion(0x746E6F43u, v14, 0x200u);
  return v8;
}
