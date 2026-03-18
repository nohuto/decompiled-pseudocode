/*
 * XREFs of ExAllocateContiguousHeapPool @ 0x1402F93E0
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1402F8FFC (MiAllocateContiguousMemory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpAddTagForBigPages @ 0x140252860 (ExpAddTagForBigPages.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlpHpFreeHeap @ 0x1402AC6EC (RtlpHpFreeHeap.c)
 *     RtlpHpSegAlloc @ 0x1402AFD90 (RtlpHpSegAlloc.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1402F7978 (ExpInsertPoolTrackerExpansion.c)
 *     ExGetHeapFromType @ 0x1402F960C (ExGetHeapFromType.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePool @ 0x1405A2104 (EtwTracePool.c)
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
  __int64 v10; // r9
  __int64 v11; // r11
  unsigned __int64 v12; // r10
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  int v18; // r12d
  __int64 v19; // r8
  unsigned int v20; // r15d
  __int64 v21; // rbp
  int v22; // r13d
  __int64 v23; // rsi
  int v24; // eax
  int v25; // ecx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  bool v31; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v33; // [rsp+80h] [rbp+8h]

  v6 = 0LL;
  v8 = 0LL;
  HeapFromType = ExGetHeapFromType(512LL, a5, 0LL);
  if ( v12 > *(_QWORD *)(*(_QWORD *)qword_140C4E588 + 6912LL)
    || a2 < *(_QWORD *)(*(_QWORD *)qword_140C4E588 + 6920LL)
    || (unsigned __int64)(v11 - 1) <= 0x1FE )
  {
    goto LABEL_3;
  }
  if ( (*(_BYTE *)(HeapFromType + 269) & 7) == 0 || a4 >= *(unsigned int *)(HeapFromType + 464) )
    return v6;
  v14 = HeapFromType + 256;
  v15 = (a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v15 > *(unsigned int *)(HeapFromType + 272) )
    v14 = HeapFromType + 448;
  v16 = RtlpHpSegAlloc(v14, v15, v15, v15, 0x800000u);
  v8 = v16;
  if ( !v16 )
    return v6;
  if ( !(unsigned int)ExpAddTagForBigPages(v16, 1953394499, v15, 0x200u, 0, 0) )
  {
LABEL_3:
    if ( v8 )
      RtlpHpFreeHeap((__int128 *)HeapFromType, v8, 0, v10);
    return v6;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( PoolHitTag == 1953394499 )
    __debugbreak();
  v17 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v17 = EtwTracePool(3616, 512, 1953394499, v8, v15);
  LODWORD(v17) = KeGetPcr()->Prcb.Number;
  v18 = PoolTrackTableMask;
  v19 = PoolTrackTableSize;
  v20 = PoolTrackTableMask & 0x5DA6EBDA;
  v33 = PoolTrackTableSize;
  v21 = (__int64)*(&ExPoolTagTables + v17);
  v22 = PoolTrackTableMask & 0x5DA6EBDA;
  do
  {
    while ( 1 )
    {
      v23 = 56LL * v20;
      v24 = *(_DWORD *)(v23 + v21);
      if ( v24 == 1953394499 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v23 + v21 + 16));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + v21 + 8), v15);
        return v8;
      }
      if ( v24 )
        break;
      v25 = *(_DWORD *)(v23 + PoolTrackTable);
      if ( v25 )
      {
        *(_DWORD *)(v23 + v21) = v25;
      }
      else
      {
        if ( v20 == v19 - 1 )
          break;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(v23 + PoolTrackTable) )
        {
          *(_DWORD *)(v23 + PoolTrackTable) = 1953394499;
          *(_DWORD *)(v23 + v21) = 1953394499;
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
              v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v31 = (v30 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v30;
              if ( v31 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        v19 = v33;
      }
    }
    v20 = v18 & (v20 + 1);
  }
  while ( v20 != v22 );
  ExpInsertPoolTrackerExpansion(0x746E6F43u, v15, 0x200u);
  return v8;
}
